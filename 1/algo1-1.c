#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define REPEAT_NUM 1000

int algo1_1_0(void);

int main()
{
	int i, num_times = 0;

	//������̐ݒ�
	srand((unsigned)time(NULL));

	for(i = 0; i < REPEAT_NUM; i++){
		//�񐔂𑫂�
		num_times += algo1_1_0();
	}

	printf("�͂���̎g�p�񐔂̕��ς�%f��ł�.\n",(double)num_times / REPEAT_NUM);
}

int algo1_1_0(void)
{
	int coin_weight[5];
	int i;

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

	//���ʕԋp
	if(i == 5) {
		return i;
	} else {
		return i + 1;
	}
}