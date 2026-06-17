#include<iostream>
using namespace std;
class student{
   private:
    string name;
    int age,roll_no;
    string grade;
    //FUNCTION SETTER GETTER***
    public:
    void setname(string n){
        name=n;
    }
    void getname(){
        cout<<name<<" ";
    }
};