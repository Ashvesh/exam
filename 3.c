#include <stdio.h>
#include <string.h>

 main() {
    char str[20];
    int length, i;

    
    printf("Enter a string: ");
    scanf("%s", str);

    
    length = strlen(str);

    
    for (i = 0; i < length / 2; i++)
	 {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    
    printf("Reversed string: %s\n", str);

    
}

