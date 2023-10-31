//
//  main.c
//  sumAvarage
//
//  This is a program in C to read 10 numbers from the keyboard and find their sum and average.
//  Created by Akif Duran
//

#include <stdio.h>

int main (){
    int i, n;
    int sum = 0;
    float avg;
    
    
    printf("Please enter 10 numbers that you want to find their avarage: \n");
    
    for(i=1;i<=10;i++)
    {
        printf("Number- %d \n", i);
        scanf("%d", &n);
        sum+=n;
    }
    avg = sum /10;
    printf("Avarage of these 10 number is: %.2f", avg);
}
