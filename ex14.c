#include <stdio.h>
#include <ctype.h> // provides access to to isalpha and isblank

// forward declarations
int can_print_it(char ch);
void print_letters(char arg[]);

void print_arguments(int argc, char*argv[])
{
    int i = 0;

    for (i = 0; i < argc; i++) {
        print_letters(argv[i]);
    }
}

void print_letters(char arg[])
{
    int i = 0;

    for (i = 0; arg[i] != '\0'; i++){
        char ch = arg[i];

        if (can_print_it(ch)){
            // char being passed to printf twice
            // %c means print as character
            // %d means print as digit --> the numeric ASCII value
            printf("'%c' == %d", ch, ch);
        }
    }
    
    printf("\n");
}

int can_print_it(char ch)
// this function checks if char is a, b, c, ... or ' '
// returns false if digit
// islpha and isblank are standard C library functions
// from <ctype.h>
{
    return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}