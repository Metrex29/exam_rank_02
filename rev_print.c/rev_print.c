/* Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$ */

#include "unistd.h"

int strlen_ft(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return i;
}

int main(int ac, char **av)
{
    char *arr;
    int i = 0;
    if (ac == 2)
    {
        int len = strlen_ft(av[1]);

        while (len > 0)
        {
            arr[i] = av[1][i];
            i++;
            len--;
        }
        while (arr[i])
        {
            write(1, &arr[i], 1);
            i++;
        }
    }
}