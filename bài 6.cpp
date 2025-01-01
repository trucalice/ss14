#include <stdio.h>

int main() {
    char str[1000]; 
    int count = 0;  
    int inWord = 0;
    printf("Nhap mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin); 
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            if (!inWord) {
                count++;
                inWord = 1; 
            }
        } else {
            inWord = 0; 
        }
    }
    printf("So tu trong chuoi: %d\n", count);
    return 0;
}

