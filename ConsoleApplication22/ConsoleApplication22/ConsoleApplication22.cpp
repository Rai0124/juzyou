#include <iostream>
#include <functional>

// エントリー関数
int main()
{
    auto coef = 2;
    auto coef1 = 2;
    auto coef2 = 2;
    auto coef3 = 2;
    auto coef4 = 2;


    // 関数を変数で保持する
    std::function<int(int)> f = [](int val) -> int { return val * 2; };

    // 変数から関数を呼び出す
    std::cout << "結果は " << f(5)<< std::endl;

    auto f1 = [=](auto val) { return val * coef; };     // 必要な変数を全てコピーして利用できるようにする  
    auto f2 = [coef](auto val) { return val * coef; };  // coef 変数をコピーして利用できるようにする

    // 参照するパターン 
    auto f3 = [&](auto val) { return val * coef; };     // 必要な変数を全て参照で利用できるようにする    
    auto f4 = [&coef](auto val) { return val * coef; };


    std::function<int(int)>f = {};
    {
        auto c = 3;

        f = [&c](auto v) {return v * c; };
    }

    std::cout << f(5);
}