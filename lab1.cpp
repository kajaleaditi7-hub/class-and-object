#include <iostream>
using namespace std;
class Student{
    int roll;
    string name;
      public:
    void getDetails(){
        cout<<"Enter Roll Number:";
        cin>>roll;
        cout<<"Enter Name:";
        cin>>name;
    }
    void display(){
    cout<<"Roll Number:"<<roll<<endl;
    cout<<"Name:"<<name<<endl;
    }
};
int main()
{
    Student s;
    s.getDetails();
    s.display();
    return 0;
}