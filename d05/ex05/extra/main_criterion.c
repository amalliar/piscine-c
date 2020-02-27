#include <criterion/criterion.h>
#include <string.h>
#include "ft_strstr.c"

Test(test_suite, random_strings)
{
    cr_expect(strstr("Yo, Yo, Yo. 148, 3-to-the-3-to-the-6-to-the-9. Representin’ \
    the ABQ. What up, biatch? Leave it at the tone!", "3-") == \
              ft_strstr("Yo, Yo, Yo. 148, 3-to-the-3-to-the-6-to-the-9. Representin’ \
    the ABQ. What up, biatch? Leave it at the tone!", "3-"));
    cr_expect(strstr("Yo, Yo, Yo. 148, 3-to-the-3-to-the-6-to-the-9. Representin’ \
    the ABQ. What up, biatch? Leave it at the tone!", "biatch") == \
              ft_strstr("Yo, Yo, Yo. 148, 3-to-the-3-to-the-6-to-the-9. Representin’ \
    the ABQ. What up, biatch? Leave it at the tone!", "biatch"));
    cr_expect(strstr("Yo, Yo, Yo. 148, 3-to-the-3-to-the-6-to-the-9. Representin’ \
    the ABQ. What up, biatch? Leave it at the tone!", ",") == \
              ft_strstr("Yo, Yo, Yo. 148, 3-to-the-3-to-the-6-to-the-9. Representin’ \
    the ABQ. What up, biatch? Leave it at the tone!", ","));
    cr_expect(strstr("Yo, Yo, Yo. 148, 3-to-the-3-to-the-6-to-the-9. Representin’ \
    the ABQ. What up, biatch? Leave it at the tone!", "I love Breaking Bad!!") == \
              ft_strstr("Yo, Yo, Yo. 148, 3-to-the-3-to-the-6-to-the-9. Representin’ \
    the ABQ. What up, biatch? Leave it at the tone!", "I love Breaking Bad!!"));
    cr_expect(strstr("Yo", "POW!!") == ft_strstr("Yo", "POW!!"));
}
