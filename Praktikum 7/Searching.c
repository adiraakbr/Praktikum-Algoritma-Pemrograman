/* Nama File: Searching.c */
/* Nama: Adira Rahmana Akbar */
/* NIM: 24060121140114 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Searching.h"

//Algoritma Sequential Search Tanpa Boolean
void SEQSearchX1(int T[], int N, int *IX, int X){
    //Kamus Lokal
    int i;

    //Algoritma
    i = 0;
    while ((i < N) && (T[i] != X)){
        i = i + 1 ;
    }
    if (T[i] == X){
        *IX = i;
        printf("X berada di index ke-%d", *IX);
    }
    else{
        *IX = -1;
        printf("IX = 0");
    }
}

//Algoritma Sequential Search dengan Boolean
void SEQSearchX2(int T[], int N, int X, int *IX, bool *Found){
    //Kamus Lokal
    int i;

    //Algoritma
    *Found = false;
    i = 0;
    while((i < N-1) && !*Found){
        if (T[i] == X ){
            *Found = true;
        }
        else{
            printf("%d\n", i);
            i++;
        }
    }
    if (*Found){
        *IX = i;
        printf("X berada di index ke-%d", *IX);
    }
    else {
        *IX = -1;
        printf("IX = 0");
    }
}
