#if defined HEADERS
// include here
#elif defined TESTS
TEST("ft_isdigit returns true if digit") {
	printf("* ************************************************************************** *\n");
	printf("* Assertion: ft_isdigit returns true if digit                                *\n");
	printf("* ft_isdigit('a') should be false                                            *\n");
	ASSERT(ft_isdigit('a') == 0);
	printf("*                                                                            *\n");
	printf("* ft_isdigit('0') should be true                                             *\n");
	ASSERT(ft_isdigit('0') == 1);
	printf("*                                                                            *\n");
	printf("* ft_isdigit('9') should be true                                             *\n");
	ASSERT(ft_isdigit('9') == 1);
	printf("*                                                                            *\n");
	printf("* ft_isdigit(' ') should be false                                            *\n");
	ASSERT(ft_isdigit(' ') == 0);
	printf("*                                                                            *\n");
	printf("* ************************************************************************** *\n");
	printf("\n");
}
#endif