#if defined HEADERS
// include here
#elif defined TESTS
TEST("ft_isalnum returns true if alphanumeric") {
	printf("* ************************************************************************** *\n");
	printf("* Assertion: ft_isalnum returns true if alphanumeric                         *\n");
	printf("* ft_isalnum('a') should be true                                             *\n");
	ASSERT(ft_isalnum('a') == 1);
	printf("*                                                                            *\n");
	printf("* ft_isalnum('A') should be true                                             *\n");
	ASSERT(ft_isalnum('A') == 1);
	printf("*                                                                            *\n");
	printf("* ft_isalnum('0') should be true                                             *\n");
	ASSERT(ft_isalnum('0') == 1);
	printf("*                                                                            *\n");
	printf("* ft_isalnum(' ') should be false                                            *\n");
	ASSERT(ft_isalnum(' ') == 0);
	printf("*                                                                            *\n");
	printf("* ************************************************************************** *\n");
	printf("\n");
}
#endif