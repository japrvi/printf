/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:31:35 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/10/22 18:51:41 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

char	*itoa_base(unsigned num, char *base)
{
	char			*res;
	unsigned int	i;

	res = (char *) malloc(5);
	if (res)
	{
		i = 0;
		while (num >= 16)
		{
			res[i++] = base[num % 16];
			num /= 16;
		}
		res[i] = num % 16;
		ft_rev_str(res, i++);
		res[i] = 0;
	}
	return (res);
}
