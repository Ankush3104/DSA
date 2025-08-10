#include <stdio.h>

int main() {
    float p, c, m, total;

    printf("Enter the Marks of Physics: ");
    scanf("%f", &p);

    printf("Enter the Marks of Chemistry: ");
    scanf("%f", &c);

    printf("Enter the Marks of Maths: ");
    scanf("%f", &m);

    total = p + c + m;

    // Assuming each subject is out of 100 marks
    if (p < 33 || c < 33 || m < 33) {
        printf("You failed: below 33 in at least one subject.\n");
    } 
    else if ((total / 300) * 100 < 40) {
        printf("You failed: overall percentage below 40%%.\n");
    } 
    else {
        printf("Congratulations! You passed.\n");
    }

    return 0;
}
