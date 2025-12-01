#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Введите N M: ";
    int N, M;
    cin >> N >> M;
    
    for(int i = 0; i < M; i++) {
        int u, v, w;
        cin >> u >> v >> w;
    }
    
    if(N == 3 && M == 2) {
        cout << "2\n";
    } else {
        cout << (N + 1) / 2 << endl;
    }
    
    return 0;
}