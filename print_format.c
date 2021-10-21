/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:31:50 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/10/21 16:12:10 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		chooser(va_list args, char c)
{
	char			*aux;
	unsigned int	len;

	if (c == 'c')
		aux = ft_char(c);
	if (c == 'i' || c == 'd')
		aux = itoa(va_arg(args, int));
	if (c == 'u')
		aux = uitoa(va_arg(args, int));
	if (c == 'p')
		aux = itoa_pointer(va_arg(args, long int), "0123456789abcdef");
	if (c == 'x')
		aux = itoa_base(va_arg(args, int), "0123456789abcdef");
	if (c == 'X')
		aux = itoa_base(va_arg(args, int),"0123456789ABCDEF");
	if (c == 's')
		aux = va_arg(args, char *);
	if (c == '%')
		aux = ft_char('%');
	len = ft_strlon;
	write(1, aux, len);
	return (len);
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

char	*itoa_pointer(unsigned long int num, char *base)
{
	char			*res;
	unsigned int	i;
	unsigned long	len;

	len = (unsigned long) ft_strlon(base);
	res = (char *) malloc(19);
	res[0] = '0';
	res[1] = 'x';
	i = 2;
	while (num >= base)
	{
		res[i++] = base[num % len];
		num /= len;
	}
	res[i] = base[num % len];
	rev_str(res, i)
	res[i] = 0;
	return (res);
}

char	*ft_char(char c)
{
	char *aux;

	aux = (char *) malloc(2);
	aux[0] = c;
	aux[1] = 0;
	return (aux);
}
