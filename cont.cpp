#include<iostream>
using namespace std;
int main(){
    int pocketmoney=20;
    for(int date=1;date<=30;date++){
        if(pocketmoney==0){
            break;
        }
        cout<<"go out today!"<<endl;
        pocketmoney=pocketmoney-6;
    }
    return 0;
}