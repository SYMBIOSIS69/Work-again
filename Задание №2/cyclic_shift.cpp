#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    
    if (s.size() != t.size()) {
        cout << -1;
        return 0;
    }
    
    for (int shift = 0; shift < s.size(); shift++) {
        bool ok = true;
        for (int i = 0; i < s.size(); i++) {
            if (s[(i+shift) % s.size()] != t[i]) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << shift;
            return 0;
        }
    }
    
    cout << -1;
    return 0;
}