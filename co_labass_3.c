#include <stdio.h>

int main()
{
   int i;
   printf("Welcome to the Supermart\n");
   printf("Press 1 if you are a registered customer\n");
   printf("Press 2 if you are a new customer\n");
   scanf(" %d",&i);
   
   switch(i)
   {
       case 1: 
       printf("You are a registered customer!\n");
       printf("Press 1 if you want to know about the delivery of your order\n");
       printf("Press 2 if you want to place an order\n");
       printf("Press 3 if you want to cancel the order\n");
       printf("Press 4 if you want to talk to customer care executive\n");
       int j;
       scanf(" %d",&j);
       switch(j)
       {
           case 1: 
           printf("Delivery Information!\n");
           break;

           case 2:
           printf("Place a New Order!\n");
           break;

           case 3:
           printf("Cancel an Order!\n");
           break;

           case 4:
           printf("Talk to Customer Care Executive!\n");
           break;

           default:
           printf("Invalid Input");
           break;
       }  
       break;  

       case 2:
       printf("You are a new customer!\n");
       printf("Press 1 if you want to register with us\n");
       printf("Press 2 if you want to continue as a guest\n");
       printf("Press 3 if you want to talk to the customer care executive\n");
       int k;
       scanf(" %d",&k);

       switch(k)
       {
           case 1: 
           printf("Register!\n");
           break;

           case 2:
           printf("Continue as Guest!\n");
           break;

           case 3:
           printf("Talk to Customer Care Executive!\n");
           break;

           default:
        
           printf("Invalid Input");
           break;
       }
       break;
   }
   
    return 0;
}
