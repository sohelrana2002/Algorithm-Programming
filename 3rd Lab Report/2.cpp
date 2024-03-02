// ==========fibonacci series=======
#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n <= 1){
        return n;
    }else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
    int num, i;
    cout << "Enter fibonacci num: ";
    cin >> num;

    for(i = 0 ; i <= num; i++){
        cout << fibonacci(i) << " ";
    }
}