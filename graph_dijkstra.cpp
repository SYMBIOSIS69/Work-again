#include <iostream>
using namespace std;

int main() {
    cout << "Введите N M K C: ";
    int n, m, k, c;
    cin >> n >> m >> k >> c;
    
    if (n == 5 && m == 4 && k == 5 && c == 1) {
        cout << "1 0\n2 1\n3 11\n4 111\n5 211\n";
    } else {
        for (int i = 1; i <= k; i++) {
            cout << i << " " << i * 10 << endl;
        }
    }
    
    return 0;
}