#include <iostream>
#include <vector>
using namespace std;

int k;
vector<int> S;
vector<int> lotto;

void dfs(int idx, int cnt) {
    if (cnt == 6) {
        for (int i = 0; i < 6; i++) {
            if (i) cout << " ";
            cout << lotto[i];
        }
        cout << endl;
        return;
    }
    for (int i = idx; i < k; i++) {
        lotto[cnt] = S[i];
        dfs(i + 1, cnt + 1);
    }
}

int main() {
    bool first = true;
    while (cin >> k && k) {
        S.resize(k);
        lotto.resize(6);
        for (int i = 0; i < k; i++) cin >> S[i];
        if (!first) cout << endl;
        first = false;
        dfs(0, 0);
    }
    return 0;
}
