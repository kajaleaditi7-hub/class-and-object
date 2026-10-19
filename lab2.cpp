#include <iostream>
using namespace std;
class A{
    private:
    int roll;
    public:
    string name;
    protected:
    int marks;
    public:
    void getDetails(){
        cout<<"Enter your Roll number:";
        cin>>roll;
        cout<<"Enter your Name:";
        cin>>name;
        cout<<"Enter your Marks:";
        cin>>marks;
    }
    void showDetails(){
        cout<<"Roll Number:"<<roll<<endl;
        cout<<"Name:"<<name<<endl;
    }
};
class B:public A{
    public:
    void showData(){
        cout<<"marks:"<<marks<<endl;
    }
};
int main(){
    B bob;
    bob.getDetails();
    bob.showDetails();
    bob.showData();
    return 0;
}
