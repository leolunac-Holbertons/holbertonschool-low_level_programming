#ifndef HOLBERTON_H
#define HOLBERTON_H

/*Function that prints characters*/
int _putchar(char c);

/*Function that concatenates two strings*/
char *_strcat(char *dest, char *src);

/*Function concatenates two strings, but have to use at most n bytes from src*/
char *_strncat(char *dest, char *src, int n);

/*Function that copies a string*/
char *_strncpy(char *dest, char *src, int n);

/*Function that compares two strings*/
int _strcmp(char *s1, char *s2);

/*Function that reverses the content of an array of integers*/
void reverse_array(int *a, int n);
ar *string_toupper(char *);

/*function that capitalizes all words of a string*/
char *cap_string(char *);

/*function that encodes a string into 1337*/
char *leet(char *);

/*function that encodes a string using rot13*/
char *rot13(char *);

/*function that prints an integer*/
void print_number(int n);

#endif /* HOLBERTON_H */
