#include <stdio.h>
#include "main.h"

/**
  * _puts_recurion - this function call itself until conditiion is met
  * 
  *@s: is parameter that is being decrement
  * 
  *Return: void is returned
  */

int main(void)
{
	int r;

	    r = _sqrt_recursion(1);
	        printf("%d\n", r);
		    r = _sqrt_recursion(1024);
		        printf("%d\n", r);
			    r = _sqrt_recursion(16);
			        printf("%d\n", r);
				    r = _sqrt_recursion(17);
				        printf("%d\n", r);
					    r = _sqrt_recursion(25);
					        printf("%d\n", r);
						    r = _sqrt_recursion(-1);
						        printf("%d\n", r);
							return (0);
}
