#include <bits/stdc++.h>
using namespace std;

int main(){
    int i = 30;
    double d = 1.5;
    string s = "Hello";

    cout << i + d << endl; //31.5
    cout << i * d << endl; //45
    cout << 45 / 2 << endl; //22小数点切り捨て
    cout << i * d / 2 << endl; //22.5 小数点以下も残る
}