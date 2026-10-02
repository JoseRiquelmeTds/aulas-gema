#include <bits/stdc++.h>

using namespace std;


void rec(int i, int n, vector<int> &freq){
    if (i >= n) return;

    int x;
    cin >> x;
    freq[x]++;

    rec(i+1, n, freq);
}

int main(){
    int n, m; cin >> n >> m;

    vector<int> freq(n+1, 0);

    rec(0, m, freq);

    int tgt; cin >> tgt;

    cout << freq[tgt];
}