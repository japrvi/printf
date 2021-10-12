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
				write(1, aux, ft_strlen(aux));
			else 
				return (1);
			i = i + 2;
		}
		else
			write(1, main + i, 1);
	}
	return (0);
}
//Analiza el caracter c y escoge la función adecuada. Estas funciones
//devolveran como resultado null en el caso de que el delimitador no sea valido
//o una cadena de caracteres que permite seguir imprimiendo.
char	*chooser(va_list args, char c)
{
}
//%d,%i,%u. Reservan memoria de manera dinámica. Al terminar la lectura de aux
//debe liberarse.
char 	*itoa(int num, char c)
{
}
//%x,%X
char	*itoa_base(int num, char *base)
{
}
//%p
char	*itoa_pointer(int num, char *base)
{
}
//%c,%%
char	*putchar(char c)
{
}
