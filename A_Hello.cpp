#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int x, y;
    cin >> x >> y;

    long long int totalsum = x + y;
    long long int multi = x * y;
    long long int subtract = x - y;
    
    cout << "X + Y = " << totalsum << endl;
    cout << "X * Y = " << multi << endl;
    cout << "X - Y = " << subtract << endl;

    return 0;
}
