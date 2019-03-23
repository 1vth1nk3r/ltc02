#include "stdio.h"

float count_bmi(float height_m, unsigned int weight) {
    return weight / (height_m*height_m); ;
}

int main() {
    unsigned int height, weight;
    float height_m;
    float bmi;

    printf("Enter your height in cm: ");
    scanf("%u", &height);
    height_m = (float)height/100;
    printf("Enter your weight in kg: ");
    scanf("%u", &weight);

    bmi = count_bmi(height_m, weight);

    if (bmi < 18.5){
        printf("Your BMI is %.2f which is considered underweight", bmi);
    } else if (bmi > 30) {
        printf("Your BMI is %.2f which is considered obese", bmi);
    } else if (bmi > 25 ) {
        printf("Your BMI is %.2f which is considered overweight", bmi);
    } else {
        printf("Your BMI is %.2f which is considered normal", bmi);
    }
}