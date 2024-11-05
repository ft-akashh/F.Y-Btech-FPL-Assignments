#include<stdio.h>
int main()
{
    int choice;
    printf("Coffee Shor Order System \n");
    printf("1. Expresso\n");
    printf("2. Latte\n");
    printf("3. Cappuchino\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch (choice)
    {
        case 1:
        printf("Enjoy your Expresso! \n");
        break;
        case 2:
        printf("Enjoy your Latte! \n");
        break;
        case 3:
        printf("Enjoy your Cappuchino! \n");
        break;
        default:
        printf("Invalid choice. \n");



    }
    return 0;

}
