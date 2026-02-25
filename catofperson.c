#include <stdio.h>

int main()
{
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if(age >= 0 && age < 12)
        printf("Child");
    else if(age >= 12 && age < 18)
        printf("Teenager");
    else if(age >= 18 && age < 60)
        printf("Adult");
    else if(age >= 60)
        printf("Senior Citizen");
    else
        printf("Invalid age");

    return 0;
}
