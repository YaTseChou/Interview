#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char ch[] = "�H�����:�W �� �� �� - �t��k";
	char str[50] = {0};
	int i = 0, j = 0;
	int k;
	while(ch[i] != '\0'){
		if(ch[i] != ' '){
			str[j] = ch[i];
			j++;
		}
		else if(ch[i] == ' ' && ch[i + 1] == '-'){
		ch[i] = ' '; 
		}
		i++;
	}
	printf("%s", str);
	return 0;
}
