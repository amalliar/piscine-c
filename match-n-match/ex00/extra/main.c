#include <stdio.h>

int		match(char *s1, char *s2);

int		main(void)
{
	printf("matching: \"main.c\" && \"*.c\" --> %d\n", \
		match("main.c", "*.c"));
	printf("matching: \"abcbd\" && \"*b*\" --> %d\n", \
		match("abcbd", "*b*"));
	printf("matching: \"abc\" && \"a**\" --> %d\n", \
		match("abc", "a**"));
	printf("matching: \"xxxxxxx\" && \"xx***x*****x*xxx****\" --> %d\n", \
		match("xxxxxxx", "xx***x*****x*xxx****"));
	printf("matching: \"12312323232323\" && \"1*23*23*23\" --> %d\n", \
		match("12312323232323", "1*23*23*23"));
	printf("matching: \"abcbf\" && \"*f*c*\" --> %d\n", \
		match("abcbf", "*f*c*"));
	printf("matching: \"affbcbf\" && \"*f*c*\" --> %d\n", \
		match("affbcbf", "*f*c*"));
	printf("matching: \"\" && \"***\" --> %d\n", \
		match("", "***"));
	printf("matching: \"\" && \"\" --> %d\n", \
		match("", ""));
	printf("matching: \"acabadba\" && \"a**ca*d\" --> %d\n", \
		match("acabadba", "a**ca*d"));
	printf("matching: \"acabadba\" && \"a**ca*d*\" --> %d\n", \
		match("acabadba", "a**ca*d*"));
	return (0);
}
