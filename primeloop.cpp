#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    for(int num=a;num<=b;num++){
        int i;
        for( i=2;i<num;i++ ){
            if(num%i==0){
                cout<<"Not a prime\n";
                break;
            }
        }
        if(i==num){
            cout<<"prime\n";
        }
}
 return 0;
}