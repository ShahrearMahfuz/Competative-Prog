#include <iostream>
using namespace std;

int main(){
int n,x,y,z,i,ct=0;
cin>>n;


for( i=0;i<n;i++)
{
 cin>>x>>y>>z;
 if((x+y+z)>=2) ++ct;
}
cout<<ct<<endl;
return 0;
}







