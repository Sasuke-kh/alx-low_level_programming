#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int multiply_numbers(int num1, int num2);
int _putchar(char c); // Function declaration for _putchar

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        return 98;
    }

    char *num1_str = argv[1];
    char *num2_str = argv[2];

    // Check if num1 and num2 contain only digits
    for (int i = 0; num1_str[i] != '\0'; i++)
    {
        if (!isdigit(num1_str[i]))
        {
            _putchar('E');
            _putchar('r');
            _putchar('r');
            _putchar('o');
            _putchar('r');
            _putchar('\n');
            return 98;
        }
    }

    for (int i = 0; num2_str[i] != '\0'; i++)
    {
        if (!isdigit(num2_str[i]))
        {
            _putchar('E');
            _putchar('r');
            _putchar('r');
            _putchar('o');
            _putchar('r');
            _putchar('\n');
            return 98;
        }
    }

    int num1 = atoi(num1_str);
    int num2 = atoi(num2_str);

    int result = multiply_numbers(num1, num2);

    printf("%d\n", result);

    return 0;
}

int multiply_numbers(int num1, int num2)
{
    return num1 * num2;
}

int _putchar(char c)
{
    return putchar(c);
}
