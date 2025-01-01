#include <stdio.h>
#include <string.h>

int main() {
    char string[100];  
    int count = 0;
    int length;
    int in_word = 0;  
    printf("Nhap chuoi: ");
    fgets(string, sizeof(string), stdin); 
    length = strlen(string);
    if (string[length - 1] == '\n') {
        string[length - 1] = '\0';
    }
    for (int i = 0; i < length; i++) {
        if (string[i] != ' ' && in_word == 0) {
            count++;  
            in_word = 1; 
        }
        if (string[i] == ' ') {
            in_word = 0;
        }
    }
    printf("So luong cua cac tu trong chuoi la: %d\n", count);
    return 0;
}

