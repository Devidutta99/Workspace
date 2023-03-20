#include<stdio.h>
#include<math.h>
int main() {
    float a, b, c, d, r1, r2, real, imaginary;
    printf("Enter values a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;
    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("r1 = %f and r2 = %f", r1, r2);
    }
    else if (d == 0) {
        r1= r2 = -b / (2 * a);
        printf("r1 = r2 = %f;", r1);
    }
    else {
        real = -b / (2 * a);
        imaginary = sqrt(-d) / (2 * a);
        printf("r1 = %f+%fi and r2 = %f-%fi", real, imaginary, real, imaginary);
    }

    return 0;
}