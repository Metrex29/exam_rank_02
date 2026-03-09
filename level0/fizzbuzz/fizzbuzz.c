/* Assignment name  : fizzbuzz
Expected files   : fizzbuzz.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 3, it prints 'fizz' instead.

If the number is a multiple of 5, it prints 'buzz' instead.

If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

Example:

$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$>  */
#include "unistd.h"
void putchar(char c)
{
    write(1, &c, 1);
}

void putnbr(int n)
{
    if (n == -2147483648)
    {   write(1, "-2147483648", 11);
        return;
    }
    if (n < 0)
    {
        putchar('-');
        n = -n;
    }
    if (n > 9)
    {
        putnbr(n / 10);
    }
    putchar(n % 10 + '0');
}

#include "unistd.h"
int main()
{
    int i = 0;
    while (i < 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write(1, "fizz", 4);
        else if (i % 5 == 0)
            write(1, "buzz", 4);
        else
        {
            putnbr(i);
        }
        write(1, "\n", 1);

        i++;
    }
}