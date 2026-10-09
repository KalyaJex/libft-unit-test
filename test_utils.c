#include <stddef.h>

int	verify_mem(const unsigned char *s, unsigned char val, size_t n)
{
	for (size_t i = 0; i < n; i++)
	{
		if(s[i] != val)
			return (0);
	}
	return (1);
}