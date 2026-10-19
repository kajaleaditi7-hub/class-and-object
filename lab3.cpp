#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;
    static int count;//static member declaration

    Student() {
        count++;   // Increases the shared count for each object
    }
};

int Student::count = 0;  // Definition of static member

int main() {
    Student s1, s2, s3, s4;

    cout << "Total object: " << Student::count;

    return 0;
}