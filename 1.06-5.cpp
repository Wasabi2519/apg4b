#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;

    if (x < 10){
        cout << "xは10より小さい" << endl;
    }
    else if (x > 20){
        cout << "xは10より小さくなくて、20より大きい" << endl;
    }
    else if (x == 15){
        cout << "xは10より小さくなくて、200より大きくなくて、15である" << endl;
    }
    else{
        cout << "xは10より小さくなくて、20より大きくもなくて、15でもない" << endl;
    }
}