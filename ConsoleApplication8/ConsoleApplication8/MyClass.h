#pragma once

//MyClass の定義
class MyClass
{
public:
	//クラスのメンバ関数の定義
	//inline展開対象
	void functionA()
	{
		//メンバ変数を利用できる
		valueA = 1;
	}

	//静的メンバ関数
	static void functionB()
	{
		valueB = 10;
	}

	//メンバ変数
	int valueA = 0; // メンバ変数「valueA」を宣言し、ゼロで初期化する

	//静的メンバ変数
	static inline int valueB = 0;
};

