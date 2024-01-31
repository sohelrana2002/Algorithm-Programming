// write a cpp program that can input an integer number and then it can separate each and every digit of that number into an array. after that print that array in descending order.

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num, size, i;
    cout << "Enter integer number: ";
    cin >> num;

    /*---log10() Parameters
    The log10() function takes a single mandatory argument in the range [0, ∞].
    If the value is less than 0, log10() returns NaN (Not a Number).*/

    size = ceil(log10(num));
    int myArray[size];

    for(i = 0; i < size; i++){
        myArray[i] = num % 10;
        num = num / 10;
    }

    for(i = 1; i < size; i++){
        int temp = myArray[i];
        int j = i - 1;

        while (j >= 0 && myArray[j] < temp)
        {
            myArray[j+1] = myArray[j];
            j--;
        }
        
        myArray[j+1] = temp;
    }

    cout << "Inseration sort descending order: ";
    for(i = 0; i < size; i++){
        cout << myArray[i] << " ";
    }
}
