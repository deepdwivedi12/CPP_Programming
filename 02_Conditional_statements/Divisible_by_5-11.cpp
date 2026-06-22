#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if(num % 5 == 0 && num % 11 == 0)
        cout << "Divisible";
    else
        cout << "Not Divisible";

    return 0;
}
