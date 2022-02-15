/**
 * Unión:
 * Ejemplo tipico del uso de una unión.
 */
#include <stdio.h>

#define CHARACTER   'C'
#define INTEGER     'I'
#define FLOAT       'F'

struct generic_tag {
    char type;
    union shared_tag {
        char c;
        int i;
        float f;
    }shared;
};

void print_function(struct generic_tag generic);

int main() {

    struct generic_tag var;

    var.type = CHARACTER;
    var.shared.c = '$';
    print_function(var);

    var.type = FLOAT;
    var.shared.f = 12345.67890;
    print_function(var);

    var.type = '_x_';
    var.shared.i = 111;
    print_function(var);

    // termina el programa
    return 0;
}


void print_function(struct generic_tag generic) {
    puts("The generic value is...");
    switch (generic.type) {
        case CHARACTER:
            printf("%c\n", generic.shared.c);
            break;
        case INTEGER:
            printf("%i\n", generic.shared.i);
            break;
        case FLOAT:
            printf("%f\n", generic.shared.f);
            break;
        defautl:
            printf("an unknown type: %c\n", generic.type);
            break;
    }
}
