#ifndef PRINTF_H
# define PRINTF_H
# include "libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *, ...);
//c designara si se debe tratar con o sin signo.
//base puede ser cualquier cosa como por ejemplo:
//01234567789abcdef o 0123456789ABCDEF
char	*itoa(int num, char c);
char	*itoa_base(int num, char *base);
char	*itoa_pointer(int num, char *base);

#endif
