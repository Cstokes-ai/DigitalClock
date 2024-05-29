#include <stdio.h>
#include <string.h>
#include <time.h>
#include <unistd.h>


int main() {
    int minutes = 0;
    int hours = 0;
    int seconds = 0;

    while(1) {
        time_t now = time(NULL);
        struct tm *local = localtime(&now);

        hours = local->tm_hour;
        minutes = local->tm_min;
        seconds = local->tm_sec;
        system("cls");
        //system("clear"); for unix base systems;

        printf("Digital Clock\n");
        printf("%02d:%02d:%02d\n", hours, minutes, seconds);

        sleep(1);
    }

    return 0;
}
