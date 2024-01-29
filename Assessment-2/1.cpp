// Show an array in reverse oorder

#include<iostream>
using namespace std;

int main(){
    int size, i;
    cout << "Enter an array side: ";
    cin >> size;
    int myArray[size];

    for(i = 0; i < size; i++){
        cout << "Enter " << (i+1) << " elemet: ";
        cin >> myArray[i];
    }

    cout << "Reverse order: ";
    for(i = (size-1); i >= 0; i--){
        cout << myArray[i] << " ";
    }
}

