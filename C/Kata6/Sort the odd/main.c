#include <stdlib.h>
#include <stdio.h>

// Task

// You will be given an array of numbers. You have to sort the odd numbers in ascending order while leaving the even numbers at their original positions.
// Examples

// [7, 1]  =>  [1, 7]
// [5, 8, 6, 3, 4]  =>  [3, 8, 6, 5, 4]
// [9, 8, 7, 6, 5, 4, 3, 2, 1, 0]  =>  [1, 8, 3, 6, 5, 4, 7, 2, 9, 0]

void sort_array(size_t n, int arr[n]) {
	// sort the contents of arr
}

int main(int argc, char const *argv[])
{
    int array[] = {7, 1};
    int n = sizeof(array)/sizeof(array[0]);
    sort_array(n, array);

    for (short i = 0; i < n; i++)
        printf("%d\n", array[i]);
        
    return 0;
}
