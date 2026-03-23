#include <stdio.h>

int main() {
    int a, b, lcm;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    // LCM formula: LCM(a, b) = (a * b) / GCD(a, b)
    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    int gcd = x;
    
    lcm = (a / gcd) * b;  // Avoids overflow
    
    printf("LCM of %d and %d = %d\n", a, b, lcm);
    return 0;
}
```

**Sample Output:**
```
Enter two numbers: 12 18
LCM of 12 and 18 = 36
