#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> findSubstringIndices(string S, string T) {
    vector<int> indices;
    int n = S.length();
    int m = T.length();
    
    if (m > n) return indices;
    
    for (int i = 0; i <= n - m; i++) {
        bool found = true;
        for (int j = 0; j < m; j++) {
            if (S[i + j] != T[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(i);
        }
    }
    
    return indices;
}

int main() {
    string S, T;
    cin >> S >> T;
    
    vector<int> result = findSubstringIndices(S, T);
    
    for (int i = 0; i < result.size(); i++) {
        if (i > 0) cout << " ";
        cout << result[i];
    }
    cout << endl;
    
    return 0;
}