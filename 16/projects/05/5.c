#include <stdio.h>

#define ARRAY_LEN(x) (sizeof(x) / sizeof(x[0]))

const struct flight {
        int departure;
        int arrival;
    } times[] = {
        {480, 616}, {583,  712}, { 679,  811},  {767,  900}, 
        {840, 968}, {945, 1075}, {1140, 1280}, {1305, 1438}
};

void print(const struct flight time);

int main(void) {

    int user_time, hour, i, minute;

    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hour, &minute);
    user_time = hour * 60 + minute;

    printf("Closest departure time is ");
    
    for (i = 0; i < ARRAY_LEN(times) - 1; i++) {
        if (user_time <= times[i].departure + 
          (times[i+1].departure - times[i].departure) / 2) {
            print(times[i]);
            return 0;
        }
    }
    i++;
    print(times[i]);
    return 0;
}

void print(const struct flight time) {

    printf("%d:%.2d %c.m., arriving at %d:%.2d %c.m.\n", 
           time.departure/60 > 12 ? time.departure/60 - 12 : time.departure/60,
           time.departure%60, time.departure > 719 ? 'p' : 'a', 
           time.arrival/60 > 12 ? time.arrival/60 - 12 : time.arrival/60,
           time.arrival%60, time.arrival > 719 ? 'p' : 'a');
}
