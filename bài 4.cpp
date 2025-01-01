#include <stdio.h>
#include <string.h>

int main() {
    char string[] = "hohohehehhuhuhako";  
    char n;                             
    int length = strlen(string);       
    int count = 0; 
    printf("Nhap vao mot ki tu bat ky (co trong chuoi 'hohohehehhuhuhako'): ");
    scanf("%c", &n); 
    for (int i = 0; i < length; i++) {
        if (string[i] == n) {
            count++;  
        }
    }
    printf("So lan xuat hien cua ki tu '%c' trong chuoi la: %d\n", n, count);
    return 0;
}

