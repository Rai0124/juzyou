#include <iostream>
#include <vector>

// Subject (通知を送る側) の基底
class Subject {
public:
    // Observer 登録
    void addObserver(Observer* observer) {
        observers_.push_back(observer);
    }

    // Observer 解除（指定した Observer だけをリストから取り除く）
    void removeObserver(Observer* observer) {
        std::erase(observers_, observer);
    }

protected:
    // 登録されている全 Observer に通知する
    void notify(std::string_view event, int value) {
        for (Observer* observer : observers_) {
            observer->onNotify(event, value);
        }
    }

private:
    // Observer のリスト
    // アドレスを覚えておくだけで、Observer の生成・破棄は行わない
    std::vector<Observer*> observers_{};
};

// スコアマネージャー（様々なオブジェクトに通知を送る側）
class ScoreManager : public Subject {
public:
    // スコアを加算する
    void addScore(int points) {
        score_ += points;

        // 直接呼び出しがなくなり notify 一本になる
        notify("SCORE_CHANGED", score_);
    }

    // スコアを取得する
    int getScore() const { return score_; }

private:
    int score_ = 0;
};