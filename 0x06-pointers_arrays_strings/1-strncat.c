#include "main.h"
/**
 * _strncat - concatenate two strings
 *
 * @dest: destination string
 * @src: source srting
 * @n: integer that specify the max num of chars copy from src to dest
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
        int dest_len = 0;
        int a = 0;

        while (dest[dest_len] != '\0')
        {
                dest_len++;
        }
        while (a < n && src[a] != '\0')
        {
                dest[dest_len + a] = src[a];
                a++;
        }
        dest[dest_len + a] = '\0';
        return (dest);
}
