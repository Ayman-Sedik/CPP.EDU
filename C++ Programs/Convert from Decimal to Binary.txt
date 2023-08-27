#include <iostream>
using namespace std;

int main() {

    //ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int decimal, binary = 0, remainder, product = 1;
    cout << "Enter Decimal Number" << endl;
    cin >> decimal;
    while (decimal != 0) {
        remainder = decimal % 2;
        binary = binary + (remainder * product);
        decimal = decimal / 2;
        product *= 10;
    }
    cout << "The number in the binary form is: " << binary;
    return 0;
}
