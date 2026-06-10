// Question: Store employee details using constructor.

#include <iostream>
using namespace std;

class Employee {
    int id;
    string name;

public:
    Employee(int i, string n) {
        id = i;
        name = n;
    }

    void display() {
        cout << id << " " << name;
    }
};

int main() {
    Employee e(1, "Rahul");
    e.display();

    return 0;
}