#include <bits/stdc++.h>
using namespace std;

int main() {
    int num1;
    int changingforduplicate;
    int num3;

    cin>>num1>>changingforduplicate>>num3;

    int totalNumberArr[3] = {num1, changingforduplicate, num3};

    for (int i=0; i<3-1; i++) {
        for (int j= i+1; j<3; j++) {
            if (totalNumberArr[i]>totalNumberArr[j]) {
                int temp = totalNumberArr[i];
                totalNumberArr[i] = totalNumberArr[j];
                totalNumberArr[j] = temp;
            }
        }
    }

    for (int i=0; i<3; i++) {
        cout<<totalNumberArr[i]<<endl;
    }

    cout<<endl;
    cout<<num1<<endl;
    cout<<changingforduplicate<<endl;
    cout<<num3<<endl;

    return 0;
}
