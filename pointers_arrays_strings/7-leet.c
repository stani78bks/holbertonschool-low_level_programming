#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The input string to encode.
 * Return: Pointer to the encoded string.
 */
char *leet(char *str)
{
    char letters[] = "aAeEoOtTlL";
    char leet_nums[] = "4433007711";
    int i, j;

    for (i = 0; str[i] != '\0'; i++) /* Loop through the input string */
    {
        for (j = 0; letters[j] != '\0'; j++) /* Loop through the letters array */
        {
            if (str[i] == letters[j]) /* Check for matching character */
            {
                str[i] = leet_nums[j]; /* Replace with leet equivalent */
                break;
            }
        }
    }
    return (str);
}
