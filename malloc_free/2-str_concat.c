#include <stdlib.h>

/**
 * str_len - Calcule la longueur d'une chaîne de caractères.
 * @str: La chaîne de caractères.
 *
 * Return: La longueur de la chaîne.
 */
int str_len(char *str)
{
	int len = 0;

	/* Si la chaîne est NULL, on la considère comme vide */
	if (str == NULL)
		return (0);

	/* Calculer la longueur de la chaîne */
	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * str_concat - Concatène deux chaînes de caractères.
 * @s1: La première chaîne.
 * @s2: La deuxième chaîne.
 *
 * Return: Un pointeur vers une nouvelle chaîne contenant s1 suivi de s2,
 *         ou NULL si l'allocation échoue.
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int len1 = str_len(s1);
	int len2 = str_len(s2);
	int total_len = len1 + len2 + 1; /* +1 pour le caractère nul */
	int i, j;

	/* Allouer de la mémoire pour la nouvelle chaîne */
	result = (char *)malloc(total_len * sizeof(char));
	if (result == NULL)
		return (NULL);

	/* Copier s1 dans la chaîne résultante */
	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	/* Copier s2 dans la chaîne résultante */
	for (j = 0; j < len2; j++)
		result[len1 + j] = s2[j];

	/* Ajouter le caractère nul à la fin */
	result[len1 + len2] = '\0';

	return (result);
}

