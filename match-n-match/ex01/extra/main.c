#include <stdio.h>

int		nmatch(char *s1, char *s2);

int		main(void)
{
	printf("nmatching: \"main.c\" && \"*.c\" --> %d\n", \
		nmatch("main.c", "*.c"));
	printf("nmatching: \"abcbd\" && \"*b*\" --> %d\n", \
		nmatch("abcbd", "*b*"));
	printf("nmatching: \"abc\" && \"a**\" --> %d\n", \
		nmatch("abc", "a**"));
	printf("nmatching: \"abc\" && \"*a***\" --> %d\n", \
		nmatch("abc", "*a***"));
	printf("nmatching: \"xxxxxxx\" && \"xx***x*****x*xxx****\" --> %d\n", \
		nmatch("xxxxxxx", "xx***x*****x*xxx****"));
	printf("nmatching: \"12312323232323\" && \"1*23*23*23\" --> %d\n", \
		nmatch("12312323232323", "1*23*23*23"));
	printf("nmatching: \"abcbf\" && \"*f*c*\" --> %d\n", \
		nmatch("abcbf", "*f*c*"));
	return (0);
}
