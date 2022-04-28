// Nama : Adira Rahmana Akbar
// NIM : 24060121140114
// Nama file : count_sort.c
// Tanggal : 28 April 2022
// Deskripsi : Membuat algoritma pengurutuan dengan cara menghitung jumlah kemunculan dari setiap data yang berada di dalam array

#include <stdio.h>
#include "fungsi_arr.c"

void countingSort(int arr[], int n){
    //Kamus lokal
    int arr1[10];
    int count_arr[10];
    int i, max;

    //Algoritma
    maxArr(arr, n, &max);

    //Inisialisasi
    for (i = 0; i <= max; ++i){
        count_arr[i] = 0;
    }
    //Menambahkan nilai count_arr jika ada elemen di array ke-i
    for (i = 0; i < n; i++){
        count_arr[arr[i]]++;
    }
    //Mencari frekuensi kumulatif
    for (i = 1; i <= max; i++){
        count_arr[i] += count_arr[i - 1];
    }
    //Mencari indeks untuk setiap elemen original array di count array dan menaruh elemen di array yang baru
    for (i = n - 1; i >= 0; i--){
        arr1[count_arr[arr[i]] - 1] = arr[i];
        count_arr[arr[i]]--;
    }
    //Mereplace elemen array yang sudah diurutkan ke array original
    for (i = 0; i < n; i++){
        arr[i] = arr1[i];
    }
}

int main(){
    int arr[]={10,5,3,4,23,21,2,9,57,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArr(arr, n);
    countingSort(arr, n);
    printArr(arr, n);

    return 0;
}
