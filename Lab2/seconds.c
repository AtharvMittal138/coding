#include <stdio.h>
int main(){
    int sec;
    printf("Enter time in seconds : ");
    scanf("%d", &sec);
    int hours=sec/3600;
    int minutes=(sec%3600)/60;
    int seconds = (sec%3600)%60;
    printf("The time is %d hours %d minutes %d seconds ", hours,minutes,seconds);
    return 0;
}