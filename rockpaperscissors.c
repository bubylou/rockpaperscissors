#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char *argv[])
{
    int user, comp;
    time_t t;

    printf("Choose your weapon.\n1 - Rock\n2 - Paper\n3 - Scissors\nYour choice: ");
    scanf("%i", &user);

    comp = rand() % 3;

    if (user == comp) {
        printf("Tie.\n");
    }

    if (user == 1 && comp == 2) {
        printf("You lose Paper covers Rock.\n");
    }

    if (user == 1 && comp == 3) {
        printf("You win Rock smashed Scissors.\n");
    }

    if (user == 2 && comp == 1) {
        printf("You win Paper covers Rock.\n");
    }

    if (user == 2 && comp == 3) {
        printf("You lose Scissors cuts Paper.\n");
    }

    if (user == 3 && comp == 1) {
        printf("You lose Rock smashes Scissors.\n");
    }

    if (user == 3 && comp == 2) {
        printf("You win Scissors cuts Paper.\n");
    }
    
    return 0;
}
