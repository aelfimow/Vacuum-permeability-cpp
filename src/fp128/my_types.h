#ifdef MY_TYPES_H
#error Already included.
#else
#define MY_TYPES_H

using fp128 = __float128;
static_assert(sizeof(fp128) == 16U);

#endif
