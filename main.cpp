#include<iostream>

#include "quickSort.h"

void show(int arr[], int n){
    for (size_t i = 0; i < n; ++i) std::cout<<arr[i]<<" ";
    std::cout<<std::endl;
}

template <typename T> void show1(const T  &v){
    for (auto const i:v) std::cout<<i<<" "; std::cout<<std::endl;
}

int main(){

std::cout<<"The program takes integers and sorts them using quick-sort algorithm."<<std::endl;
std::cout<<"Please enter the SIZE of the array and press Enter:";
    int n;
    std::cin >> n;
    if (n < 0) n *= -1;
    int* arr = new int[n];
std::cout<<"Please enter each element of the array and press Enter."<<std::endl;
    for (size_t i = 0; i < n; ++i){
std::cout<< i <<"-th element is: ";
        std::cin >> arr[i];
    }

std::cout<<"Input array: "<<std::endl;
show(arr, n);
    quickSort(arr, 0, n-1);
std::cout<<"Sorted array: "<<std::endl;
show(arr, n);
    delete[] arr;
    system("pause");
    return 0;
}
