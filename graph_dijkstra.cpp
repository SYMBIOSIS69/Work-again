#include <iostream>
using namespace std;

int main() {
    cout << "Сколько чисел? ";
    int n;
    cin >> n;
    
    cout << "Введите " << n << " чисел через пробел: ";
    int a[1000];
    for (int i = 0; i < n; i++) cin >> a[i];
    
    cout << "Ответ: ";
    for (int i = 0; i < n; i++) {
        int ans = -1;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[i]) {
                ans = a[j];
                break;
            }
        }
        cout << ans << " ";
    }
    
    return 0;
}