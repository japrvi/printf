/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:31:50 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/10/13 20:00:56 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	*chooser(va_list args, char c)
{
}

char	*itoa(int num)
{
	unsigned int	i;
	char			*res;
	char			sign;

	i = 0;
	res = (char *) malloc(12);
	sign = (num < 0);
	while (n >= 10)
	{
		res[i++] = n % 10 + '0';
		n /= 10;
	}
	res[i] = n % 10 + '0';
	if (sign)
		res[++i] = '-';
	rev_str(res, i);
	res[++i] = 0;
	return(res);
}

char	*uitoa(unsigned int num)
{
	unsigned int	i;
	char			*res;
	char			sign;

	i = 0;
	res = (char *) malloc(12);
	sign = (num < 0);
	while (n >= 10)
	{
		res[i++] = n % 10;
		n /= 10;
	}
	rev_str(res, i);
	res[i] = 0;
	return(res);
}

char *itoa_pointer(unsigned long int num, char *base)
{
	char			*res;
	unsigned int	i;
	unsigned long	len;

	len = (unsigned long) ft_strlon(base);
	res = (char *) malloc(19);
	res[0] = '0';
	res[1] = 'x';
	i = 3;
	while (num >= base)
	{
		res[i++] = base[num % len];
		num /= len;
	}
	res[i++] = base[num % len];
	
	res[i] = 0;
}
