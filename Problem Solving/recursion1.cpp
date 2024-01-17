// =========Call a funtion 10th time using recursion==========
#include <iostream>
using namespace std;

int i = 0;
int recursion(){
    if(i == 10){
        return i;
    }else{
        i++;
        recursion();
    }
}

int main(){
    cout << recursion();
}