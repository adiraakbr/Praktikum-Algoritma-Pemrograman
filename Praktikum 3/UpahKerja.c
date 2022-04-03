/* Nama File: UpahKerja.c */
/* Deskripsi: Menghitung berapa upah kerja yang didapat */
/* Nama: Adira Rahmana Akbar */
/* NIM: 24060121140114 */

#include <stdio.h>
#include <stdlib.h>
int main(){
    /*Kamus*/
    int k,h;

    /*Algoritma*/
    printf("Masukkan golongan kerja (1 hingga 4) : ");
    scanf("%d",&k);
    printf("Waktu kerja dalam seminggu : ");
    scanf("%d", &h);
    if(h<=40){
        switch (k){
        case 1 :
            printf("%d", h*1000);
            break;
        case 2 :
            printf("%d", h*1500);
            break;
        case 3 :
            printf("%d", h*2000);
            break;
        case 4:
            printf("%d", h*2500);
            break;
        }
    }
    else {
        switch (k){
        case 1 :
            printf("%d", 40*1000 + (h-40)* 1500);
            break;
        case 2 :
            printf("%d", 40*1500 + (h-40)* 2250);
            break;
        case 3 :
            printf("%d", 40*2000 + (h-40)* 3000);
            break;
        case 4:
            printf("%d", 40*2500 + (h-40)* 3750);
            break;
        }
    }
    return 0;
}
