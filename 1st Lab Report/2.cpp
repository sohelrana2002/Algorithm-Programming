// ----insertion sort descending order-------

#include<iostream>
using namespace std;

int main()
{
    int size, i;
    cout << "Enter size of an array: ";
    cin >> size;
    int myArray[size];

    for(i = 0; i < size; i++){
        cout << "Enter " << (i+1) << " element: ";
        cin >> myArray[i];
    }

    for(i = 1; i < size; i++){
        int temp = myArray[i];
        int j = i - 1;
        // -----descending just symbol change---
        while (j >= 0 && myArray[j] < temp)
        {
            myArray[j+1] = myArray[j];
            j--;
        }
        
        myArray[j+1] = temp;
    }

    cout << "Inseration sort ascending order: ";
    for(i = 0; i < size; i++){
        cout << myArray[i] << " ";
    }
}
