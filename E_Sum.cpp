#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int a, b;
    cin >>a >> b;

    int lastOfa = a % 10;
    int  lastOfb= b % 10;
    int totalSum = lastOfa + lastOfb;

    cout << totalSum << endl;

    return 0;
}
