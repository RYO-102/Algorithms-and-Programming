#include <stdio.h>

int even(int a);
int rem(int m, int n);

int main()
{
	int a, remain, ans;

	printf("2�ȏ�̋�������͂��Ă�������:");

	do{
		scanf("%d",&a);
		remain = rem(a, 2);

		if(remain != 0 || a < 2){
			printf("error:2�ȏ�̋�������͂��Ă�������\n");
			continue;
		}

		break;
	}while(1);

	ans = even(a);
	printf("2�ȏ�%d�ȉ��̋����̘a:%d",a, ans);
}

//2�ȏ�a�ȉ��̋����̑��a��Ԃ�
int even(int a){
	int aeven;

	//�x�[�X�P�[�X
	if(a == 2){
		aeven = 2;
	}else{
		//�ċA�X�e�b�v(2�ȏ�a-2�ȉ��̋����̑��a��Ԃ�)
		aeven = a + even(a - 2);
	}

	return aeven;
}

//m��n�Ŋ������]���Ԃ�
int rem(int m, int n){
	int mrem = m;

	while(mrem >= n){
		mrem -= n;
	}

	return mrem;
}