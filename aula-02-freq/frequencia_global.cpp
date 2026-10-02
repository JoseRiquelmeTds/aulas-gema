#include <bits/stdc++.h>

using namespace std;

vector<int> freq(100+1, 0);


void rec(int i, int n){
    if (i >= n) return;

    int x;
    cin >> x;
    freq[x]++;

    rec(i+1, n);
}

int main(){
    int n, m; cin >> n >> m;

    rec(0, m);

    int tgt; cin >> tgt;

    cout << freq[tgt];
}