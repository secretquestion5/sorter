#include <vector>
#include <stdio.h>
#include <cstdlib>
#include <math.h>
#include <random>

int temp;

void makeSort(int* arr, int i){
        for(int j = i; j < 15; j++){
            if (arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
}

void fillArray(int* arr){
    for(int i = 0; i < 15; i++){
        arr[i] = static_cast<int>(rand()*(1.0/(static_cast<double>(RAND_MAX)+1.0))*(20-0+1)+0);
    }
}