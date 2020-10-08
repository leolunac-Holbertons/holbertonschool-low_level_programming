#include "holberton.h"

int _pali(int len, char *s1, char *s2, int i)
{
        if (len >= 0 && s1[i] == s2[len])
        {
                _pali((len - 1),(s1),(s2), i + 1);
                return (1);
        }
        else
        {
		return (0);
        }

}
int _lenght(int len, char *s1, char *s2)
{
        if (s2 != '\0')
        {
                _lenght(len + 1, s1, s2 + 1);
        }
        return (len);
}
int is_palindrome(char *s)
{
        int l = _lenght(0, s, s);

        return(_pali(l,s,s,0));
}
