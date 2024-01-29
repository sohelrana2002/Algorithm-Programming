// Count the duplicate numbers

#include <iostream>
using namespace std;

int main()
{
    int size, i;
    cout << "Enter an array side: ";
    cin >> size;
    int myArray[size];

    for (i = 0; i < size; i++)
    {
        cout << "Enter " << (i + 1) << " elemet: ";
        cin >> myArray[i];
    }

    int count = 0;
    for (i = 0; i < size; i++)
    {
        if(myArray[i] == myArray[i+1])
        {
            count++;
        }
    }

    cout << "\nTotal duplicate numbers: " << count;
}
