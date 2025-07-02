#include <iostream>
using namespace std;

int power(int a, int b) {
    if (b == 0) return 1;
    else return a * power(a, b - 1);
}

int main() {
    int a, b;
    cout << "Enter a and b (0 <= a <= 10, 0 <= b <= 10): ";
    cin >> a >> b;
    cout << a << " ^ " << b << " = " << power(a, b) << endl;
    return 0;
}
