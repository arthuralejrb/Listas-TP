#include <bits/stdc++.h>

int main(){

    int A;
    list < int > l;

    for(int i = 0; i  < 3; i++){
        cin >> A;
        l.push_back(A);
    }

    l.sort();

    for(int i = 0; i < 3; i++) {
        cout << l.back() << endl;
    }

    return 0;
}