#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Введите строку из скобок: ";
    string s;
    cin >> s;
    
    int balance = 0;
    int deletions = 0;
    
    for (char c : s) {
        if (c == '(') {
            balance++;
        } else if (c == ')') {
            if (balance > 0) {
                balance--;
            } else {
                deletions++;
            }
        }
    }
    
    deletions += balance;
    
    cout << "Результат: " << deletions << endl;
    
    return 0;
}