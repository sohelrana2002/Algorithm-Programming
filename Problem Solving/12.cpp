#include <iostream>
using namespace std;

int fibonacci(int n) {
    int arr[n + 1];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i <= n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[n];
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Fibonacci number at position " << n << " is: " << fibonacci(n) << endl;
}