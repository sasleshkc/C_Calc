
//calculator

#include<stdio.h>

int main(){
    int a;
    int b;
    printf("Enter a number: \n"); scanf("%d",&a);
    printf("Enter another number: \n"); scanf("%d",&b);

    printf("\n\nEnter 1 for addition:  \n");
    printf("Enter 2 for substraction: \n");
    printf("Enter 3 for division: \n");
    printf("Enter 4 for multiplication: \n");
    int c; 
    scanf("%d",&c);

    

    if (c==1)
    {
    printf("\t//OUTPUT//\t\n");
        
        printf("The value of a+b is: %d\n",a+b);
    }
    else if (c == 2)
    {
    printf("\t//OUTPUT//\t\n");
        
        printf("The value of a-b is: %d\n",a-b);
    }
    else if (c == 3)
    {
    printf("\t//OUTPUT//\t\n");
        
        printf("The value of a/b is: %d\n",a/b);
    }
    else if (c == 4)
    {
    printf("\t//OUTPUT//\t\n");
        
        printf("The value of a*b is: %d\n",a*b);
    }
    else
    {
    printf("\t//OUTPUT//\t\n");

        printf("Invalid operation\n");
    }
    
return 0;
}