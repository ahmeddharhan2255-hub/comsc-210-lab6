// COMSC-210 | Lab 6 | Ahmad Dharhan

#include <iostream>

using namespace std;

//Function Prototypes
void enterArrayData(double* arr, int SIZE);
void outputArrayData(double* arr, int SIZE);
double sumArray(double* arr, int SIZE);

const int SIZE = 5;

int main(){

    double *arr = nullptr;
    arr = new double[SIZE];

    enterArrayData(arr, SIZE);

    outputArrayData(arr, SIZE);

    cout << "Sum of values: " << sumArray(arr, SIZE) << endl;

    delete [] arr;

    arr = nullptr;

    return 0;

}

//enterArrayData() populates an arr size = SIZE
//arguments: arr and SIZE
//returns nothing (updates array)
void enterArrayData(double* arr, int SIZE){
    double val;

    cout << "Data entry for the array: " << endl;
    for(int i = 0; i < SIZE; i++){
        cout << "\t> Element #" << i << ": ";
        cin >> val;
        *(arr + i) = val;
    }

    cout << "Data Entry Complete." << endl;

}

//outputArrayData() outputs content in arr
//arguments: arr and SIZE
//returns nothing (outputs data)
void outputArrayData(double* arr, int SIZE){

    cout << "Outputting array elements: ";

    for(int i = 0; i < SIZE; i++){
        cout << *(arr + i) << " ";
    }

    cout << endl;

}

//sumArray() finds sum of all elements in arr
//arguments: arr and SIZE
//returns sum
double sumArray(double* arr, int SIZE){
    double sum = 0;

    for(int i = 0; i < SIZE; i++){
        sum += *(arr + i);
    }

    return sum;

}