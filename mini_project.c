#include <stdio.h>
#include <string.h>

int main()
{
    // Variables and Array Declaration
    int quant[10], i, j, x, opt;
    float rate[10], price[10], total = 0;
    char n[10][25];
    printf("\n========================================\n");
    printf("Shopping Mart Invoice Generator");
    printf("\n========================================\n");
    printf("\n1.Generate Invoice\n");
    printf("\n2.Exit\n");
    printf("\nSelect Operation : ");
    scanf("%d", &opt);
    if (opt == 1)
    {
        for (i = 1; i <= 10; i++)
        {
            gets(n[i]);
            printf("\nEnter product name : ");
            gets(n[i]);
            printf("Enter quantity : ");
            scanf("%d", &quant[i]);
            printf("Enter Rate : ");
            scanf("%f", &rate[i]);
            price[i] = rate[i] * quant[i];
            j = i;
            total = total + price[i];
            printf("\n Enter any key to Add more \n Enter 0 to make bill : ");
            scanf("%d", &x);
            if (x == 0)
            {
                break;
            }
        }
        printf("\n======================================================");
        printf("\n\t\t Invoice of the Product");
        printf("\n======================================================\n");
        printf("\n\n--------------------------------------------------------\n");
        printf("Items\t\t");
        printf("Qty\t\t");
        printf("Rate\t\t");
        printf("Price\t\t");
        printf("\n--------------------------------------------------------\n");
        printf("\n\n");
        for (i = 1; i <= j; i++)
        {
            printf("%s\t\t", n[i]);
            printf("%d\t\t", quant[i]);
            printf("%.2f\t\t", rate[i]);
            printf("%.2f\t\t", price[i]);
            printf("\n");
        }
        printf("\n\n\t\tTotal : %0.2f Tk only\n\n\n\n", total);
    }
    else
    {
        printf("\nOK, Good Bye :) \n\n\n\n");
    }
}