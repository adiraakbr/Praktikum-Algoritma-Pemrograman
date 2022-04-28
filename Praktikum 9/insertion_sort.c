// Nama : Adira Rahmana Akbar
// NIM : 24060121140114
// Nama file : insertion_sort.c
// Tanggal : 28 April 2022
// Deskripsi : Membuat algoritma pengurutuan dengan cara membandingkan dan mengurutkan dua data pertama pada array

#include <stdio.h>
#include "fungsi_arr.c"

void insertionSort(int arr[], int n){
    //Kamus lokal
    int i, j, key;

    //Algoritma
    for (i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main(){
    //Kamus lokal
    int arr[]={10,5,3,4,23,21,2,9,57,1};
    int n;

    //Algoritma
    n = sizeof(arr) / sizeof(arr[0]);
    printArr(arr, n);
    insertionSort(arr, n);
    printArr(arr, n);

    return 0;
}
