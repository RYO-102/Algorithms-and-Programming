#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int coin_weight[5];
	int i;

	// �����̎�̐ݒ�
	srand((unsigned)time(NULL));

	// 5�̃R�C���̏d���̐ݒ�
	for(i = 0; i < 5; i++)
		coin_weight[i] = 25;
	if(rand() % 2 == 1)
		coin_weight[rand() % 5] = 30;

	// 30g�̃R�C���̒T��
	for(i = 0; i < 5; i++) {
		if(coin_weight[i] == 30)
			break;
	}

	// ���ʕ\��
	if(i == 5) {
		printf("30g�̃R�C���͂���܂���ł����D\n");
		printf("�͂����%d��g���܂����D\n", i);
	} else {
		printf("30g�̃R�C��������܂����D\n");
		printf("�͂����%d��g���܂����D\n", i + 1);
	}
}
