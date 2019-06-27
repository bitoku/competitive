#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int task() {
    int n;
    int c;
    cin >> n;
    int cs[n];
    for(int i=0;i<n;++i){
        cs[i] = 0;
    }
    for(int i=0;i<n;++i){
        cin >> c;
        cs[c-1]++;
    }
    int mx = 1000000;
    ll result = 0;
    sort(cs, cs+n, greater<int>());
    for(int i=0;i<n;++i){
        if(mx <= 0) break;
        if(cs[i] >= mx){
            result += mx-1;
            mx--;
        }else{
            result += cs[i];
            mx = cs[i];
        }
    }
    return result;
}

int main() {
    int q;
    cin >> q;
    for(int i=0;i<q;i++){
        cout << task() << endl;
    }
    return 0;
}