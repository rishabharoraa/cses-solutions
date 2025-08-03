#include <iostream>
#include <vector>

#define ll long long

using namespace std;

void solve() {
    int n; cin >> n;
    ll ans = 0;
    int prev = 0;
    for(int i = 0; i < n; i++) {
        int temp; cin >> temp;
        int diff = max(0, prev - temp);
        ans += diff;
        prev = temp + diff;
    }

    cout << ans << endl;
}

int main() {
    solve();
}