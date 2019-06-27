#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int play() {
    ll k, n, a, b;
    cin >> k >> n >> a >> b;
    if (k <= n * b) {
        return -1;
    }
    if (k > n * a) {
        return n;
    }
    if (a==b) {
        return n;
    }
    return (k - n * b - 1) / (a - b);
}

int main() {
    int q;
    cin >> q;
    for(int i=0;i<q;i++){
        cout << play() << endl;
    }
    return 0;
}