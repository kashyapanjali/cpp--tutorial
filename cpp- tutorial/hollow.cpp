#include<iostream>
using namespace std;
int main(){
    int rows,column;
    cout<<"enter the rows\n";
    cin>>rows;
    cout<<"enter the column\n";
    cin>>column;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=column;j++){
        if(i==1||i==rows){
            cout<<"*";
        }   
        else if(j==1||j==column){
            cout<<"*";
        }
        else 
        {
            cout<<" ";
        }   
             }
             cout<<endl;
    }
    return 0;
}