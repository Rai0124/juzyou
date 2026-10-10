#include <iostream>
#include <thread>
#include <mutex>

struct Account {
    std::string name;
    int balance;
    std::mutex mtx;
};

void transfer_safe(Account& from, Account& to, int amount) {
    
    if (&from == &to) return;

    std::lock(from.mtx, to.mtx);
    std::lock_guard<std::mutex> lock1(from.mtx, std::adopt_lock);
    std::lock_guard<std::mutex> lock2(to.mtx, std::adopt_lock);

    from.balance -= amount;
    to.balance += amount;
}

int main() {
    Account acc1{ "Account_A", 10000 };
    Account acc2{ "Account_B", 10000 };

    std::thread t1(transfer_safe, std::ref(acc1), std::ref(acc2), 500);
    std::thread t2(transfer_safe, std::ref(acc2), std::ref(acc1), 300);

    t1.join();
    t2.join(); 

    std::cout << "Safe! 処理が正常に完了しました。" << std::endl;
    std::cout << acc1.name << " 残高: " << acc1.balance << std::endl;
    std::cout << acc2.name << " 残高: " << acc2.balance << std::endl; 
    return 0;
}


