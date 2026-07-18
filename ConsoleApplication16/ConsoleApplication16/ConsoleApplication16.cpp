#include<iostream>
#include<vector>

int main()
{
	//vector を使った整数のコンテナ
	//int 型の複数の方法を持つコンテナとして宣言
	std::vector<int>nums;

	//情報を追加する
	{
		//0番目に「１」
		//1番目に「２」
		//2番目に「３」
		//3番目は不正アクセス
		nums.push_back(1);
		nums.push_back(2);
		nums.push_back(3);
	}

	{
		std::vector<int>::iterator pos = nums.begin();
		pos += 1;
		nums.insert(pos, 5);
	}

	{
		std::vector<int>::iterator pos = nums.begin();
		pos += 2;
		nums.erase(pos);
	}

	for (std::vector<int>::iterator it = nums.begin();
		it != nums.end();
		it++)
	{
		int i1 = *it;

		*it = 100;
	}

	for (std::vector<int>::iterator it = nums.begin();
		it != nums.end();)
	{
		nums.erase(it);
	}
	//情報を取得する
	int i1 = nums[0];
	int i2 = nums[1];
	int i3 = nums[2];
	//int i4 = nums[3]; //不正アクセス(要素数オーバー)


	//ループで情報を取得
	for (int i = 0; i < nums.size(); i++)
	{
		int ii = nums[i];
	}


	//メンバ変数呼び出しで取得
	int j1 = nums.at(0);//int i1 = nums[0]　とまったく同じことをしている


	//更新方法
	{
		//添え字で更新
		nums[0] = 40;


		//メンバ変数の戻り値が参照なので＝で代入して更新可能
		nums.at(0) = 100;
	}

	//削除
	{
		//末尾を削除
		nums.pop_back();

		//全部削除
		nums.clear();
	}

}

