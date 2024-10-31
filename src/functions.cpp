//
// Created by Taras Neridnyi on 31.10.2024.
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

void create(int* &a, const int size, const int Low, const int High)
{
    a = new int[size];
    for (int i=0; i<size; i++)
        a[i] = Low + rand() % (High-Low+1);
}

void print(int* a, const int size) {
    for (int i=0; i<size; i++)
        cout << setw(4) << a[i] << " ";
}

void swapHalves(int* a, const int size) {
    int temp = 0;
    for (int i=0; i<size/2; i++) {
        temp = a[i];
        a[i] =  a[i+size/2];
        a[i+size/2] = temp;
    }

}

