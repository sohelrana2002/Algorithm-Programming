// =======bubble sort(descending order)======

#include<iostream>
using namespace std;

int main(){
    int size, i, j, temp;
    cout << "Enter size of an array: ";
    cin >> size;
    int myArray[size];

    for(i = 0; i < size; i ++){
        cout << "Enter " << (i + 1) << " element: ";
        cin >> myArray[i];
    }

    for(i = 0; i < size; i++){
        for(j = 0; j < size -1; j ++){
            if(myArray[j] < myArray[j+1]){
                temp = myArray[j];
                myArray[j] = myArray[j+1];
                myArray[j+1] = temp;
            }
        }
    }

    cout << "Bubble sort in descending order: ";
    for(i = 0; i < size; i++){
        cout <<myArray[i] << " ";
    }
}