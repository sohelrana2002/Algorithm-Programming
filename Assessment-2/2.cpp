// Copy an array into another array

#include<iostream>
using namespace std;

int main(){
    int size, i;
    cout << "Enter an array side: ";
    cin >> size;
    int myArray1[size];
    int myArray2[size];

    for(i = 0; i < size; i++){
        cout << "Enter " << (i+1) << " elemet: ";
        cin >> myArray1[i];
    }

    for(i = 0; i < size; i++){
        myArray2[i] = myArray1[i];
    }

    cout << "First Array: ";
    for(i = 0; i < size; i++){
        cout << myArray1[i] << " ";
    }

    cout << "\nCopy Array: ";
    for(i = 0; i < size; i++){
        cout << myArray2[i] << " ";
    }
}

