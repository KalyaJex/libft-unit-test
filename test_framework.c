#include <stdio.h>
#define HEADERS
#include "test_all.c"
#include "libft.h"
#undef HEADERS

#define TEST(name) test = name;
#define ASSERT(ast)\
	do {\
		assertion = #ast;\
		file = __FILE__;\
		line = __LINE__;\
		if(ast) puts("* Success                                                                    *"); else goto fail;\
	} while(0)
#define foreach(item, array) \
	for(int keep = 1, \
			count = 0,\
			size = sizeof (array) / sizeof *(array); \
		keep && count != size; \
		keep = !keep, count++) \
	for(item = (array) + count; keep; keep = !keep)


int main() {
	const char *test = "";
	const char *assertion = "";
	const char *file = "";
	int line = 0;

# define TESTS
# include "test_all.c"
# undef TESTS

	puts("Big SUCCESS");
	putchar('\n');
	return 0;

fail:
	printf("!\nTest failed at %s:%d\n    %s: %s\n",
			file, line,
			test, assertion);
	return -1;
}