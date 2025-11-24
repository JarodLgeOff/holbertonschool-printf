#include <stdarg.h>
#include <unistd.h>
#include "project_printf.h"
/**
 * 
 */
int _printf(const char *format,...)
{
	va_list ap;
	int (*type)(va_list);
	unsigned int i = 0;
	if (format == NULL)
		return (-1);
	va_start(ap, format);

	if(!format || (format[0] == '%' && !format[1]))
	{
		return(-1);
	}
	if(!format[0] == '%' && format[1] == ' ' && !format[2])
	{
		return(-1);
	}
	while (format[i])
}

// version avec des for

int _printf(const char *format,...)
{
	va_list ap;
	int (*type)(va_list);
	unsigned int i;
	int count = 0;

	if (format == NULL)
		return (-1);

	va_start(ap, format);

	for (i = 0, format[i] != '\0');
	//première boucle: on commence a `i = 0` et on continue tant qu'on est pas à la fin 
	{
		if(format[i] != '%')
			{
			_putchar(format[i]);
			i++;
			// ici si le caractère n'est pas % on print avec _putchar, 
			}

		if (format[i + 1] == '\0') //La si on a un % sans rien aprés erreur!
			return (-1);
		
		if (format[i + 1] == '%')
			{
			_putchar('%');
			i += 2; // la on lui dit si les deux prochain char sont de % imprime le second
			}

		type = find_function(format[i + 1]); // la on cherche le caractere aprés le % pour savoir quel print on cherche ( print_char, print_int ...)
		// et on la stocke dans type
		if (type != NULL)
			{
				count += type(ap);
				i += 2; // ici on traite la lettre aprés le % pour faire comprendre que c'est un argument et pas l'imprimer et du coup sauté celle ci
			}
			// ici ça va nous servir a print autre chose que les arguments connu de printf
			_putchar('%');
			_putchar(format[i + 1]);// le caractère aprés le %
			i += 2;
	}
	va_end(ap);
	return (count);
}
//RESUMÉ
// en gros la on lit la phrase lettre par lettre donc soit elle trouve une lettre normale et la print
//soit un symbole comme le %
// un arguments spécial (c,d,i,s) et remplace le code apr la vrai valeur (H,%,etc....)
// un code qui n'existe pas et du coup lke print tel quel ( cette partie je t'avoue je l'ai vu sur le net ou on expliqe sinon ca cause des erreurs si elle n'y ai pas)
//j'ai surement oubliè pas mal de trucs !!!!