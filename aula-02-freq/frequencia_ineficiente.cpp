#include <bits/stdc++.h>

using namespace std;
vector<int> freq(6);

void rec(int i, int n){
    if (i >= n) return;

    int x;
    cin >> x;
    freq[i] = x;

    rec(i+1, n);
}

int contador(int i, int n, int cont, int tgt){
    if (i >= n) return cont;

    if (freq[i] == tgt){
        cont++;
    }

    return contador(i+1, n, cont, tgt);
}

int main(){
    rec(0, 6);

    int target; cin >> target;

    cout << contador(0, 6, 0, target);
}