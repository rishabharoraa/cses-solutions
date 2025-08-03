#include <iostream>
#include <vector>

#define ll long long

using namespace std;

void solve() {
    ll inp; cin >> inp;

    cout << inp << " ";
    while(inp != 1) {  
        if(inp % 2 == 0) {
            inp /= 2;
        } else {
            inp = inp*3 + 1;
        }
        cout << inp << " ";
        
    }
    cout << endl;
}

int main() {
    solve();
}

