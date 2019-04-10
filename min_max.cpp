#include <iostream>
using namespace std;

template <class T>
T maximum(T n1, T n2) {
    if(n1 > n2) {
        return n1;
    } else {
        return n2;
    }
}

template <class T>
T minimum(T n1, T n2) {
    if(n1 < n2) {
        return n1;
    } else {
        return n2;
    }
}

int main() {
    int i1, i2;
    cout << "Enter two integers: ";
    cin >> i1 >> i2;
    cout << "Minimum of " << i1 << " and " << i2 << " is " << minimum(i1, i2) << endl;
    cout << "Maximum of " << i1 << " and " << i2 << " is " << maximum(i1, i2) << endl;

    double n1, n2;
    cout << "Enter two doubles: ";
    cin >> n1 >> n2;
    cout << "Minimum of " << n1 << " and " << n2 << " is " << minimum(n1, n2) << endl;
    cout << "Maximum of " << n1 << " and " << n2 << " is " << maximum(n1, n2) << endl;
    return 0;
}