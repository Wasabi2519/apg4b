#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 10;
    int b;
    b = a; //aの値がコピーされ、bに10が代入される
    a = 5; //aの値は5に置き換わるが、bは10のまま

    cout << a << endl; //5
    cout << b << endl ; //10
}