#include <bits/stdc++.h>
using namespace std;

char comparesPowers(int A, int B, int C){
    if (C%2 == 0){
        A = abs(A);
        B = abs(B);
    }

    if (A>B) return '>';
    if (B>A) return '<';
    return '=';
    
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int A, B, C;
    cin >> A >> B >> C;

    cout << comparesPowers(A, B, C) << "\n";

    return 0;

}