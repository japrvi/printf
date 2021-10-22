/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:31:35 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/10/21 16:08:06 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *main, ...)
{
	va_list		args;
	size_t		i;
	int			ack;

	va_start(args, main);
	i = 0;
	ack = 0;
	while (main[i])
	{
		if (main[i] == '%')
		{
			ack += chooser(args, main[i + 1]);
			i += 2;
		}
		else
		{
			write(1, main + i, 1);
			ack++;
			i++;
		}
	}
	return (ack);
}
