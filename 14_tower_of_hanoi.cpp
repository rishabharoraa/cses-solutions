#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

#define ll long long

using namespace std;

void print(int start, int end) {
    cout << start << " " << end << endl;
}

void solve(int n, int start, int end) {  
    if(n == 1) {
        print(start, end);
        return;
    } 
    int other = 6 - (start + end);
    solve(n - 1, start, other);
    print(start, end);
    solve(n - 1, other, end);
}

int main() {
    int n; cin >> n;
    cout << pow(2, n) - 1 << endl;
    solve(n, 1, 3);
}

