#include <stdio.h> 
struct time { int hour; int minutes; int seconds; };

// Function to update the time by one second 
struct time timeUpdate (struct time now) {
    // write your code here
    now.seconds += 1;
    if (now.seconds == 60) {
        now.seconds = 0;
        now.minutes += 1;
        if (now.minutes == 60) {
            now.minutes = 0;
            now.hour += 1;
        }
    }
    return now;
}
int main (void) {
    struct time timeUpdate (struct time now); 
    struct time currentTime, nextTime;
    printf ("Enter the time (hh:mm:ss): ");
    scanf ("%i:%i:%i", &currentTime.hour, &currentTime.minutes, &currentTime.seconds);
    nextTime = timeUpdate (currentTime);
    printf ("Updated time is %.2i:%.2i:%.2i\n", nextTime.hour, nextTime.minutes, nextTime.seconds );
    return 0; 
}