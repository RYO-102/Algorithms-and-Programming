#include <stdio.h>

int even(int a);
int rem(int m, int n);

int main()
{
	int a, remain, ans;

	printf("2以上の偶数を入力してください:");

	do{
		scanf("%d",&a);
		remain = rem(a, 2);

		if(remain != 0 || a < 2){
			printf("error:2以上の偶数を入力してください\n");
			continue;
		}

		break;
	}while(1);

	ans = even(a);
	printf("2以上%d以下の偶数の和:%d",a, ans);
}

//2以上a以下の偶数の総和を返す
int even(int a){
	int aeven;

	//ベースケース
	if(a == 2){
		aeven = 2;
	}else{
		//再帰ステップ(2以上a-2以下の偶数の総和を返す)
		aeven = a + even(a - 2);
	}

	return aeven;
}

//mをnで割った余りを返す
int rem(int m, int n){
	int mrem = m;

	while(mrem >= n){
		mrem -= n;
	}

	return mrem;
}