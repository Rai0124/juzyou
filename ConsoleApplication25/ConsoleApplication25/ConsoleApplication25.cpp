#include <iostream>
#include <string_view>

class SoundManager {
public:
    // 唯一のインスタンスを返す静的関数
    static SoundManager* getInstance()
    {
        static SoundManager instance_;
        return &instance_;
    }

    void playSound(std::string_view soundName) {
        // 再生処理
    }

    void setVolume(float volume) {
        masterVolume_ = volume;
    }
    
private:
    // コンストラクタを private にして外部からの生成を禁止
    SoundManager() = default;

    // コピーと代入を禁止する
    SoundManager(const SoundManager&) = delete;
    SoundManager& operator=(const SoundManager&) = delete;


private:
    float masterVolume_{};                      // マスターボリュームを保持するメンバ変数
};

int main() 
{
	SoundManager::getInstance()->playSound("a");
}