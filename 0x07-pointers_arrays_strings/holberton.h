#ifndef HOLBERTON_H
#define HOLBERTON_H

/*Function that prints characters*/
int _putchar(char c);

/*Function that fills memory with a constant byte*/
char *_memset(char *s, char b, unsigned int n);

/*function that copies memory area*/
char *_memcpy(char *dest, char *src, unsigned int n);

/*function that locates a character in a string*/
char *_strchr(char *s, char c);

/*FBunction that gets the length of a prefix substring*/
unsigned int _strspn(char *s, char *accept);

/*Function that locates a substring*/
char *_strstr(char *haystack, char *needle);

#endif /* HOLBERTON_H */
