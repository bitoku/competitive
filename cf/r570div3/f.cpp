#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int task() {
    int n;
    int a;
    int score=0;
    cin >> n;
    vector<int> dp(n);
    vector<int> a1(n);
    vector<int> a2(n);
    vector<int> a3(n);
    for(int i=0;i<n;++i){
        cin >> a;
        
    }
    for(int i=0;i<as.size();++i){
        cout << as[i] << "!" << endl;
    }
    vector<int>::iterator it = max_element(as.begin(), as.end());
    score += *it;
    *it = 0;
    return score;
}

int main() {
    int q;
    cin >> q;
    for(int i=0;i<q;i++){
        cout << task() << endl;
    }
    return 0;
}