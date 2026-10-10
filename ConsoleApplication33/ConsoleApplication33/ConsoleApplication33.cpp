#include <iostream>
#include <thread>
#include <mutex> // std::mutex を使うために必要

int counter = 0;
std::mutex mtx; // スレッド間の排他制御のためのミューテックス

void increment_safe() {
    for (int i = 0; i < 100000; ++i) {
        // std::lock_guard を使って書き換え部分を保護
        // スコープ（{ } の中）を抜ける時に自動でアンロックされる
        {
            std::lock_guard<std::mutex> lock(mtx);
            counter++;
        }
    }
}

int main() {
    std::thread t1(increment_safe);
    std::thread t2(increment_safe);

    t1.join();
    t2.join();

    // 何度実行しても必ず 200000 になる
    std::cout << "Safe Counter: " << counter << std::endl;
    return 0;
}
