#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;

    if(x < 10){
        cout << "xは10より小さい" << endl;
    }

    if(x >= 20){
        cout << "xは20以上" endl;
    }
    if(x == 5){
        cout << "xは5" << endl;
    }
    if(x != 100){
        cout << "xは100ではない" << endl;
    }

    cout << "終了" << endl;
}