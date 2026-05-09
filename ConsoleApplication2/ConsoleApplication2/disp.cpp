#include"disp.h"

#include<stdio.h>


/* 点数の入力 */
printf("国語 = ");
scanf_s("%d", &a);
printf("数学 = ");
scanf_s("%d", &b);
printf("英語 = ");
scanf_s("%d", &c);
printf("理科 = ");
scanf_s("%d", &d);
printf("社会 = ");
scanf_s("%d", &e);

/* 合計点の計算と表示 */
sum = a + b + c + d + e;
printf("合計点 = %d\n", sum);

/* 平均点の計算と表示 */
ave = sum / 5.0;
printf("平均点 = %.1f\n", ave);
//合否結果の表示
const int pass_score = 40;
bool pass_a = (pass_score <= a);
bool pass_b = (pass_score <= b);
bool pass_c = (pass_score <= c);
bool pass_d = (pass_score <= d);
bool pass_e = (pass_score <= e);

bool pass_all = pass_a && pass_b && pass_c && pass_d && pass_e;

const float pass_avarage = 60.0f;
if (60.0f <= ave && pass_all)
{
	printf("合格です\n");
}
else
{
	printf("不合格です\n");
	if (ave < pass_avarage)
	{
		printf("平均点が60点未満です\n");
	}
	if (!pass_a)
	{
		printf("国語が40点未満です\n");
	}
	if (!pass_b)
	{
		printf("数学が40点未満です\n");
	}
	if (!pass_c)
	{
		printf("英語が40点未満です\n");
	}
	if (!pass_d)
	{
		printf("理科が40点未満です\n");
	}
	if (!pass_e)
	{
		printf("社会が40点未満です\n");
	}
}