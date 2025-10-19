#include <bits/stdc++.h>
using namespace std;

bool isPermutation(int N, const vector<int>& A){
    vector<int> freq(N + 1, 0);  //  vetor de contagem que serve para contar quantas vezes cada número aparece no vetor

    for (int x : A) {
        if (x < 1 || x > N) return false; // número fora do intervalo
        freq[x]++;
    }

    for (int i = 1; i <= N; ++i) 
        if (freq[i] != 1) return false; // algum número não aparece exatamente 1 vez
    

    return true;
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];
    

    if (isPermutation(N, A))
        cout << "Yes" << "\n";
    else
    cout << "No" << "\n";

    return 0;

}