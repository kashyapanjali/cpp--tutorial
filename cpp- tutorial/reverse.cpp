#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rem;
    while(n>0){
        rem=n%10;
        cout<<rem;
        n=n/10;
    }cout<<" is the reverse of given number.";
    return 0;
}