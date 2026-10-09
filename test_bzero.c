#if defined HEADERS
// include here
#include <strings.h>
#include <stdlib.h>
#include <stddef.h>
#elif defined TESTS

extern int	verify_mem(const unsigned char *s, unsigned char val, size_t n);

TEST("ft_bzero should only modify targeted memory block") {
	printf("* ************************************************************************** *\n");
	printf("* Assertion: ft_bzero should only modify targeted memory block (zero size)   *\n");
	printf("*                                                                            *\n");
	size_t size = 0;
	size_t padding = 8;
	size_t total_size = size + (padding * 2);
	unsigned char buffer[total_size];
	for (size_t i = 0; i < total_size; i++)
	{
		buffer[i] = 0xAA;
	}
	unsigned char *target = buffer + padding;
	ft_bzero(target, size);
	printf("* before targeted memory block                                               *\n");
	ASSERT(verify_mem(buffer, 0xAA, padding) == 1);
	printf("* inside targeted memory block                                               *\n");
	ASSERT(verify_mem(target, 0x00, size) == 1);
	printf("* after targeted memory block                                                *\n");
	ASSERT(verify_mem(target + size, 0xAA, padding) == 1);
	printf("*                                                                            *\n");
	printf("* ************************************************************************** *\n");
	printf("\n");
}

TEST("ft_bzero should only modify targeted memory block") {
	printf("* ************************************************************************** *\n");
	printf("* Assertion: ft_bzero should only modify targeted memory block (single byte) *\n");
	printf("*                                                                            *\n");
	size_t size = 1;
	size_t padding = 8;
	size_t total_size = size + (padding * 2);
	unsigned char buffer[total_size];
	for (size_t i = 0; i < total_size; i++)
	{
		buffer[i] = 0xAA;
	}
	unsigned char *target = buffer + padding;
	ft_bzero(target, size);
	printf("* before targeted memory block                                               *\n");
	ASSERT(verify_mem(buffer, 0xAA, padding) == 1);
	printf("* inside targeted memory block                                               *\n");
	ASSERT(verify_mem(target, 0x00, size) == 1);
	printf("* after targeted memory block                                                *\n");
	ASSERT(verify_mem(target + size, 0xAA, padding) == 1);
	printf("*                                                                            *\n");
	printf("* ************************************************************************** *\n");
	printf("\n");
}

TEST("ft_bzero should only modify targeted memory block") {
	printf("* ************************************************************************** *\n");
	printf("* Assertion: ft_bzero should only modify targeted memory block (odd sizing)  *\n");
	printf("*                                                                            *\n");
	size_t size = 7;
	size_t padding = 8;
	size_t total_size = size + (padding * 2);
	unsigned char buffer[total_size];
	for (size_t i = 0; i < total_size; i++)
	{
		buffer[i] = 0xAA;
	}
	unsigned char *target = buffer + padding;
	ft_bzero(target, size);
	printf("* before targeted memory block                                               *\n");
	ASSERT(verify_mem(buffer, 0xAA, padding) == 1);
	printf("* inside targeted memory block                                               *\n");
	ASSERT(verify_mem(target, 0x00, size) == 1);
	printf("* after targeted memory block                                                *\n");
	ASSERT(verify_mem(target + size, 0xAA, padding) == 1);
	printf("*                                                                            *\n");
	printf("* ************************************************************************** *\n");
	printf("\n");
}

TEST("ft_bzero should only modify targeted memory block") {
	printf("* ************************************************************************** *\n");
	printf("* Assertion: ft_bzero should only modify targeted memory block               *\n");
	printf("*            (alignement boundaries)                                         *\n");
	printf("*                                                                            *\n");
	size_t size = 16;
	size_t padding = 8;
	size_t total_size = size + (padding * 2);
	unsigned char buffer[total_size];
	for (size_t i = 0; i < total_size; i++)
	{
		buffer[i] = 0xAA;
	}
	unsigned char *target = buffer + padding;
	ft_bzero(target, size);
	printf("* before targeted memory block                                               *\n");
	ASSERT(verify_mem(buffer, 0xAA, padding) == 1);
	printf("* inside targeted memory block                                               *\n");
	ASSERT(verify_mem(target, 0x00, size) == 1);
	printf("* after targeted memory block                                                *\n");
	ASSERT(verify_mem(target + size, 0xAA, padding) == 1);
	printf("*                                                                            *\n");
	printf("* ************************************************************************** *\n");
	printf("\n");
}

TEST("ft_bzero should only modify targeted memory block") {
	printf("* ************************************************************************** *\n");
	printf("* Assertion: ft_bzero should only modify targeted memory block               *\n");
	printf("*            (large blocks)                                                  *\n");
	printf("*                                                                            *\n");
	size_t size = 1024;
	size_t padding = 8;
	size_t total_size = size + (padding * 2);
	unsigned char buffer[total_size];
	for (size_t i = 0; i < total_size; i++)
	{
		buffer[i] = 0xAA;
	}
	unsigned char *target = buffer + padding;
	ft_bzero(target, size);
	printf("* before targeted memory block                                               *\n");
	ASSERT(verify_mem(buffer, 0xAA, padding) == 1);
	printf("* inside targeted memory block                                               *\n");
	ASSERT(verify_mem(target, 0x00, size) == 1);
	printf("* after targeted memory block                                                *\n");
	ASSERT(verify_mem(target + size, 0xAA, padding) == 1);
	printf("*                                                                            *\n");
	printf("* ************************************************************************** *\n");
	printf("\n");
}
#endif