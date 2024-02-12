// -----multiplication of two matrix----- 
#include<iostream>
using namespace std;

int main()
{
    int i;
    string text;
    cout << "Enter a string: ";
    cin >> text;
    int size = text.length();
    char textArray[size];
    int capitalArray[size];

    for(i = 0; i < size; i++){
        textArray[i] = text[i];
        if(textArray[i] >= 65 && textArray[i] <= 96){
            capitalArray[i];
        }
        if(textArray[i] >= 65 && textArray[i] <= 96){
            textArray[i] = textArray[i] + 32;
        }
    }

    cout << "Array: ";
    for(i = 0; i < size; i++){
            textArray[i] = capitalArray[i] - 32;
    }

    cout << "Main array: ";
    for(i = (size - 1); i >= 0; i--){
        cout << textArray[i];
    }
}