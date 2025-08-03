#include <iostream>
#include <vector>

#define ll long long

using namespace std;

void solve() {
    int n; cin >> n;
    if(n == 3 || n == 2) {
        cout << "NO SOLUTION" << endl;
        return;
    }
    for(int i = 0; i < n / 2; ++i) {
        cout << i * 2 + 2 << " ";
    }
    for(int i = 0; i < (n + 1) / 2; ++i) {
        cout << i * 2 + 1 << " ";
    }
    cout << endl;
}

int main() {
    solve();
}

