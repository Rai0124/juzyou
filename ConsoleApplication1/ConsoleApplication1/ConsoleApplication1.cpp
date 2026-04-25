// ConsoleApplication1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	//int answer = 5;

	int t = (int)time(nullptr);

	int answer = t % 10;
	while (true)
	{
		int input;
		scanf_s("%d", &input);

		int rank = 0;

		if (answer == input)
		{
			rank = 2;
			printf("一致!\n");
		}
		else if (answer < input)
		{
			printf("大きい!\n");
		}
		else if (answer > input)
		{
			printf("小さい!\n");
		}

		int sub = answer - input;
		if (sub > -3 && sub < 3 && sub != 0)
		{
			rank = 1;
			printf("う、うおw\n");
		}

		if (answer == input)
		{
			break;
		}


		switch (rank)
		{
		case 2:
			printf("ランクS\n");
			break;
		case 1:
			printf("ランクA\n");
			break;
		default:
			printf("ランクB\n");
			break;
		}
	}
	return 0;
}
