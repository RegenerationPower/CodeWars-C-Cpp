#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Welcome.

// In this kata you are required to, given a string, replace every letter with its position in the alphabet.

// If anything in the text isn't a letter, ignore it and don't return it.

// "a" = 1, "b" = 2, etc.
// Example

// alphabet_position("The sunset sets at twelve o' clock.")

// Should return "20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5 15 3 12 15 3 11" ( as a string )
// returned string has to be dynamically allocated and will be freed by the caller


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *alphabet_position(const char *text) {
    int *numbers = malloc(sizeof(int) * strlen(text));
    int count = 0;
    
    for (int i = 0; text[i] != '\0'; i++) 
    {
        char c = tolower(text[i]);
        if (isalpha(c))
            numbers[count++] = c - 'a' + 1;
    }
    
    char *result = malloc(count * 3 + 1);
    result[0] = '\0';
    
    for (int i = 0; i < count; i++) 
    {
        char numStr[3];
        sprintf(numStr, "%d", numbers[i]);
        strcat(result, numStr);
        
        if (i < count - 1)
            strcat(result, " ");
    }
    return result;
}

int main() {
    const char *text = "The sunset sets at twelve o' clock.";
    char *result = alphabet_position(text);
    printf("%s\n", result);
    free(result);
    return 0;
}



