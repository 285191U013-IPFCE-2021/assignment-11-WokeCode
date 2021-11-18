/*
 * Fibonacci numbers defined recursively
 */
#include "..\include\fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp)
{
    //pre-condition
    assert(n > 0 && p >= 0 && pp > 0);
    //post-condition
    if(n == 1)
        return pp;
    else
        return fib(n - 1, pp, pp + p);
}  
