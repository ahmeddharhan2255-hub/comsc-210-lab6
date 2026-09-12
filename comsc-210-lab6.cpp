// COMSC-210 | Lab 6 | Ahmad Dharhan

#include <iostream>

using namespace std;

void enterArrayData(double* arr, int SIZE);
void outputArrayData(double* arr, int SIZE);
void sumArray(double* arr, int SIZE);

const int SIZE = 5;

int main(){

    double *arr = nullptr;
    arr = new double[SIZE];

    enterArrayData(arr, SIZE);

    outputArrayData(arr, SIZE);

    delete [] arr;

    arr = nullptr;

    return 0;


}

void enterArrayData(double* arr, int SIZE){
    double val;

    cout << "Data entry for the array: " << endl;
    for(int i = 0; i < SIZE; i++){
        cout << "> Enter Double For Element #" << i + 1 << endl;
        cin >> val;
        arr[i] = val;
        arr++;   
    }

    cout << "Data Entry Complete." << endl;

}

void outputArrayData(double* arr, int SIZE){

    cout << "Outputting array elements: " << endl;

    for(int i = 0; i < SIZE; i++){
        cout << arr[i] << " ";
    }



}