#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
/**
 *struct op - struct op
 *@c: string
 *@function: pointer to function
 */
typedef struct op
{
	char *c;
	void (*function)();
} opt;

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC FUNCTIONS */
