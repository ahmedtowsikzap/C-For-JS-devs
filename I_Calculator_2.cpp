#include <bits/stdc++.h>
using namespace std;

int main() {

    long long int a;
    char icon;
    long long int b;
    long long int finalresult;
    
    cin>>a>>icon>>b;

    if (icon == '+') {
        finalresult = a + b;
    } 
     else if (icon == '*') {
        finalresult = a * b;
    } 
    else if (icon == '-') {
        finalresult = a - b;
    } 
   
    else if (icon == '/') {
        finalresult = a / b;
    }

    cout<<finalresult<<endl;

    return 0;
}
