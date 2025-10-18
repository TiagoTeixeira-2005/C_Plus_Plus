#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    int M;
    int figurinha;
    cin >> N >> M;
    set <int> compradas;
    
    for(int i=0; i<M; i++){
        cin >> figurinha;
        compradas.insert(figurinha);
    }
    
    cout << N - compradas.size() << "\n";

    return 0;
}
