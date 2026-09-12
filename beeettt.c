#include <stdio.h>

int main()
{
    int sleepHour, sleepMinute;
    int wakeHour, wakeMinute;
    int sleepTime, wakeTime, sleepDuration;

    printf("Enter sleeping time (hour minute): ");
    scanf("%d %d", &sleepHour, &sleepMinute);

    printf("Enter waking time (hour minute): ");
    scanf("%d %d", &wakeHour, &wakeMinute);

    sleepTime = sleepHour * 60 + sleepMinute;
    wakeTime = wakeHour * 60 + wakeMinute;

    if (wakeTime < sleepTime)
    {
        sleepDuration = (24 * 60 - sleepTime) + wakeTime;
    }
    else
    {
        sleepDuration = wakeTime - sleepTime;
    }

    if (sleepDuration < 6 * 60)
    {
        printf("You slept less than 6 hours.\n");
        printf("You missed your 8:30 AM class.\n");
        printf("Now you have to treat your whole section to lunch!\n");
    }
    else if (wakeTime > 7 * 60 + 45)
    {
        printf("You got enough sleep, but you woke up too late.\n");
        printf("You missed your 8:30 AM class.\n");
        printf("Now you have to treat your whole section to lunch!\n");
    }
    else
    {
        printf("You got enough sleep and woke up on time.\n");
        printf("You can attend your 8:30 AM class.\n");
        printf("No lunch treat required!\n");
    }

    return 0;
}