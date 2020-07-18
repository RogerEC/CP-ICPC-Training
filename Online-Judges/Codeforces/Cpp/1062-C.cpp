#include<iostream>
#include<vector>
using namespace std;

int main() {
    const int MOD = 1e9 + 7;
    vector<int> POT2(100001);

    POT2[0] = 1;
    for (auto i{1}; i <= 100001; i++)
        POT2[i] = (POT2[i - 1] * 2) % MOD;

    int N, Q;
    cin >> N >> Q;

    vector<int> x(N + 1);
    {
        string str;
        cin >> str;
        x[0] = 0;
        for (auto i{0}; i < N; i++)
            x[i + 1] =x[i]+(str[i] - '0');
    }

    vector<int> VET(Q);
    for (auto i{0}; i < Q; i++) {
        int L, R;
        cin >> L >> R;

        int ones{x[R] - x[L - 1]};
        int zeros{R - L + 1 - ones};

        VET[i] = (POT2[ones + zeros] - POT2[zeros] + MOD) % MOD;
    }

    for (auto i : VET)
        cout << i << endl;
}
