#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec = {1, 5, 3};
    reverse(vec.begin(), vec.end()); //{3, 5, 1}

    for (int i = 0; i < vec.size(); i++){
        cout << vec.at(i) << endl;
    }
}