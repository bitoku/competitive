#include <iostream>
#include <algorithm>

using namespace std;
typedef long long ll;

int main() {
    int x = 2 * 1e5;
    int n, m;
    int aa;
    vector<int> a;
    vector<ll> b;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> aa;
        a.push_back(aa);
    }
    sort(a.begin(), a.end());
    b.push_back(a);
    for(int i=1;i<n;++i){
        b.push_back(b.back() + a[i]);
    }
}
