#include <stdio.h>

int main(void) {
    float weightInPounds;
    float heightInInches;
    float bmi;
    printf("Enter your weight in pounds: ");
    scanf("%f", &weightInPounds);

    printf("Enter your height in inches: ");
    scanf("%f", &heightInInches);

    bmi = (weightInPounds ) / (heightInInches * heightInInches);

    printf("\nYour Body Mass Index (BMI) is: %.1f\n", bmi);
    printf("\nBMI VALUES\n");
    printf("Underweight: Less than 18.5\n");
    printf("Normal:      between 18.5 and 24.9\n");
    printf("Overweight:  between 25 and 29.9\n");
    printf("Obese:       30 or greater\n");
    printf("\nYour weight status based on integer BMI is: ");
    if (bmi < 19) {
        printf("Underweight\n");
    }
    else if (bmi >= 19 && bmi <= 24) {
        printf("Normal\n");
    }
    else if (bmi >= 25 && bmi <= 29) {
        printf("Overweight\n");
    }
    else { 
        printf("Obese\n");
    }

    system("pause");
    return 0;
}