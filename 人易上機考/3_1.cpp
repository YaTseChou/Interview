#include<stdio.h>
#include<stdlib.h>

int main(){
	int i;
	int oddSum = 0;
	int evenSum = 0;
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for(i = 0; i < 10; i++){
		if(arr[i] % 2 == 0){
			evenSum += arr[i];
			}
			else{
				oddSum += arr[i];
			}
		}
		printf("奇數值總和減去偶數值總和: %d\n", oddSum - evenSum);
	return 0;
}
