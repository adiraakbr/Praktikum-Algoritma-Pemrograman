/* Nama File: BiayaParkir.c */
/* Deskripsi: Menghitung biaya parkir seseorang berdasarkan waktu lamanya parkir */
/* Nama: Adira Rahmana Akbar */
/* NIM: 24060121140114 */

#include <stdio.h>
#include <stdlib.h>
int main(){
    /*Kamus*/
    int i,p;
    char inisial;

    /*Algoritma*/
    printf("Masukkan lama waktu parkir : ");
    scanf("%d",&i);
    if (i>-1 && i<= 2){
        p = 2000;
        printf("%d",p);
    }
    else {
        p = 2000 + ((i-2)*500);
        printf("%d",p);
    }
    return 0;
}
