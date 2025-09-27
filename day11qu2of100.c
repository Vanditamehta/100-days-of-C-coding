//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include <stdio.h>
int main() 
{
    float costprice, sellingprice, loss, profit, percentage; ;
    printf("enter the costprice");
    scanf("%f", &costprice);
    printf("enter the sellprice");
    scanf("%f", &sellingprice);
    
    if (sellingprice > costprice) 
        {
        profit = sellingprice - costprice;
        percentage = (profit / costprice) * 100;
        printf("Profit = %.2f\n", profit);
        printf("Profit Percentage = %.2f%%\n", percentage);
    }
    else if (costprice > sellingprice) {
        loss = costprice - sellingprice;
        percentage = (loss / costprice) * 100;
        printf("Loss = %.2f\n", loss);
        printf("Loss Percentage = %.2f%%\n", percentage);
    }
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}