#include <bits/stdc++.h>
using namespace std;

int main() {
    double x;
    double y;
    cin>>x>>y;

    int flooring = floor(x / y);
    int ceiling = ceil(x / y);
    int rounding = round(x / y);

    cout<<"floor"<<" "<<x<<" / "<<y<<" = "<<flooring<<endl;
    cout<<"ceil"<<" "<<x<<" / "<<y<<" = "<<ceiling<<endl;
    cout<<"round"<<" "<<x<<" / "<<y<<" = "<<rounding<<endl;

    return 0;
}
