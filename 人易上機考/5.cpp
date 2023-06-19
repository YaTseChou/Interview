#include<stdlib.h>
#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int isInArray(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return 1;
        }
    }
    return 0; 
}

void intersection(int arrA[], int sizeA, int arrB[], int sizeB, int arrC[], int *sizeC) {
    int k = 0;
    for (int i = 0; i < sizeA; i++) {
        if (isInArray(arrB, sizeB, arrA[i])) {
            arrC[k] = arrA[i];
            k++;
        }
    }
    *sizeC = k;
}

void difference(int arrA[], int sizeA, int arrB[], int sizeB, int arrD[], int *sizeD) {
    int k = 0;
    for (int i = 0; i < sizeA; i++) {
        if (!isInArray(arrB, sizeB, arrA[i])) {
            arrD[k] = arrA[i];
            k++;
        }
    }
    *sizeD = k;
}

void unionSet(int arrA[], int sizeA, int arrB[], int sizeB, int arrE[], int *sizeE) {
    int k = 0;
    for (int i = 0; i < sizeA; i++) {
        arrE[k] = arrA[i];
        k++;
    }
    for (int j = 0; j < sizeB; j++) {
        if (!isInArray(arrA, sizeA, arrB[j])) {
            arrE[k] = arrB[j];
            k++;
        }
    }
    *sizeE = k;
}

int main() {
    int arrA[] = {77, 5, 5, 22, 13, 55, 97, 4, 796, 1, 0, 9};
    int sizeA = sizeof(arrA) / sizeof(arrA[0]);

    int arrB[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sizeB = sizeof(arrB) / sizeof(arrB[0]);

    int arrC[sizeA < sizeB ? sizeA : sizeB];
    int sizeC;

    int arrD[sizeA];
    int sizeD;

    int arrE[sizeA + sizeB];
    int sizeE;

    intersection(arrA, sizeA, arrB, sizeB, arrC, &sizeC);
    printf("°}¦CC: ");
    printArray(arrC, sizeC);

    difference(arrA, sizeA, arrB, sizeB, arrD, &sizeD);
    printf("°}¦CD: ");
    printArray(arrD, sizeD);

    unionSet(arrA, sizeA, arrB, sizeB, arrE, &sizeE);
    printf("°}¦CE: ");
    printArray(arrE, sizeE);

    return 0;
}
