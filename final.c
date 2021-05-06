#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void) {
    int fselect = get_int("Enter which number for what type of conversion you want to do (1, 2, or 3), (1-Distance, 2-Temp, 3-Liquids): ");

    if (fselect <= 0)
    {
        printf("please retry and enter a valid number");
    }
    if (fselect > 3)
    {
        printf("please retry and enter a valid number");
    }

    if (fselect == 1)
    {
        int distselect = get_int("Enter which number for what type of distance conversion you want to do (1, 2, or 3), (1-miles and kilometers, 2-feet and meters, 3-inches and centimeters): ");

    if (distselect <= 0)
    {
        printf("please retry and enter a valid number");
    }
    if (distselect > 3)
    {
        printf("please retry and enter a valid number");
    }

    if (distselect == 1)
    {
        int distoneselect = get_int("Enter which number for what type of distance conversion you want to do (1 or 2), (1-miles to kilometers, 2-kilometers to miles): ");

    if (distoneselect <= 0)
    {
        printf("please retry and enter a valid number");
    }
    if (distoneselect > 2)
    {
        printf("please retry and enter a valid number");
    }

    if (distoneselect == 1)
    {
        float orig = get_float("Enter number of miles: ");
        float after = orig*1.609344;
        printf("%f", after);
    }

    if (distoneselect == 2)
    {
        float orig = get_float("Enter number of km: ");
        float after = orig*0.6214;
        printf("%f", after);
    }
    }

    if (distselect == 2)
    {
        int disttwoselect = get_int("Enter which number for what type of distance conversion you want to do (1 or 2), (1-feet to meters, 2-meters to feet): ");

    if (disttwoselect <= 0)
    {
        printf("please retry and enter a valid number");
    }
    if (disttwoselect > 2)
    {
        printf("please retry and enter a valid number");
    }

    if (disttwoselect == 1)
    {
        float orig = get_float("Enter number of feet: ");
        float after = orig/3.281;
        printf("%f", after);
    }

    if (disttwoselect == 2)
    {
        float orig = get_float("Enter number of meters: ");
        float after = orig/0.3048;
        printf("%f", after);
    }
    }

    if (distselect == 3)
    {
        int distthreeselect = get_int("Enter which number for what type of distance conversion you want to do (1 or 2), (1-inches to centimeters, 2-centimeters to inches): ");

    if (distthreeselect <= 0)
    {
        printf("please retry and enter a valid number");
    }
    if (distthreeselect > 2)
    {
        printf("please retry and enter a valid number");
    }

    if (distthreeselect == 1)
    {
        float orig = get_float("Enter number of inches: ");
        float after = orig*2.54;
        printf("%f", after);
    }

    if (distthreeselect == 2)
    {
        float orig = get_float("Enter number of centimeters: ");
        float after = orig/2.54;
        printf("%f", after);
    }
    }
    }

    if (fselect == 2)
    {
        int tempselect = get_int("Enter which number for what type of temp conversion you want to do (1 or 2), (1-F to C, 2-C to F): ");

    if (tempselect <= 0)
    {
        printf("please retry and enter a valid number");
    }
    if (tempselect > 2)
    {
        printf("please retry and enter a valid number");
    }

    if (tempselect == 1)
    {
        float orig = get_float("Enter degrees in F: ");
        float after = (orig-32)*0.556;
        printf("%f", after);
    }

    if (tempselect == 2)
    {
        float orig = get_float("Enter degrees in C: ");
        float after = (orig*1.8)+32;
        printf("%f", after);
    }
    }

    if (fselect == 3)
    {
        int liqselect = get_int("Enter which number for what type of temp conversion you want to do (1, 2, or 3), (1-gallons and liters, 2-teaspoon and tablespoon, 3-oz and liters): ");

    if (liqselect <= 0)
    {
        printf("please retry and enter a valid number");
    }
    if (liqselect > 2)
    {
        printf("please retry and enter a valid number");
    }
    if (liqselect == 1)
    {

        int liqoneselect = get_int("Enter which number for what type of liquid conversion you want to do (1 or 2), (1-gallons to liters, 2-liters to gallons): ");

    if (liqoneselect <= 0)
    {
        printf("please retry and enter a valid number");
    }
    if (liqoneselect > 2)
    {
        printf("please retry and enter a valid number");
    }

    if (liqoneselect == 1)
    {
        float orig = get_float("Enter number of gallons: ");
        float after = orig*3.785411784;
        printf("%f", after);
    }

    if (liqoneselect == 2)
    {
        float orig = get_float("Enter number of liters: ");
        float after = orig*0.26417205235815;
        printf("%f", after);
    }
    }
    if (liqselect == 2)
    {

        int liqtwoselect = get_int("Enter which number for what type of liquid conversion you want to do (1 or 2), (1-teaspoon to tablespoon, 2-tablespoon to teaspoon): ");

    if (liqtwoselect <= 0)
    {
        printf("please retry and enter a valid number");
    }
    if (liqtwoselect > 2)
    {
        printf("please retry and enter a valid number");
    }

    if (liqtwoselect == 1)
    {
        float orig = get_float("Enter number of teaspoons: ");
        float after = orig/3;
        printf("%f", after);
    }

    if (liqtwoselect == 2)
    {
        float orig = get_float("Enter number of tablespoons: ");
        float after = orig*3;
        printf("%f", after);
    }
    }

    if (liqselect == 3)
    {

        int liqthreeselect = get_int("Enter which number for what type of liquid conversion you want to do (1 or 2), (1-oz to liters, 2-liters to oz): ");

    if (liqthreeselect <= 0)
    {
        printf("please retry and enter a valid number");
    }
    if (liqthreeselect > 2)
    {
        printf("please retry and enter a valid number");
    }

    if (liqthreeselect == 1)
    {
        float orig = get_float("Enter number of oz: ");
        float after = orig/33.814;
        printf("%f", after);
    }

    if (liqthreeselect == 2)
    {
        float orig = get_float("Enter number of liters: ");
        float after = orig*33.814;
        printf("%f", after);
    }

    }
    }

}