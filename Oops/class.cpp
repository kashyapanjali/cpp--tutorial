#include<iostream>
using namespace std;
class Student{
    //private by default
    int x;
    public:
    void set(int n){
        x=n;
    }
    int get(){
        return x;
    }
    string name;
    int roll;
};
int main(){
    //static intialization
    Student s;
    s.name="Anjali";
    s.roll=21;
    cout<<s.name<<"-"<<s.roll<<endl;
    //dynamic intialization
    Student *s1=new Student();
    s1->name="Kajal";
    s1->roll=23;
    cout<<s1->name<<"-"<<s1->roll<<endl;
    //set or get access when properties and method private
    //In static way
    Student s2;
    s2.set(4);
    cout<<s2.get()<<endl;
    //In dynamic way
    Student *s3=new Student();
    s3->set(5);
    cout<<s3->get()<<endl;
    return 0;
}