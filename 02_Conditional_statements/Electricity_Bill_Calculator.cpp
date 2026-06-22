#include <iostream>
using namespace std;

int main() {
    int units;
    float bill;
     
    cout <<"Enter the electricity bill reading in units :";
    cin >> units;

    if(units <= 100)
        bill = units * 1.5;
    else if(units <= 200)
        bill = 150 + (units - 100) * 2;
    else
        bill = 350 + (units - 200) * 3;

    cout << bill;

    return 0;
}
