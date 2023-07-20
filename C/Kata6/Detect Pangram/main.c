#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

// A pangram is a sentence that contains every single letter of the alphabet at least once. For example, the sentence "The quick brown fox jumps over the lazy dog" is a pangram, because it uses the letters A-Z at least once (case is irrelevant).

// Given a string, detect whether or not it is a pangram. Return True if it is, False if not. Ignore numbers and punctuation.

bool is_pangram(const char *str_in) {
    bool letters[26] = { false };

    for (int i = 0; str_in[i] != '\0'; i++) 
    {
        char str_lower = tolower(str_in[i]);
        if (isalpha(str_lower)) 
        {
            int index = str_lower - 'a';
            letters[index] = true;
        }
    }

    for (int i = 0; i < 26; i++) 
    {
        if (!letters[i])
            return false;
    }

    return true;
}

int main(int argc, char const *argv[])
{
    char str[] = {"The quick, brown fox jumped over the lazy dog!"};
    bool res = is_pangram(str);
    printf("Res %d\n", res);
    return 0;
}