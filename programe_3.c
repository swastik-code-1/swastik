//which statement is valid or invalid.

#include<stdio.h>
#include<math.h>

int main() {

    //✅ This statement is valid (bitwise XOR operator).
    // Output will be 0.
    printf("%d",8^8);

    // ⚠️ This statement is syntactically valid,
    // but logically wrong because 'x' is uninitialized.
    int x; int y = x;

    // ❌ This statement is invalid because you cannot repeat 'int' twice.
    int x, int y = x;

    // ❌ This statement is invalid because a char can store only one character.
    char stars = '**';
    
    return 0;
}
