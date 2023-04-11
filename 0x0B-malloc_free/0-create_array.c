#include <stdio.h>
#include <stdlib.h>

char* createCharArray(int size, char ch) {
    char* charArray = malloc(sizeof(char) * size);
    if (charArray == NULL) {
        printf("Error: Could not allocate memory.\n");
        exit(1);
    }
    for (int i = 0; i < size; i++) {
        charArray[i] = ch;
    }
    return charArray;
}

int main() {
    char* myCharArray = createCharArray(10, 'a');
    for (int i = 0; i < 10; i++) {
        printf("%c ", myCharArray[i]);
    }
    printf("\n");
    free(myCharArray);
    return 0;
}

