#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

// Write a simple parser that will parse and run Deadfish.

// Deadfish has 4 commands, each 1 character long:

//     i increments the value (initially 0)
//     d decrements the value
//     s squares the value
//     o outputs the value into the return array

// Invalid characters should be ignored.

// parse("iiisdoso") == {8, 64}

int *parse(const char *program)
{
    int *numbers = malloc(sizeof(int) * strlen(program));
    int value = 0;
    int index = 0;

    for (int j = 0; j < strlen(program); j++)
    {
        switch (program[j])
        {
            case 'i': value++; break;
            case 'd': value--; break;
            case 's': value = value*value; break;
            case 'o': numbers[index] = value; index++; break;
        }
    }
    return numbers;
}

int main(int argc, char const *argv[])
{
    char str[] = "iiisdoso";
    int *result = parse(str);
    int length = strlen(str);
    
    printf("Result: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result);
    return 0;
}
