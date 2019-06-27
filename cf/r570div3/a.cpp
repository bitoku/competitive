#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool interesting(int a){
    if(((a/1000) + (a%1000/100) + (a%100/10) + (a%10)) % 4 == 0){
        return true;
    }
    return false;
}

int main() {
    int a;
    cin >> a;
    while(!interesting(a)){
        a++;
    }
    cout << a << endl;
    return 0;
}