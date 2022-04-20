/* Nama File: main.c */
/* Nama: Adira Rahmana Akbar */
/* NIM: 24060121140114 */
/* Deskripsi: Membuat soal/program tentang senquential search */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Searching.h"

int main(){
    //Kamus
    int T, X, i;
    int n;
    int ix;
    bool found;

    //Algoritma
    printf("Masukkan jumlah data array : ");
    scanf("%d",&T);
    int Arr[T];

    for(i=0;i<T;i++){
            printf("Masukkan Elemen ke-%d :", i+1);
            scanf("%d",&Arr[i]);
    }

    printf("Masukkan nilai X yang ingin dicari : ");
    scanf("%d",&X);
    n = sizeof(Arr)/sizeof(Arr[0]);
    printf("Sequential Search Tanpa boolean : ");
    SEQSearchX1(Arr, n, &ix, X);
    printf("\n");
    printf("Sequential Search Dengan Boolean : ");
    SEQSearchX2(Arr, n, X, &ix, &found);

    return 0;
}
