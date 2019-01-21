//
// Created by Chris Gaudet
//
#include <stdio.h>

int main() {
    //Initial set: height of pyramid , radius of a ball and number of balls
    int height;
    double radius;
    int balls = 0;

    //User input for desired height, and radius. For loop will count balls
    printf("Enter the height of your pyramid(number of layers): ");
    scanf("%d", &height);
    printf("Enter the radius of a ball: ");
    scanf("%lf", &radius);
    for (int counter=1; counter <= height; counter++) {
        balls += counter * counter;
    }
    printf("Number of balls: ");
    printf("%d" , balls);
    //Calculates the volume
    double volume = 4.0/3.0 * 3.14*(radius*radius*radius);
    //Total mass of pyramid
    double total = (balls * volume)* 0.284;
    //Mass of a ball
    double single_ball = total / balls;
    printf("\nMass of a ball: ");
    printf("%lf", single_ball);
    printf("\nTotal mass of pyramid: ");
    printf("%lf", total);

}




