#include<stdio.h>
#include<stdlib.h>

int main(){
	int i; 
	int j = 0;
	int k = 0;
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *odd = (int*)malloc(5*sizeof(int));
	int *even = (int*)malloc(5*sizeof(int));
	for(i = 0; i < 10; i++){
		if(arr[i] % 2 == 0){
			even[j] = arr[i];
			j++;
		}
		else{
			odd[k] = arr[i];
			k++;
		}
	}
	printf("°¸¼Æ°}¦C: ");
	for(j = 0; j < 5; j++){
		printf("%d ", *(even + j));
	}
	printf("\n");
	printf("©_¼Æ°}¦C: ");
	for(k = 0; k < 5; k++){
		printf("%d ", *(odd + k));
	}
	return 0;
}
