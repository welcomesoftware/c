/**
 * find_solution.c
 * solucion recursiva utilizando la evalucion a corto circuito, dado un numero
 * ella buscara una solucion ya sea sumando o multiplicando.
 */

// Bibliotecas
#include <stdio.h>

// Prototipos
int find_solution(int target);
int find(int current, char *history);







int find_solution(int target) {
    find(current, history);
    return find(1, "1");
}

int find(int current, char *history) {
    if (current == target) {
        return history;
    } else if (current > target) {
        return ;
    } else {
        return find(current + 5, *history + " + 5");
    }

}
