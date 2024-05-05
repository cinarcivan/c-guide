#include <stdio.h>

int main() {
    int a, b;
    a = 5;
    b = 12;
   
    printf("a = %d" , a);
    printf("\n");
    printf("b = %d" , b);

    printf("\n");

    // Logical AND operator. If both the operands are non-zero, then the condition becomes true.

    printf("a < 3 && b > 10 = %d", (a < 3 && b > 10)); // Output: 0, because a < 3 is false and b > 10 is true so and operator will return false.
    printf("\n");
    printf("a > 2 && b < 15 = %d", (a > 2 && b < 15)); // Output: 1, because a > 2 is true and b < 15 is true so and operator will return true.
    printf("\n");
    
    // Logical OR operator. If any of the two operands is non-zero, then the condition becomes true.

    printf("a < 3 || b > 10 = %d", (a < 3 || b > 10)); // Output: 1, because a < 3 is false and b > 10 is true so or operator will return true.
    printf("\n");		
    printf("a < 6 || b < 15 = %d", (a < 2 || b < 15)); // Output: 1, because a < 6 is true and b < 15 is true so or operator will return true.
    printf("\n");
    printf("a > 6 || b > 15 = %d", (a > 6 || b > 15)); // Output: 0, because a > 6 is false and b > 15 is false so or operator will return false.
    
    printf("\n");

    // Logical NOT operator. It is used to reverse the logical state of its operand.

    printf("!(a < 6 && b < 15) = %d", !(a < 6 && b < 15)); // Output: 0, because a < 6 is true and b < 15 is true so and operator will return true and then not operator will reverse it to false.
    printf("\n");
    printf("!(a > 6 && b > 15) = %d", !(a > 6 && b > 15)); // Output: 1, because a > 6 is false and b > 15 is false so and operator will return false and then not operator will reverse it to true.

    return 0;
}
