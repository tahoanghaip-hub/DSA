#include <iostream>
#include <array>

using namespace std;
int main () {
    int n;

    cout << "nhap so: ";
    cin >> n;

    if (n%2 == 0) {
        cout << n << endl << "la so chan";

    }
    else {
        cout << n << endl << "la so le";
    }
    return 0;

}


