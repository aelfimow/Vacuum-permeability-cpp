#ifdef MY_TYPES_H
#error Already included.
#else
#define MY_TYPES_H

using fp32 = float;
static_assert(sizeof(fp32) == 4U);

#endif
