#include <iostream>
#include <vector>

using namespace std;

void solve() {
    string s; cin >> s;
   
    int curr = 1;
    int mx = 1;
    for(int i = 1; i < s.length(); ++i)  {
        if(s[i] == s[i -1]) {
            curr++;
        } else {
            mx = max(mx, curr);
            curr = 1;
        }
    }

    cout << max(mx, curr) << endl;
}

int main() {
    solve();
}

