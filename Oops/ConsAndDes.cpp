#include<iostream>
using namespace std;
class Vehicle{
    public:
    string name;
    string color;
    Vehicle()//default constructor-argument
    {
       name="hero";
       color="red";
    }
    Vehicle(string bike_name,string bike_color)//parameterized constructor- no argument
    {
      name=bike_name;
      color=bike_color;
    }
    Vehicle(Vehicle&v){
        name=v.name;
        color=v.color;
    }

    ~Vehicle(){
        cout<<"destructor is called\n";
        }

    
};
int main(){
    Vehicle bike;
    cout<<bike.name<<" "<<bike.color<<endl;
    Vehicle bike2("Apachee","red");
    cout<<bike2.name<<" "<<bike2.color<<endl;
    Vehicle bike3=bike2;
    cout<<bike3.name<<" "<<bike3.color<<endl;
}