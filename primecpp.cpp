#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n=";
    cin>>n;
    if(n%1==0&&n%n==0&&n%2!=0){
        cout<<"prime\n";
    }
    else{
        cout<<"not prime\n";
    }
    return 0;
}