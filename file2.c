#include <stdio.h>
int add(int a, int b) {
    int sum = a + b;
    return sum;
}  

int main() {
    int result = add(5, 3);
    printf("Sum: %d", result);
    return 0;
}
