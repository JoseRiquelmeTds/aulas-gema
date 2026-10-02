#include <bits/stdc++.h>

using namespace std;

#define int long long
#define vi vector<int>
#define pi pair<int, int>

void entrada(int i, int n, vi &v){
    if (i == n) return;
    int x; cin >> x;
    v.push_back(x);
    entrada(i+1, n, v);
}


void saida(int i, int n, vi &v){
    if (i == n) return;
    cout << v[i] << ' ';
    saida(i+1, n, v);
}

signed main(){
    int n; cin >> n;

    vi v;

    entrada(0, n, v);

    cout << endl;

    saida(0, n, v);

    cout << '\n';
}