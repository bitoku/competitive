#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int price() {
    int n, k;
    ll p;
    ll mx=0, mn=100000001;
    cin >> n >> k;
    for(int i=0;i<n;++i){
        cin >> p;
        mx = max(mx, p);
        mn = min(mn, p);
    }
    if(mx - mn > k * 2) {
        return -1;
    }
    return mn + k;
}

int main() {
    int q;
    cin >> q;
    for(int i=0;i<q;i++){
        cout << price() << endl;
    }
    return 0;
}