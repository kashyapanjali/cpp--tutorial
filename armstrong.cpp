#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int originaln=n;
    while(n>0){
        int lastdigit=n%10;
        sum=sum+(lastdigit*lastdigit*lastdigit);
        n=n/10;
    }
    if(originaln==sum){
        cout<<"armstrong number"<<endl;
    }
    else{
        cout<<"not armstrong number"<<endl;
    }
    return 0;
}