#if defined HEADERS
// include here
#include <strings.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
#elif defined TESTS

int	check_zero(int *arr, size_t size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", arr[i]);
		if (arr[i] != 0)
			return (0);
	}
	return 1;
}

TEST("ft_calloc: every single bytes should be completely zeroed out") {
	printf("* ************************************************************************** *\n");
	printf("* ft_calloc: every single bytes should be completely zeroed out              *\n");
	printf("*                                                                            *\n");
	size_t nmemb = 5;
	size_t size = sizeof(int);
	printf("%ld\n", nmemb * size);
	int *ptr = ft_calloc(nmemb, size);
	ASSERT(check_zero(ptr, nmemb * size) == 1);
	printf("*                                                                            *\n");
	printf("* ************************************************************************** *\n");
	printf("\n");
}

TEST("ft_calloc should not overflow") {
	printf("* ************************************************************************** *\n");
	printf("* ft_calloc should not overflow                                              *\n");
	printf("*                                                                            *\n");
	size_t nmemb = SIZE_MAX/2;
	size_t size = 4;
	int *ptr = ft_calloc(nmemb, size);
	ASSERT(!ptr);
	printf("*                                                                            *\n");
	printf("* ************************************************************************** *\n");
	printf("\n");
}
#endif