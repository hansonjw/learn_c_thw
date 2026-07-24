#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    // go thorough each string in argv
    // why am I skipping argv[0]?
    // Because argv[0] is the executable filename
    for (i = 1; i < argc; i++) {
        printf("argv %d: %s\n", i, argv[i]);
    }

    printf("argc: %d\n", argc);

    // let's make our own array of strings
    char *states[] = {
        "California", "Oregon", "Washington", "Texas"
    };

    int num_states = 4;

    for (i = 0; i < num_states; i++) {
        printf("state %d: %s\n", i, states[i]);
    }

    return 0;
}