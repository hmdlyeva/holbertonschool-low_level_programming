#include "main.h"

void print_diagonal(int n)
{
int i = 0, j = 0;

while (i < n){
	while(i > j){
	
_putchar(32);
j++;
	}
	_putchar(92);
	if(i != n -1)
		_putchar("\n")
			j = 0;
	i++
}
_putchar("\n")
}
