// =======counting sort(ascending order)=========

#include<iostream>
using namespace std;

int main(){
    int size, i, j;
    cout << "Enter size of an array: ";
    cin >> size;
    int myArray[size];

    for(i = 0; i < size; i ++){
        cout << "Enter " << (i + 1) << " element: ";
        cin >> myArray[i];
    }

    int max = myArray[0];
    for(i = 1; i < size; i ++){
        if(myArray[i] > max){
            max= myArray[i];
        }
    }
    // cout << max;
    int C[max+1];
    for(i = 0 ; i <= max; i++){
        C[i] = 0;
    }
    
    for(j = 0; j < size; j++){
        C[myArray[j]] = C[myArray[j]] + 1;
    }
    
    for(i = 1; i <= max; i++){
        C[i]+=C[i-1];
    }

    
    int B[size + 1];
    for(i = (size-1); i >=0; i--){
        B[C[myArray[i]] - 1] = myArray[i];
        C[myArray[i]] = C[myArray[i]] - 1;
    }

    cout << "Counting sort ascending order: ";
    for(i = 0; i < size; i++){
        cout << B[i] << " ";
    }
    
}