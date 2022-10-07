#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;

    if (!(x == y)){
        cout << "xとyは等しくない" << endl;
    }
    if (x == 0 || y == 10){
        cout << "xかyは0" << endl;
    }

    cout << "終了" << endl;
}