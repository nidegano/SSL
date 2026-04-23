#include <stdio.h>

int length(const char cadena[]) {
    if (cadena[0] == '\0')
        return 0;
    return 1 + length(cadena + 1);
}

int main() {
    char cadena[] = "Hola Mundo!";
    
    printf("'%s' -> largo: %d\n", cadena, length(cadena));

    return 0;
}