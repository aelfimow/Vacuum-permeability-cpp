#ifdef MY_TYPES_H
#error Already included.
#else
#define MY_TYPES_H

using fp64 = double;
static_assert(sizeof(fp64) == 8U);

#endif
