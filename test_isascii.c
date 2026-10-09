#if defined HEADERS
// include here
#elif defined TESTS
TEST("ft_isascii returns true if in ascii") {
	printf("* ************************************************************************** *\n");
	printf("* Assertion: ft_isascii returns true if in ascii                             *\n");
	printf("* ft_isascii('a') should be true                                             *\n");
	ASSERT(ft_isascii('a') == 1);
	printf("*                                                                            *\n");
	printf("* ft_isascii('A') should be true                                             *\n");
	ASSERT(ft_isascii('A') == 1);
	printf("*                                                                            *\n");
	printf("* ft_isascii('0') should be true                                             *\n");
	ASSERT(ft_isascii('0') == 1);
	printf("*                                                                            *\n");
	printf("* ft_isascii('\\n') should be true                                            *\n");
	ASSERT(ft_isascii('\n') == 1);
	printf("*                                                                            *\n");
	printf("* ft_isascii(128) should be false                                            *\n");
	ASSERT(ft_isascii(128) == 0);
	printf("*                                                                            *\n");
	printf("* ************************************************************************** *\n");
	printf("\n");
}
#endif