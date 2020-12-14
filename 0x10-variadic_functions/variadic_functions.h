#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct tipo - Struct tipo
 *
 * @car: the character
 * @f: The function associated
 */
typedef struct tipo
{
	char *car;
	void (*f)();
} tipos;
#endif
