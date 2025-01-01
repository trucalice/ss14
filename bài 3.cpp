#include<stdio.h>
#include <string.h>

int main(){
	char string[] = "convitkeuwaowao";
	char reversed[100];
	int length,i,j;
	length = strlen(string);
	for(i = length - 1, j = 0; i >= 0; i--, j++) {
        reversed[j] = string[i];
    }
    reversed[j] = '\0';
    printf("Chuoi dao nguoc: %s \n", reversed);
	return 0;
}
