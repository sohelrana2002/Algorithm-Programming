// -----Reverse case(case sensitive)----- 
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

    for(i = 0; i < size; i++){
            if(capitalArray[i]){
                textArray[i] = textArray[i] - 32;
            }
    }
    cout << "Reverse case(case sensitive): ";
    for(i = (size - 1); i >= 0; i--){
            cout << textArray[i];
    }
    
}