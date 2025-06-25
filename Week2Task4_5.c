#include <stdio.h>

int main() {
    int age;
    printf("Task 1\n");
    printf("How old are you? ");
    scanf("%d", &age);

    if (age <= 8) {
        printf("wow, people start using computers early\n");
    }
     
    else if (age == 46) { 
        printf("Task 2\n");  
        printf("Hey! We are the same age!\n");
    }
    else if (age > 8 && age < 46) {
        printf("You are at the age of using computers\n");
    }
    else if (age > 46) {
        printf("You are older than the average computer user\n");
    }
   
    int day, month;
    printf("Task 3\n");
    printf("Enter day: ");
    scanf("%d", &day);
    printf("Enter month: ");
    scanf("%d", &month);

    if (day == 1 && month == 4) {
        printf("It is April fools day\n");
    }
    else
    {
        printf("Just another date\n");
    }
    
    printf("Task 4\n");
    if (age < 18) {
        printf("You are too young to buy alcohol.\n");
    } else {
        printf("You are old enough to buy alcohol.\n");
    }

    int speed = 75;
    int speedLimit = 60;
    printf("Task 5\n");
    if (speed > speedLimit) {
        printf("Your speed is %d, the speed limit is %d. You’re Speeding! Ticket for you!\n", speed, speedLimit);
    } else {
        printf("Please continue to drive safely\n");
    }
    
  
    return 0;
}