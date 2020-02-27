#include <assert.h>
#include <string.h>
#include <stdio.h>
#include "ft_strstr.c"

int		main(void)
{
	fprintf(stderr, "\033[1;31m");
    assert(strstr("Yo, Yo, Yo. 148, 3-to-the-3-to-the-6-to-the-9. Representin’ " 
    "the ABQ. What up, biatch? Leave it at the tone!", "3-") == \
              ft_strstr("Yo, Yo, Yo. 148, 3-to-the-3-to-the-6-to-the-9. Representin’ "
    "the ABQ. What up, biatch? Leave it at the tone!", "3-"));
    assert(strstr("Yo, Yo, Yo. 148, 3-to-the-3-to-the-6-to-the-9. Representin’ "
    "the ABQ. What up, biatch? Leave it at the tone!", "biatch") == \
              ft_strstr("Yo, Yo, Yo. 148, 3-to-the-3-to-the-6-to-the-9. Representin’ "
    "the ABQ. What up, biatch? Leave it at the tone!", "biatch"));
    assert(strstr("Yo, Yo, Yo. 148, 3-to-the-3-to-the-6-to-the-9. Representin’ "
    "the ABQ. What up, biatch? Leave it at the tone!", ",") == \
              ft_strstr("Yo, Yo, Yo. 148, 3-to-the-3-to-the-6-to-the-9. Representin’ "
    "the ABQ. What up, biatch? Leave it at the tone!", ","));
    assert(strstr("Yo, Yo, Yo. 148, 3-to-the-3-to-the-6-to-the-9. Representin’ "
    "the ABQ. What up, biatch? Leave it at the tone!", "I love Breaking Bad!!") == \
              ft_strstr("Yo, Yo, Yo. 148, 3-to-the-3-to-the-6-to-the-9. Representin’ "
    "the ABQ. What up, biatch? Leave it at the tone!", "I love Breaking Bad!!"));
    assert(strstr("Yo", "POW!!") == ft_strstr("Yo", "POW!!"));
	fprintf(stdout, "\033[1;32m");
	printf("simple_tests:    🗸 Test Passed\n");
	printf("\nYou have passed all of the tests! :)");
	fprintf(stdout, "\033[0m\n");
	return (0);
}
