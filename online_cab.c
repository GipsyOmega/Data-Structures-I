#include<stdio.h>
#include<stdlib.h>
int main()
{   
    int choice;
    printf("**********      Welcome to UBER Online Cab Services      **********\n");
    printf("               -- A Cab for everyone, at anytime --                 \n");
    printf("\n");
    printf("\n");
    printf("Registered Customers :  Press 0 to proceed\n");
    printf("New Customers        :  Press 1 to register\n");
    printf("To Exit              :  Press 2\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 0:
        {
            int cab;
            printf("              **********      SERVICES      **********\n");
            printf("Press 1 to Book a Cab: \n");
            printf("Press 2 to Schedule a Cab: \n");
            printf("Press 3 to Cancel a Cab: \n");
            scanf("%d",&cab);
            printf("\n");
            switch(cab)
            {
                case 1:
                {
                    char pay;
                    char cur[50],des[50];
                    printf("Booking a Cab! \n");
                    printf("Enter your PICK-UP location: \n");
                    scanf(" %[^\n]%*c",cur);
                    printf("Enter your DESTINATION \n");
                    scanf(" %[^\n]%*c",des);
                    printf("\n");
                    printf("Pick-Up: %s \n",cur);
                    printf("Destination: %s \n",des);
                    printf("Pick a Payment Method: \n");
                    printf("\n");
                    printf("A. Cash \n");
                    printf("B. Debit/Credit Card \n");
                    printf("C. Paytm/PayPal/Google Pay \n");
                    printf("\n");
                    scanf(" %c",&pay);
                    printf("\n");
                    switch(pay)
                    {
                        case 'A':
                        printf("Thank you for picking UBER Cab Services!\n");
                        printf("Your Cab will be with you shortly \n");
                        printf("Fee will be paid by CASH\n");
                        printf("For any inconvenience, you may contact us at 011-37458392\n");
                        printf("Or our website 'www.uberconlinecabservices.com'\n");
                        break;
                        case 'B':
                        printf("Thank you for picking UBER Cab Services!\n");
                        printf("Your Cab will be with you shortly \n");
                        printf("Fee will be paid by CARD\n");
                        printf("For any inconvenience, you may contact us at 011-37458392\n");
                        printf("Or our website 'www.uberconlinecabservices.com'\n");
                        break;
                        case 'C':
                        printf("Thank you for picking UBER Cab Services!\n");
                        printf("Your Cab will be with you shortly \n");
                        printf("Fee will be paid by UPI\n");
                        printf("For any inconvenience, you may contact us at 011-37458392\n");
                        printf("Or our website 'www.uberconlinecabservices.com'\n");
                        break;
                    }
                    break;

                }
                case 2:
                {
                    char pay;
                    char cur[50],des[50],time[50];
                    printf("Scheduling a Cab! \n");
                    printf("Enter your PICK-UP location: \n");
                    scanf(" %[^\n]%*c",cur);
                    printf("Enter your DESTINATION \n");
                    scanf(" %[^\n]%*c",des);
                    printf("Enter at what TIME the cab should arrive (in 24 hour format like 23:59:59 \n");
                    scanf(" %[^\n]%*c",time);
                    printf("Pick-Up: %s \n",cur);
                    printf("Destination: %s \n",des);
                    printf("Time : %s \n",time);
                    printf("\n");
                    printf("A. Cash \n");
                    printf("B. Debit/Credit Card \n");
                    printf("C. Paytm/PayPal/Google Pay \n");
                    printf("\n");
                    scanf("%c",&pay);
                    printf("\n");
                    switch(pay)
                    {
                        case 'A':
                        printf("Thank you for picking UBER Cab Services!\n");
                        printf("Your Cab will be with you at %s! \n",time);
                        printf("Fee will be paid by CASH\n");
                        printf("For any inconvenience, you may contact us at 011-37458392\n");
                        printf("Or our website 'www.uberconlinecabservices.com'\n");
                        break;
                        case 'B':
                        printf("Thank you for picking UBER Cab Services!\n");
                        printf("Your Cab will be with you at %s! \n",time);
                        printf("Fee will be paid by CARD\n");
                        printf("For any inconvenience, you may contact us at 011-37458392\n");
                        printf("Or our website 'www.uberconlinecabservices.com'\n");
                        break;
                        case 'C':
                        printf("Thank you for picking UBER Cab Services!\n");
                        printf("Your Cab will be with you at %s! \n",time);
                        printf("Fee will be paid by UPI\n");
                        printf("For any inconvenience, you may contact us at 011-37458392\n");
                        printf("Or our website 'www.uberconlinecabservices.com'\n");
                        break;
                    }
                    break;
                }
                case 3:
                {
                    printf("Cancelling your Cab!\n");
                    printf("...................\n");
                    printf("...................\n");
                    printf("Cab Cancelled!\n");
                    printf("Thank you for picking UBER Cab Services!\n");
                    break;
                }
            }
            break;

        }

        case 1:
        {
            char name[50];
            int age;
            char g;
            
            printf("Welcome New Customer! \n");
            printf("Enter your name: \n");
            scanf(" %[^\n]%*c",name);
            printf("Enter your age: \n");
            scanf("%d",&age);
            printf("Enter you gender: (M/F/O for other)\n");
            scanf(" %c",&g);
            printf("\n");
            printf("\n");
            printf("Name: %s \n",name);
            printf("Age: %d \n",age);
            printf("Gender: %c \n",g);
            printf("\n");
            printf("SUCCESFULLY REGISTERED!\n");
            printf("Reopen the App to use Online Cab Services as a Registered Member! \n");
            exit(0);
            break;

        }
        case 2:
        {
            printf("Exiting the App! \n");
            printf("................\n");
            printf("................\n");
            exit(0);
            break;
        }
    }
    return 0;

}