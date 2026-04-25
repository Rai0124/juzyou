#include<stdio.h>

int f(int number, int number2);

//メイン関数
void f()
{
	static int answer = 0;
	answer = answer + 1;
	printf("関数 f がよびだされました。 answer は [%d] です\n", answer);
}

int main()
{
	//関数 f を使う
	f();


	return 0;
}
