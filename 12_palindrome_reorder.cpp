#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

#define ll long long

using namespace std;

void solve() {
    string s; cin >> s;
    map<char, int> fm;
    for(const char& ch: s) {
        fm[ch]++;
    }

    bool hasOneOdd = false;
    for(const pair<char,int>& p: fm) {
        if(p.second % 2) {
            if(hasOneOdd) {
                cout << "NO SOLUTION" << endl;
                return;
            } else {
                hasOneOdd = true;
            }
        }
    }

    string half = "";
    char middle = '-';
    for(const pair<char,int>& p: fm) {
        if(p.second % 2 == 0) {
            for(int i = 0; i < p.second / 2; i++) {
                half += p.first;
            }
        } else {
            middle = p.first;
        }
    }
    string revHalf = half;
    reverse(revHalf.begin(), revHalf.end());

    string res = "";
    
    if(middle == '-') {
        res = half + revHalf;
    } else {
        string realMiddle = "";
        for(int i = 0; i < fm[middle]; i++) {
            realMiddle += middle;
        }
        res = half + realMiddle + revHalf;
    }
    cout << res << endl;

}

int main() {
    solve();
}