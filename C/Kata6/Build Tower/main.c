#include <stdio.h>
// Build Tower

// Build a pyramid-shaped tower, as an array/list of strings, given a positive integer number of floors. A tower block is represented with "*" character.

// For example, a tower with 3 floors looks like this:

// [
//   "  *  ",
//   " *** ", 
//   "*****"
// ]

// And a tower with 6 floors looks like this:

// [
//   "     *     ", 
//   "    ***    ", 
//   "   *****   ", 
//   "  *******  ", 
//   " ********* ", 
//   "***********"
// ]

void build_tower(unsigned n, char tower[n][2 * n - 1]) {
    for (int i = 0; i < n; i++) {
        int spaces = n - i - 1;
        int stars = 2 * i + 1;

        for (int j = 0; j < spaces; j++)
            tower[i][j] = ' ';
        for (int j = spaces; j < spaces + stars; j++) 
            tower[i][j] = '*';
        for (int j = spaces + stars; j < 2 * n - 1; j++)
            tower[i][j] = ' ';
    }
}

int main() {
    int n = 6;
    char tower[n][2 * n - 1];
    build_tower(n, tower);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * n - 1; j++)
            printf("%c", tower[i][j]);
        printf("\n");
    }
    return 0;
}