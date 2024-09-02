#include <stdio.h>
int main() {  
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);  
    
    
    printf("ASCII value of %c in dicimal = %d\n", c, c);
    //printf(" %c %d %x %o\n", num, num, num, num);
 
    printf("ASCII value of %c in hex = %x\n", c, c);
    printf("ASCII value of %c in octal= %o\n", c, c);
    return 0;
}

