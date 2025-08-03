#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <bitset>

#define ll long long

using namespace std;

void solve() {
    int n; cin >> n;
    for(int i = 0; i < 1 << n; i++) {
        bitset<16> b(i ^ (i >> 1));
        cout << b.to_string().substr(16 - n) << endl;
    }
}

int main() {
    solve();
}

