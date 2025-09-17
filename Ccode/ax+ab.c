#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, root1, root2;

   
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

 
    if (a == 0) {
        printf("Not a quadratic equation (a = 0).\n");
        return 0;
    }

    
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
       
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two real solutions: x1 = %.2f, x2 = %.2f\n", root1, root2);
    } else if (discriminant == 0) {
     
        root1 = -b / (2 * a);
        printf("One real solution: x = %.2f\n", root1);
    } else {
    
        printf("No real solution.\n");
    }

    return 0;
}
