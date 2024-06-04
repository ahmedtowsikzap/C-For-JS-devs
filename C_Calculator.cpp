#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int x, y;
    cin >> x >> y;

    long long int totalsum = x + y;
    long long int multi = x * y;
    long long int subtract = x - y;
    
    cout <<x<<" "<<"+"<<" "<<y <<" "<< "="<<" " << totalsum << endl;
    cout <<x<<" "<<"*"<<" "<<y <<" "<< "="<<" " << multi << endl;
     cout <<x<<" "<<"-"<<" "<<y <<" "<< "="<<" " << subtract << endl;

    return 0;
}
