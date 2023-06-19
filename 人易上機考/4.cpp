#include<stdio.h>
#include<stdlib.h>

#define SIZE 12
void show(int a[]), bubbleSort(int a[]);

int main(){
	int data[SIZE] = {77, 5, 5, 22, 13, 55, 97, 4, 796, 1, 0, 9};
	bubbleSort(data);
	printf("¥¿§Ç±Æ¦C«á:\n");
	show(data);
	return 0;
}

void show(int a[]){
	int i;
	for(i = 0; i < SIZE; i++){
		printf("%d ", a[i]);
	}
}

void bubbleSort(int a[]){
	int i, j, temp;
	for(i = 1; i < SIZE; i++){
		for(j = 0; j < (SIZE - 1); j++){
			if(a[j] < a[j + 1]){
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
