#include<iostream>
using namespace std;
int main(){
    int a,b,t;
    cin>>a>>b;
    cout<<a<<b<<endl;
    t=b;
    b=a;
    a=t;
    cout<<a<<b<<endl;
    return 0;

}