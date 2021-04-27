#include<stdio.h>
float main(int argc, char const *argv[])
{
    float days,years,weeks;
    printf("enter number of days\n");
    scanf("%f",&days);
    years=days/365;
    printf("number of years in given input days is %f\n",years);
    weeks=days/7;
    printf("number of weeks in give input of days is %f\n",weeks);
    return 0;
}
