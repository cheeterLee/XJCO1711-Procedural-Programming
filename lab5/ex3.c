#include <stdio.h> 
struct time { int hours; int minutes; int seconds; };

void elapsed_time(struct time start, struct time end, struct time *diff);

int main(void) {
    struct time startTime, endTime, diff;
    printf("Enter the time (hh:mm:ss): ");
    scanf("%i:%i:%i", &startTime.hours, &startTime.minutes, &startTime.seconds);
    printf("Enter the time (hh:mm:ss): ");
    scanf("%i:%i:%i", &endTime.hours, &endTime.minutes, &endTime.seconds);
    elapsed_time(startTime, endTime, &diff);
    printf("Elapsed time: %d:%d:%d - ", startTime.hours, startTime.minutes, startTime.seconds);
    printf("%d:%d:%d = ", endTime.hours, endTime.minutes, endTime.seconds);
    printf("%d:%d:%d", diff.hours, diff.minutes, diff.seconds);
    return 0;
}

void elapsed_time(struct time start, struct time end, struct time *diff) {
    while (start.seconds > end.seconds) {
        end.minutes -= 1;
        end.seconds += 60;
    }
    diff -> seconds = end.seconds - start.seconds;
    while (start.minutes > end.minutes) {
        end.hours -= 1;
        end.minutes += 60;
    }
    while (start.hours > end.hours) {
        end.hours += 24;
    }
    diff -> minutes = end.minutes - start.minutes;
    diff -> hours = end.hours - start.hours;
}