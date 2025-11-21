#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%'){
			format++;
			if (*format == 'c'){
				char c = va_arg(args, int);
				putchar(c);
				count++;
			}
			else if (*format == 'i'){
				int num = va_arg(args, int);
				printf("%d", num);
				if (num == 0){
					count++;
				}
				else{
					int temp = num;
					if (temp < 0){
						count++;
						temp = -temp;
					}
					while (temp > 0){
						count++;
						temp /= 10;
					}
				}
			}
			else if (*format == 's'){
				char *str = va_arg(args, char *);
				if (str == NULL) str = "(null)";
				while (*str){
					putchar(*str);
					str++;													              count++;
				}
			}
		}
		else{
			putchar(*format);
			count++
		}
		format++;
	}
	va_end(args);
	return count;
}
