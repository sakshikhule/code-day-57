#include <iostream>
using namespace std;
int main() {
int t;
cout<<"enter no = ";
cin>>t;
while(t--){
 int n,x,p;
cin>>n>>x>>p;
 int m=4*x-n;
 if(m>=p){
cout<<"pass"<<'\n';
 }
else{
cout<<"fail"<<'\n';
 }
}
return 0;
}
//not able to get the exact output
