#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>

/**
 * struct identifier- struct to define a identifier format object.
 *
 * @id: identifier of function to call
 * @fp: The function associated
 */
typedef struct identifier
{
	char id;
	int (*fp)(va_list);
} ft;

int _putchar(char c);
int print_char(va_list ch);
int print_str(va_list str);
int print_int(va_list integer);
int _printf(const char *format, ...);
int print_spe(char c);
int print_bin(va_list n);
int print_ui(va_list ui);
int print_oct(va_list n);
int print_hex(va_list n);
int print_HEX(va_list n);
int print_rot13(va_list s);
int print_rev(va_list str);
int print_S(va_list s);
int conv_HEX(char str);
int print_p(va_list pointer);
#endif /*_HOLBERTON_H*/
