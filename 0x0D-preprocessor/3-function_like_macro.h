#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

#include <stdio.h>
#define ABS(X) ((X < 0) ? (X * -1) : (X))
ABS(X)
	==> ((x < 0) ? (x * -1) : (x))

#endif
