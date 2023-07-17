#include <stdio.h>

// A child is playing with a ball on the nth floor of a tall building. The height of this floor above ground level, h, is known.

// He drops the ball out of the window. The ball bounces (for example), to two-thirds of its height (a bounce of 0.66).

// His mother looks out of a window 1.5 meters from the ground.

// How many times will the mother see the ball pass in front of her window (including when it's falling and bouncing?
// Three conditions must be met for a valid experiment:

//     Float parameter "h" in meters must be greater than 0
//     Float parameter "bounce" must be greater than 0 and less than 1
//     Float parameter "window" must be less than h.

// If all three conditions above are fulfilled, return a positive integer, otherwise return -1.
// Note:

// The ball can only be seen if the height of the rebounding ball is strictly greater than the window parameter.
// Examples:

// - h = 3, bounce = 0.66, window = 1.5, result is 3

// - h = 3, bounce = 1, window = 1.5, result is -1 

// (Condition 2) not fulfilled).

int bouncingBall(double h, double bounce, double window) {
    int count = 0;
    if (bounce > 0 && bounce < 1 && window < h && h > 0)
    {
        while (h > window)
        {
            count++;
            h *= bounce;
        }
        count = count * 2 - 1;
        return count;
    }
    return -1;
}


int main(int argc, char const *argv[])
{
    int res = bouncingBall(2, 0.5, 1.0);
    printf("Res - %d\n", res);
    return 0;
}