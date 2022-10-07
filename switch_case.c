#include<stdio.h>
main()
{
    int num,i=1,product,j=0,a,b,age,choice;
    printf("\nENTER YOUR CHOICE:\n press 1 to execute WHILE LOOP\n press 2 to execute DO WHILE LOOP\n press 3 to execute FOR LOOP\n press 4 to execute IF ELSE LOOP\n press 5 to EXIT");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("\n\t\tWELCOME");
        printf("\n\t This program demonstrates WHILE LOOP ");
        printf("\n\tEnter a no to compute its table");
        scanf("%d",&num);
        while(i<=10)
        {
            product=num*i;
            printf("\n%d*%d=%d",num,i,product);
             ++i;
        }
        break;
        case 2:printf("\n\t\tWELCOME");
            printf("\n\t This program demonstrates DO WHILE LOOP ");
            int j=0;
            do
            {
                printf("\n\tHello\nyou are inside do while loop");
            }while(j==1);
            break;
        case 3:printf("\n\t\tWELCOME");
            printf("\n\t This program demonstrates FOR LOOP ");
            printf("\nProgram to print first ten natural no");
            for(a=1,b=10;a<=10,b>=1;a++,b--)
            {
                printf("\n\t\t%d\t\t%d",a,b);
            }
            break;
        case 4: printf("\n\t\tWELCOME");
            printf("\n\t This program demonstrates IF ELSE LOOP");
            printf("\n\tProgram for electoral system");
            printf("\n \tEnter your age");
            scanf("%d",&age);
            if(age>=18)
            {
                printf("\nYou are eligible to vote");
            }
            else
            {
                printf("\nYou are not eligible to vote");
            }
            break;
        case 5:printf("\n\tTHANK YOU");
               break;
        default:printf("\n\tIncorrect input");
        printf("\n\tplease read the instructions carefully");
    }
}
