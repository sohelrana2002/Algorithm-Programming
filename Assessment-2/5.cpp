// Show the index of largest and smallest number from an array

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

    int max = 0;
    int maxIndex = 0;
    for(i = 0; i < size; i++){
        if(myArray[i] > max){
            max = myArray[i];
            maxIndex = i;
        }
    }
    cout << "\nLargest Number: " << max << " index: " << maxIndex;

    int min = max;
    int minIndex = maxIndex;
    for(i = 0; i < size; i++){
        if(myArray[i] < min){
            min = myArray[i];
            minIndex = i;
        }
    }
    cout << "\nSmallest Number: " << min << " index: " << minIndex;
}

