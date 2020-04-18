#include <stdio.h>

#if defined(__is_libk)
#include <kernel/dadio.h>
#endif

int putchar(int ic) {
#if defined(__is_libk)
	char c = (char) ic;
	putc(c); //This is really ugly!! TODO
#else
	// TODO: Implement stdio and the write system call.
#endif
	return ic;
}
