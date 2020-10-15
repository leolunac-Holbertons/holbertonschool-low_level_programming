#ifndef HOLBERTON_H
#define HOLBERTON_H

/*Function to print a character*/
int _putchar(char c);

/*Function that allocates memory using malloc*/
void *malloc_checked(unsigned int b);

/*Function that concatenates two strings*/
char *string_nconcat(char *s1, char *s2, unsigned int n);

/*Function that allocates memory for an array, using malloc*/
void *_calloc(unsigned int nmemb, unsigned int size);

/*Function that creates an array of integers.*/
int *array_range(int min, int max);

#endif /* HOLBERTON_H */
