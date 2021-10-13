/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:31:35 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/10/13 19:10:17 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

//Recibe por parametros  una cadena de texto a imprimir que escribe el salida estandar
//hasta que encuentra un caracter %, si este ha sido encontrado continuara escribiendo los
//caracteres de otra cadena de texto que halla sido almacenada en aux.
//Devuelve 0 si no ha habido errores, devuelve 1 si lo ha habido.
int	ft_printf(const char *main, ...)
{
	char		*aux;
	va_list		args;
	size_t		i;

	va_start(args, main);
	im = 0;
	while (main[i])
	{
		if (main[i] == '%')
		{
			aux = chooser(args, main[i + 1]);
			if (aux)
			{
				write(1, aux, ft_strlon(aux));
				free()
			}
			else 
				return (1);
			i += 2;
		}
		else
			write(1, main + i, 1);
	}
	return (0);
}

char	*chooser(va_list args, char c)
{
}

char 	*itoa(int num, char c)
{
}

char	*itoa_base(int num, char *base)
{
}

char	*itoa_pointer(int num, char *base)
{
}

char	*putchar(char c)
{
}
