#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int radio;
    int PI = 3; // aproximación

    cout << "Ingrese el radio: ";
    cin >> radio;

    // Forma 1
    int area1 = radio * radio * PI;

    // Forma 2
    int area2 = pow(radio, 2) * PI;

    cout << "Area (radio * radio): " << area1 << endl;
    cout << "Area (pow): " << area2 << endl;

    return 0;
}