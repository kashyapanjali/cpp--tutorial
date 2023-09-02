#include<iostream>
using namespace std;
bool pythogoras(int x,int y,int z);
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if(x*x==y*y+z*z){
          cout<<"py\n";
     }else
     {
        cout<<"not py";
     }
    return 0;
}
// bool pythogorous(int x,int y,int z){
//       int a=max(x,max(y,z));
//      int b,c;
//        if(a==x){
//          b=y;
//         c=z;
//       }
//       else if(a==y){
//           b=x;
//          c=z;
//       }
//       else 
//         {
//         b=x;
//      c=y;
    //      }
     
    // if(x*x==y*y+z*z){
    //      return true;  
    // }
    // return 0;
    //         }
