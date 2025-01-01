#include<stdio.h>
#include<string.h>

int main(){
	char string[100];
    printf("nhap vao mot chuoi bat ki: ");
    scanf("%99s",string);
    size_t len = strlen(string);
    printf("chuoi vua nhap: %s\n",string);
    printf("do dai cua chuoila: %zu\n",len);	
	return 0;
}
