#include <iostream>
#include <vector>

// Observer (通知を受ける側) の基底クラス
class Observer 
{
public:
    virtual ~Observer() {}

    // 通知を受け取ったときに呼ばれる
    // event にはイベントの種類、value には付随するデータを渡す
    virtual void onNotify(std::string_view event, int value) = 0;
};

// スコア表示 UI（通知を受ける側）
class ScoreUI : public Observer {
public:
    // 具体化した通知処理
    void onNotify(std::string_view event, int value) override {
        if (event == "SCORE_CHANGED") {
            // UI の表示を更新する
            printf("Score: %d\n", value);
        }
    }
};

// サウンド再生（通知を受ける側）
class SoundManager : public Observer {
public:
    // 具体化した通知処理
    void onNotify(std::string_view event, int value) override {
        if (event == "SCORE_CHANGED") {
            // サウンドを再生する
            printf("playSound: %d\n", value);
        }
    }
};

int main()
{
	
}