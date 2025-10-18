#include <bits/stdc++.h>
using namespace std;

pair<long long, long long> casas_joaozinho(int N, long long K, vector<long long>& xs) {
    int L = 0, R = N - 1;
    while (L < R) {
        while (R > L && xs[L] + xs[R] > K)
            --R;
        if (R <= L) break;
        if (xs[L] + xs[R] == K)
            return {xs[L], xs[R]};
        ++L;
    }
    return {-1, -1};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<long long> xs(N);

    for (int i = 0; i < N; ++i)
        cin >> xs[i];

    long long K;
    cin >> K;

    auto [A, B] = casas_joaozinho(N, K, xs);
    cout << A << " " << B << '\n';

    return 0;
}
