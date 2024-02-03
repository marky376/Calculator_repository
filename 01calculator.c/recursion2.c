#include <stdio.h>

// Function to recursively print numbers from nb to 0
int print(int nb)
{
    // Base case: if nb is negative, return 0
    if (nb < 0) 
    {
        return (0);
    }
    
    // Print the current number and recursively call print() with nb-1
    printf("%d", nb + print(nb - 1));
    
    // Decrement nb
    nb--;
    
    // Return the decremented nb
    return (nb);
}

// Main function
int main(void)
{
    // Call the print() function with argument 4
    print(4);
    
    // Return 0 to indicate successful execution
    return (0);
}
