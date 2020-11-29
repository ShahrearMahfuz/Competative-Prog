#include <iostream>
using namespace std;

 int main(){

 int n,k,g,x,ct=0;
 cin>>n>>k;
 int ar[n];

for(int i=0;i<n;i++)
{
    cin>>ar[i];
    if(i==k-1)
    {
        int g=ar[i];
        cout<<g<<endl;
    }}
for(int i=0;i<n;i++){
    if(ar[i]>=g)
        {ct++;}
}
cout<<ct<<endl;

return 0;

 }
