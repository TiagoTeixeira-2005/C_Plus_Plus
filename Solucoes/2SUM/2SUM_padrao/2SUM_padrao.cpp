#include <bits/stdc++.h>
using namespace std;

// Algoritmo two pointers para o problema 2SUM (_2sum).
bool _2sum (int N, int S, vector<int>& xs) {
    sort(xs.begin(), xs.end());
    int L = 0, R = N - 1;
    while (L < R) {
        while (R > L and xs[L] + xs[R] > S)
            --R;
        if (R <= L) { break; }
        if (xs[L] + xs[R] == S) { return true; }
        ++L; }
       return false; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int> xs {1, -2, 5, 8, -3, 7, -5}; 
    int N = (int) xs.size();
    cout << _2sum(N, 0, xs) << "\n"; 
}
