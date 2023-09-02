#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     cout<<(n*(n+1))/2;
//     return 0;
//}
int sum(int *n);
int main(){
    int n;
    cin>>n;
    sum(&n);
    cout<<sum(&n)<<endl;
    return 0;
}
int sum(int *n)
{    int sum=0;
   for(int i=1;i<=*n;i++){
       sum+=i;
   } //cout<<sum<<endl;
    return sum;
}