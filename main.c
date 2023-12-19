#include <stdio.h>
#include <unistd.h>

int main() {
    char answer[10];

    printf("Will you be my lover?\n");
    printf("Yes or No\n");

    scanf("%s", answer);

    if (strcmp(answer, "Yes") == 0) {
        printf("  ___      _      ___   __     __  _____     __   __   ___    _   _ \n");
        printf(" |_ _|    | |    / _ \\  \\ \\   / / | ____|    \\ \\ / /  / _ \\  | | | |\n");
        printf("  | |     | |   | | | |  \\ \\ / /  |  _|       \\ V /  | | | | | | | |\n");
        printf("  | |     | |___| |_| |   \\ V /   | |___       | |   | |_| | | |_| |\n");
        printf(" |___|    |______\\___/     \\_/    |_____|      |_|    \\___/   \\___/ \n");
    } else if (strcmp(answer, "No") == 0) {
        printf("Oh no, why did you refuse? 😢\n");
        sleep(2);
        printf("OK, maybe next time! 😊\n");
    } else {
        printf("Invalid input. Please enter 'Yes' or 'No'.\n");
    }

    return 0;
}