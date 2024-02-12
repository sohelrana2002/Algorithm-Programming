// -----multiplication of two matrix----- 
#include<iostream>
using namespace std;

int main()
{
    int row, col, i, j, k;
    cout << "Enter row size: ";
    cin >> row;
    cout << "Enter column size: ";
    cin >> col;
    if(row != col){
        cout << "Multiplication must be square matrix" <<endl;
        main();
    }
    int myArray1[row][col];
    int myArray2[row][col];
    int myArray3[row][col];

    for(i = 0; i < row; i++){
        cout << "Enter 1st Matrix [A] and [B]: ";
        for(j = 0; j < col; j++){
            cin >> myArray1[i][j];
        }
    }

    for(i = 0; i < row; i++){
        cout << "Enter 2nd Matrix [A] and [B]: ";
        for(j = 0; j < col; j++){
            cin >> myArray2[i][j];
        }
    }

    // ----multiplication of two matrix---- 
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            myArray3[i][j] = 0;
            for(k = 0; k < row; k++){
                myArray3[i][j] += myArray1[i][k] * myArray2[k][j];
            }
        }
    }

    cout << "\nMultiplication of two matrix: " <<endl;
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            cout << myArray3[i][j] << " ";
        }
        cout <<endl;
    }

}