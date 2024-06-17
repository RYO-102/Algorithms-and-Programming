#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int coin_weight[5];
	int i;

	// 乱数の種の設定
	srand((unsigned)time(NULL));

	// 5個のコインの重さの設定
	for(i = 0; i < 5; i++)
		coin_weight[i] = 25;
	if(rand() % 2 == 1)
		coin_weight[rand() % 5] = 30;

	// 30gのコインの探索
	for(i = 0; i < 5; i++) {
		if(coin_weight[i] == 30)
			break;
	}

	// 結果表示
	if(i == 5) {
		printf("30gのコインはありませんでした．\n");
		printf("はかりは%d回使いました．\n", i);
	} else {
		printf("30gのコインがありました．\n");
		printf("はかりは%d回使いました．\n", i + 1);
	}
}
