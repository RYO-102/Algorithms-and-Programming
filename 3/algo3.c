#include <stdio.h>

void printBinary(unsigned int num);

int main(){
	//�錾,����
	unsigned int x, y, z;
	printf("x�����:");
	scanf("%u", &x);
	printf("y�����:");
	scanf("%u", &y);

	//����2
	printBinary(x);
	printBinary(y);

	//����3,4
	x = x << 3;
	printBinary(x);

	//����5,6
	y = y >> 2;
	printBinary(y);

	//����7,8
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