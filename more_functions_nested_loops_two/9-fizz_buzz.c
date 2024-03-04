#include "main.h"
#include <stdio.h>
void main(void){

	for(int i = 0; i <= 100; i++){
	if(i % 3 == 0 && i % 5 == 0){
	printf("FizzBuzz");
	}
	else if(i % 3 == 0){
	printf("Fizz");
	}
	else if(i % 5 == 0){
	printf("Buzz");
	}
	else{
	printf("%d", i);
	}
	if(i != 100){
	printf(" ");
	}
	}
	putchar("\n");
	return (0);
	

}
