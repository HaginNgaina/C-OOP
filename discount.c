#include <stdio.h>

int main() {

    float original_price, discount_percentage, discounted_price;
    

    printf("Enter the original price of the product: ");
    scanf("%f", &original_price);
    
    printf("Enter the discount percentage: ");
    scanf("%f", &discount_percentage);
    
    
    discounted_price = original_price - (original_price * discount_percentage / 100);
    
    printf("The discounted price is: %.2f\n", discounted_price);
    
    return 0;
}