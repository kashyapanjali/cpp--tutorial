#include<iostream>
using namespace std;
int binarytodecimal(int n);
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
    }
}
int binarytodecimal(int n){
  int ans=0;
  int x=1;
  while(n>0){
    int y=n%10;
    ans+=x*y;
    x*=2;
    n=n/10;
  } return ans;
}
    
