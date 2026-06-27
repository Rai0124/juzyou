#include "Tank.h"
#include <iostream>

class Car
{
public:
    Car() {
        std::cout << "Car のコンストラクタが処理されました" << std::endl;
    }

    ~Car() {
        std::cout << "Car のデストラクタが処理されました" << std::endl;
    }
};

// タンクローリークラス
class Tank : public Car
{
public:
    Tank() {
        std::cout << "Tank のコンストラクタが処理されました" << std::endl;
    }

    ~Tank() {
        std::cout << "Tank のデストラクタが処理されました" << std::endl;
    }
};


int main()
{
    Tank* tank = new Tank;
    // Tank のアドレスを Car ポインタで受け取る事が出来る
    Car* car = tank;

    // Car の carry() が呼び出される
    car->carry();
    // Car に 宣言されていないのでコンパイルエラー
    car->pumpOut();
};
