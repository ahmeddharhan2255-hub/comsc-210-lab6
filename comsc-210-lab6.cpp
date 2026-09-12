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

//Takes in array and size
//Iterates using for loop
//Inputs values using pointer notation
void enterArrayData(double* arr, int SIZE){
    double val;

    cout << "Data entry for the array: " << endl;
    for(int i = 0; i < SIZE; i++){
        cout << "\t> Element # " << i + 1 << ": ";
        cin >> val;
        *(arr + i) = val;
    }

    cout << "Data Entry Complete." << endl;

}

//Takes in array and size
//iterates through for loop
//Outputs elements
void outputArrayData(double* arr, int SIZE){

    cout << "Outputting array elements: ";

    for(int i = 0; i < SIZE; i++){
        cout << *(arr + i) << " ";
    }

    cout << endl;

}

//Takes in arr and SIZE
//Adds each value to sum
//Returns sum to main
double sumArray(double* arr, int SIZE){
    double sum = 0;

    for(int i = 0; i < SIZE; i++){
        sum += *(arr + i);
    }

    return sum;

}