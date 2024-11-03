#include <cs50.h>
#include <stdio.h>
#include <math.h>
int first_step(int x);
int second_step(int y,int z);
int third_step(int x, int y, int z);

int main(void)
{
    int x = get_int("X: ");
    int y = get_int("Y: ");
    int z = get_int("Z: ");
    //Just some memory storage incase I have to expand the program to be more complex
    int begin_first_step = first_step(x);
    int begin_second_step = second_step(y,z);
    int begin_third_step = third_step(x, y, z);
}

int first_step(int x) {

    int first_num = 11 + (2 * x);

    return printf("First Number: %i\n", first_num);
}

int second_step(int y,int z) {

    int second_num = (2 * z + y) - 5;

    return printf("Second Number: %i\n", second_num);
    }


int third_step(int x, int y, int z) {
    int third_num = (y + z) - x;
    // I believe the third number cannot be negative, hence the if function to return "invalid" if a number below 0 is found
        if (third_num < 0) {
            return printf("Invalid\n");
        } else {
    return printf("Third Number: %i\n", third_num);
    }
}

// Feel free to tinker with this as you wish, I made this quickly and probably missed some things, but it should work for now.
