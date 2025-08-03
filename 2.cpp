#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n; cin >> n;
    int x = 0;

    for(int i = 1; i < n; ++i) {
        int temp; cin >> temp;
        x ^= temp;
        x ^= i;
    }
    x ^= n;

    cout << x << endl;
}

int main() {
    solve();
}

