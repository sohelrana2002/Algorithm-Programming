// =============sum three numbers using function=========
#include <iostream>
using namespace std;

int a, b, c, sum;
int input()
{
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;
    cout << "Enter 3rd number: ";
    cin >> c;
}

int output()
{
    sum = (a + b + c);
    cout << "Sum of three numbers: " << sum;
}
int main()
{
    input();
    output();
}