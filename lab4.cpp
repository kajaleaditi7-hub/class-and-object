#include <iostream>
using namespace std;
void byValue(int x){
    x=x+5;
}
void byReference(int &x){
    x=x+5;
}
class Number{
    public:
    int value;
};
void displayObject(Number n){
    cout<<"Object Value:"<<n.value<<endl;
}
int main(){
    int a,b;
    cout<<"Enter value for a:";
    cin>>a;
    cout<<"Enter value for b:";
    cin>>b;
    byValue(a);
    byReference(b);
    Number n;
    cout<<"Enter object value:";
    cin>>n.value;
    cout<<"\nAfter pass by value:"<<a<<endl;
    cout<<"After pass by reference:"<<b<<endl;
    displayObject(n);
    return 0;
}