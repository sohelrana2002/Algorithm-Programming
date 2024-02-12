// -----Reverse Case----- 
#include<iostream>
using namespace std;

int main()
{
    int i;
    string text;
    cout << "Enter a string: ";
    cin >> text;
    char size = text.length();
    char textArray[size];
    bool capitalArray[size];
    char reverseArray[size];

    for(i = 0; i < size; i++){
        textArray[i] = text[i];
        if(textArray[i] >= 65 && textArray[i] <= 96){
            capitalArray[i] = true;
        }else{
            capitalArray[i] = false;
        }
        if(textArray[i] >= 65 && textArray[i] <= 96){
            textArray[i] = textArray[i] + 32;
        }
    }

    for(i = (size - 1); i >= 0; i--){
        int j=(size-1)-i;
         reverseArray[j] =  textArray[i];
    }

    for(i = 0; i < size; i++){
            if(capitalArray[i]){
                reverseArray[i] = reverseArray[i] - 32;
            }
    }

    cout << "Reverse case with proper index: ";
    for(i = 0; i < size; i++){
            cout << reverseArray[i];
    }
}