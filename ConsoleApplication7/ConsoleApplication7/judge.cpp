#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "judge.h"


int f(int number, float value)
{
	int t = (int)time(nullptr);
	int answer = t % 10;
	printf("関数 f が呼び出されました。\n", answer);

	return answer;
}



int main()
{

	int answer = f(1,1.0f);

	while (true)
	{
		int input;
		scanf_s("%d", &input);


		if (answer == input)
		{
			printf("ゲームクリア\n");
		}
		else if (answer < input)
		{
			printf("大きい!\n");
		}
		else if (answer > input)
		{
			printf("小さい!\n");
		}

		if (answer == input)
		{
			break;
		}

	}
	return 0;
}
