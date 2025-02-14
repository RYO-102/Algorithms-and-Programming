#include <stdio.h>

void printBinary(unsigned int num);

int main(){
	//éŒ¾,“ü—Í
	unsigned int x, y, z;
	printf("x‚ğ“ü—Í:");
	scanf("%u", &x);
	printf("y‚ğ“ü—Í:");
	scanf("%u", &y);

	//‘€ì2
	printBinary(x);
	printBinary(y);

	//‘€ì3,4
	x = x << 3;
	printBinary(x);

	//‘€ì5,6
	y = y >> 2;
	printBinary(y);

	//‘€ì7,8
	z = x ^ y;
	printBinary(z);
}

void printBinary(unsigned int num){
	unsigned int copy = num, mask = 1U;
	int i, bit = 0;

	while(copy != 0){
		bit++;
		copy  = copy >> 1;
	}

	mask = mask << bit - 1;

	for(i = bit - 1; i > 0; i--){
		printf("%u", (num & mask) >> i);
		mask = mask >> 1;
	}
	printf("%u\n", num & mask);
}