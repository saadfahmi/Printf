#include "main.h"
int print_binary(unsigned int num)
{         
        int i;  
        int arr[32];
        int j;
        if(num == 0)
        {
            _putchar('0');
            return(1);
        }
        while(num > 0)
        {
                arr[j] = num % 2;
                num /= 2;
                j++;

        }
        for (i = j - 1; i >= 0; i--)
                putchar(arr[i] + '0');
        
        return(j);
}
/**
 * print_S - Prints a string with special handling for S
 * @str: The string to be printed.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int print_s(const char *str)
{
        int i;
        int count;
        i= 0;
        count = 0;
        if(str == NULL)
            return(print_S("NULL"));
        while(str[i])
        if( str[i] >= 32 &&  str[i] <= 127)
        {
            _putchar(str[i]);
             count++;
        }
        else
        {
                _putchar('\\');
                _putchar('x');
                if(str[i] < 16)
                {
                        _putchar('0');
			            count += 3;
			            count += print_hexa(str[i], 1);

                }
                i++;
        }

        return(count);
}
/*
 * reversed - Prints a reversed string.
 * @str: The string to be printed in reverse.
 *
 * Return: The number of characters printed.
 */
int reversed(const char *str)
{
        int  i;
        int j;
        j = 0;
        while(str[j])
            j++;
        for(i = j - 1; i >= 0; i--)
            _putchar(str[i]);
            return(j);
    
}
/**
 * _rot13 - Prints a ROT13-encrypted string.
 * @str: The string to be printed.
 *
 * Return: The number of characters printed.
 */
int _rot13(const char *str)
{
        int i;
        char chars;
        i = 0;
        if(str[i] == NULL)
            return(print_S("NULL"));
        while(str[i])
        {
                chars = str[i];
                if((chars >= 'a' && chars <= 'z') || (chars >= 'A' && chars <= 'Z'))
                {
                    if ((chars >= 'a' && chars <= 'm') || (chars >= 'A' && chars <= 'M'))
                        chars += 13;
                    else
                        chars -= 13;
              }
                _putchar(chars);
		        i++;
        }
        return(i);

}
