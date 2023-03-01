#include "quickSort.h"

int partition_QS(std::vector<int> &arr, int start, int ends);



void quickSort(std::vector<int> &arr, int start, int ends){
    if (start >= ends) return;              // base case
    int p = partition_QS(arr, start, ends); // find the pivot element
    quickSort(arr, start, p-1);             // sorting left part
    quickSort(arr, p+1, ends);              // sorting right part
}


int partition_QS(std::vector<int> &arr, int start, int ends){

    int pivot = arr[start];
    int cnt = 0;

    for (size_t i = start+1; i <= ends; ++i){
        if (arr[i] <= pivot) ++cnt;
    }
    int pivotIdx = start + cnt;
    std::swap(arr[start], arr[pivotIdx]); // place pivot element into right place

    int i = start, j = ends;

    while (i < pivotIdx && j > pivotIdx){
        while (arr[i] <= pivot) ++i;
        while (pivot < arr[j]) --j;
        if (i < pivotIdx && j > pivotIdx) {
            std::swap(arr[i], arr[j]);
            ++i;
            --j;
        }
    }

    return pivotIdx;
}

