#ifdef MY_TYPES_H
#error Already included.
#else
#define MY_TYPES_H

using fp80 = long double;
static_assert(sizeof(fp80) >= 10U);

// This check depends on compiler:
static_assert(sizeof(fp80) == 16U);

#endif
