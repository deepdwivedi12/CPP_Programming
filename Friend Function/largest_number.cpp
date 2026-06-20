#include <iostream>
using namespace std;

class Number {
private:
    int num;

public:
    Number(int n) {
        num = n;
    }

    friend void largest(Number, Number);
};

void largest(Number a, Number b) {
    if(a.num > b.num)
        cout << a.num << " is largest";
    else
        cout << b.num << " is largest";
}

int main() {
    Number n1(50);
    Number n2(80);

    largest(n1, n2);

    return 0;
}
