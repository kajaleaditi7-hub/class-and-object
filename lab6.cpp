
#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    void setData(int l, int b);
    int area();
};

void Rectangle::setData(int l, int b) {
    length = l;
    breadth = b;
}

int Rectangle::area() {
    return length * breadth;
}

int main() {
    Rectangle r;
    int l, b;

    cout << "Enter Length: ";
    cin >> l;

    cout << "Enter Breadth: ";
    cin >> b;

    r.setData(l, b);  // Set the values first

    cout << "Area of Rectangle: " << r.area() << endl;

    return 0;
}
