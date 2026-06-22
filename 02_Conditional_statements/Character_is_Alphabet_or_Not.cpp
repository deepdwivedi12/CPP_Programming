//Character is alphates or not
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a ch :";
    cin >> ch;

    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        cout << "Alphabet";
    else
        cout << "Not Alphabet";

    return 0;
}
