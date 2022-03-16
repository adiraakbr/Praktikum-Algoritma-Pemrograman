/* Nama File: BiayaParkir.c */
/* Deskripsi: Menghitung biaya parkir seseorang berdasarkan waktu lamanya parkir */
/* Nama: Adira Rahmana Akbar */
/* NIM: 24060121140114 */

#include <stdio.h>
#include <stdlib.h>
int main(){
    /*Kamus*/
    int t,biaya;
    char inisial;

    /*Algoritma*/
    printf("Masukkan lama waktu parkir : ");
    scanf("%d",&i);
    if (i>-1 && i<= 2){
        biaya = 2000;
        printf("%d",biaya);
    }
    else {
        biaya = 2000 + ((i-2)*500);
        printf("%d",biaya);
    }
    return 0;
}
