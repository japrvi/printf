/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:32:05 by jpozuelo          #+#    #+#             */
/*   Updated: 2021/10/22 16:47:16 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int				ft_printf(const char *, ...);
int				chooser(va_list args, char c);
char			*itoa(int num);
char			*uitoa(unsigned int num);
char			*itoa_base(int num, char *base);
char			*itoa_pointer(unsigned long num, char *base);
char			*ft_char(char c);
unsigned int	ft_strlon(char *str);
void			ft_rev_str(char *str, unsigned int size);

#endif
