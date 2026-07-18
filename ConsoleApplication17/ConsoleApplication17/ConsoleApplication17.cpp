#include <iostream>
#include<map>

int main()
{
	//map
	//キーが char　、値を float の map を作る
	std::map<char, float>map;

	//情報を追加
	{
		//aという文字に3.1fという値を紐づけて追加
		map.emplace('a', 3.1f);

		//配列の要素数の場所にキーを指定して追加
		map['c'] = 1.5f;

	}

	//取得方法
	{
		//メンバ関数を使って取得する
		float f1 = map.at('a');

		//[]を使って取得する
		float f2 = map['c'];
	}

	{
		map.at('c') = 0.3f;

		map['a'] = 100.5f;
	}

	{
		map.clear();

		map.erase('c');
	}


}