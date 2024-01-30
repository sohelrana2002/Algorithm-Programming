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
    bool isDuplicate;

    for (int i = 0; i < size; i++)
    {
        if (isDuplicate)
        {
            count++;
        }
        isDuplicate = false;
        for (int j = i + 1; j < size; j++)
        {
            if (myArray[i] == myArray[j])
            {
                isDuplicate = true;
                myArray[j] = myArray[j + 1];
                size--;
            }
        }
    }

    cout << "\nTotal duplicate numbers: " << count;
}
