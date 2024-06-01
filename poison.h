
#include <valgrind/memcheck.h>


#define poison(addr, len) VALGRIND_MAKE_MEM_UNDEFINED(addr, len)
