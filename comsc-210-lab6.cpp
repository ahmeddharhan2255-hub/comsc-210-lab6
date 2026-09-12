// COMSC-210 | Lab 6 | Ahmad Dharhan

#include <iostream>

using namespace std;

void enterArrayData();
void outputArrayData();
void sumArray();

const int SIZE = 5;

int main(){

    double *arr = nullptr;
    arr = new double[SIZE];


}

void enterArrayData(double* arr, int SIZE){
    double val;
    for(int i = 0; i < SIZE; i++){
        cout << "Enter Double For Element #" << i << endl;
        cin >> val;
        arr[i] == val;
        arr++;   
    }
    
}