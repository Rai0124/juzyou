#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    string ope;
    int b;
    cin >> a >> ope >> b;
    if (ope == "+") {
        cout << a + b << endl;
    }
    else if (ope == "-") {
        cout << a - b << endl;
    }
    else if (ope == "*") {
        cout << a * b << endl;
    }
    else if (ope == "/") {
        if (b == 0) {
            cout << "error" << endl;
        }
        else {
            cout << a / b << endl;
        }
    }
    else {
        cout << "error" << endl;
    }
