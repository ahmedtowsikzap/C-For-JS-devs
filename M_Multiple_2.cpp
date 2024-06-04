#include<bits/stdc++.h>
using namespace std;
int main(){
   int a;
   int b;
   int c;
   int d;

   cin>>a>>b>>c>>d;
   a%=100;
   b%=100;
   c%=100;
   d%=100;
   int m=a*b*c*d;
   if(m%100<=9){
   cout<<0;

   }
   cout<<m%100;
   return 0;
}