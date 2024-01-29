// even and odd numbers into diffrent array

#include<iostream>
using namespace std;

int main(){
    int size, i;
    cout << "Enter an array side: ";
    cin >> size;
    int myArray[size], evenArray[size], oddArray[size];

    for(i = 0; i < size; i++){
        cout << "Enter " << (i+1) << " elemet: ";
        cin >> myArray[i];
    }

    cout << "\nEven array: ";
    for(i = 0; i < size; i++){
        if(myArray[i] % 2 == 0){
            evenArray[i] = myArray[i];
            cout << evenArray[i] << " ";
        }
    }

    cout << "\nOdd array: ";
    for(i = 0; i < size; i++){
        if(myArray[i] % 2 == 1){
            oddArray[i] = myArray[i];
            cout << oddArray[i] << " ";
        }
    }
}

