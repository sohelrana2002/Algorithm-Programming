// ========find negative numbers in an array==========
#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter size of an array: ";
    cin >> size;
    int myArray[size];

    int i;
    for(i = 0; i < size; i++){
        cout << "Enter " << (i+1) << " element: ";
        cin >> myArray[i];
    }
    int count = 0;
     for(i = 0; i < size; i++){
        if(myArray[i] < 0){
            count++;
        }
    }
    cout << "Total count of negative numbers: " << count;
}