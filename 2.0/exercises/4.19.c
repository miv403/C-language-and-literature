#include <stdio.h>

int main(void) {

    double product1 = 0;
    double product2 = 0;
    double product3 = 0;
    double product4 = 0;
    double product5 = 0;
    
    double price = 0;
    unsigned int productNumber;
    
    printf("%s", "type in product number (0 to exit): ");
    scanf("%u", &productNumber);
    while (productNumber) {

        printf("%s%u%s", "type in retail price for product-", productNumber, ": ");
        scanf("%lf", &price);
        switch (productNumber) {
        case 1:
            product1 += price;
            break;
        case 2:
            product2 += price;
            break;
        case 3:
            product3 += price;
            break;
        case 4:
            product4 += price;
            break;
        case 5:
            product5 += price;
            break;
        default:
            puts("default ???");
            break;
        }

        printf("%s", "type in product number (0 to exit): ");
        scanf("%u", &productNumber);
    }
    puts("");
    printf("%-20s%-15s", "Product Number", "Retail Price");
    puts("");
    printf("%-20s", "1");
    printf("%s%.2lf", "$", product1);
    puts("");
    printf("%-20s", "2");
    printf("%s%.2lf", "$", product2);
    puts("");
    printf("%-20s", "3");
    printf("%s%.2lf", "$", product3);
    puts("");
    printf("%-20s", "4");
    printf("%s%.2lf", "$", product4);
    puts("");
    printf("%-20s", "5");
    printf("%s%.2lf", "$", product5);
    puts("");
    
}