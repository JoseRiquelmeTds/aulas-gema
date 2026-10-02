#include <bits/stdc++.h>

using namespace std;

vector<int> freq(101, 0);

void rec(int i, int n){
    if (i >= n) return;

    int x;
    cin >> x;
    freq[x]++;

    rec(i+1, n);
}

int resposta(int i, int n, int cont){
    if (i >= n) return cont;

    if (freq[i] == 0) cont++; 

    return resposta(i+1, n, cont);
}

int main(){
    int n, m; cin >> n >> m;

    rec(0, m);

    int r = resposta(1, n+1, 0);

    cout << r << '\n';
}