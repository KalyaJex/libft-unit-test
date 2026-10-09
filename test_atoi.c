#if defined HEADERS
// include here
#include <stdlib.h>
#elif defined TESTS
TEST("ft_atoi should have same behavior as libc atoi") {
	printf("* ************************************************************************** *\n");
	printf("* Assertion: ft_atoi should have same behavior as libc atoi                  *\n");
	char *strings[6] = {"1234", "   1234", "   -1234", "   +1234", "   +-1234", "12a34"};
	foreach(char **str, strings)
	{
		printf("* ft_atoi(\"%s\") == atoi(\"%s\")\n", *str, *str);
		ASSERT(ft_atoi(*str) == atoi(*str));
		printf("*                                                                            *\n");
	}
	printf("* ************************************************************************** *\n");
	printf("\n");
}
#endif