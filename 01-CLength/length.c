#include <stdio.h>
#include <assert.h>

int length(const char cadena[]) {
    if (cadena[0] == '\0')
        return 0;
    return 1 + length(cadena + 1);
}

int main() {
    char cadena[] = "Hola Mundo!";
    assert(length(cadena)  == 11);
    printf("Todos los asserts pasaron OK\n");
    return 0;
}
