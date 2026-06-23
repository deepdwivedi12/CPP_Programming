#include <iostream>
using namespace std;

int main() {
    int n;

    cout << " Enter the range to print odd numbers : "
    cin >> n;

    for(int i=1; i<=n; i+=2) {
        cout << i << " ";
    }

    return 0;
}
