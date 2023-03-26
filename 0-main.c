#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    //unsigned int ui;
    //void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("NORMAL PRINTF: Let's try to printf a simple sentence.\n");
    //_printf("Character:[%c]\n", 'H');
    //printf("NORMAL PRINTF: Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("NORMAL PRINTF: String:[%s]\n", "I am a string !");
    //len = _printf("Percent:[%%]\n");
    //len2 = printf("NPRMAL PRINTF: Percent:[%%]\n");

    return (0);
}
