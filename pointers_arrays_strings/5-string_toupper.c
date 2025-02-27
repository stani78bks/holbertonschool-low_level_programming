#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The input string.
 * 
 * Return: The resulting string with all lowercase letters changed to uppercase.
 */
char *string_toupper(char *str)
{
    int i = 0;

    // Iterate through each character of the string
    while (str[i] != '\0')
    {
        // Check if the character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            // Convert it to uppercase
            str[i] = str[i] - 32;
        }
        i++;
    }
    
    return str;
}
