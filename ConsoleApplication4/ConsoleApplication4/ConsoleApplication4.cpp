#include<stdio.h>

struct A
{
    int a[10000000];
};


void f(A* aaCopy)
{

}


int main()
{

    A aa;

    f(&aa);

    int a = 10;
    printf("a が保持する値は %d です\n", a);

    int* pointer = &a;

    // ポインタ経由で a が保持している値を書き換える 
    *pointer = 100;
    printf("a が保持する値は %d です\n", a);
}