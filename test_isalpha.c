#if defined HEADERS
// include here
#elif defined TESTS
TEST("ft_isalpha returns true if alphabetic") {
	printf("* ************************************************************************** *\n");
	printf("* Assertion: ft_isalpha returns true if alphabetic                           *\n");
	printf("* ft_isalpha('a') should be true                                             *\n");
	ASSERT(ft_isalpha('a') == 1);
	printf("*                                                                            *\n");
	printf("* ft_isalpha('A') should be true                                             *\n");
	ASSERT(ft_isalpha('A') == 1);
	printf("*                                                                            *\n");
	printf("* ft_isalpha('0') should be false                                            *\n");
	ASSERT(ft_isalpha('0') == 0);
	printf("*                                                                            *\n");
	printf("* ************************************************************************** *\n");
	printf("\n");
}
#endif