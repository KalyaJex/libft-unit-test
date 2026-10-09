#if defined HEADERS
// include here
#elif defined TESTS
TEST("ft_isprint returns true if printable") {
	printf("* ************************************************************************** *\n");
	printf("* Assertion: ft_isprint returns true if printable                            *\n");
	printf("* ft_isprint('a') should be true                                             *\n");
	ASSERT(ft_isprint('a') == 1);
	printf("*                                                                            *\n");
	printf("* ft_isprint('A') should be true                                             *\n");
	ASSERT(ft_isprint('A') == 1);
	printf("*                                                                            *\n");
	printf("* ft_isprint('0') should be true                                             *\n");
	ASSERT(ft_isprint('0') == 1);
	printf("*                                                                            *\n");
	printf("* ft_isprint('\\n') should be false                                           *\n");
	ASSERT(ft_isprint('\n') == 0);
	printf("*                                                                            *\n");
	printf("* ************************************************************************** *\n");
	printf("\n");
}
#endif