/* Logic:

	Xor Swap: 

		
		x = x xor y
		y = x xor y
		x = x xor y
		x ^= y
		y ^= x
		x ^= y

			AND		OR	XOR	a ^= b   a^= b
				a b		a b
				1 1 1	1	0	1 0    1    1
				1 0 0   1	1
				0 1 0   1	1
				0 0 0   0	0

			12 13 14 17 1 2 6 7 8 9

				^ ^

Learn More: 

https://betterexplained.com/articles/swap-two-variables-using-xor */


void XorSwap(int *x, int *y); //"https://en.wikipedia.org/wiki/XOR_swap_algorithm" 

void XorSwap(int *x, int *y) 
{
  if (x != y)
  {
    *x ^= *y;
    *y ^= *x;
    *x ^= *y;

  }

}




