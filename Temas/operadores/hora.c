#include <stdio.h>
#include <time.h>

int main() {
    time_t now;
    struct tm *timeinfo;
    char buffer[100];

    time(&now);
    timeinfo = localtime(&now);

    strftime(buffer, sizeof(buffer), "%H:%M:%S", timeinfo);

    printf("La hora actual es: %s\n", buffer);

    return 0;
}
