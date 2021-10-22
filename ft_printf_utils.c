/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 18:16:42 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/10/22 19:42:52 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_strlon(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_rev_str(char *str, unsigned int size)
{
	unsigned int	i;
	char			aux;

	i = 0;
	while (i < (size / 2))
	{
		aux = str[size - (i + 1)];
		str[size  - (i + 1)] = str[i];
		str[i] = aux;
		i++;
	}
}
