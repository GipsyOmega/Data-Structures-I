#include<stdio.h>
int main()
{
    int EmpId;
    char group;
    double salary;
    float perc;
    printf("Enter your EmpId: ");
    scanf(" %d",&EmpId);
    printf("Enter your group: ");
    scanf(" %c",&group);
    printf("Enter your salary: ");
    scanf(" %lf",&salary);
    printf("Enter you work percentage: ");
    scanf(" %f",&perc);
    float overt;
    
    if(perc<20)
    {
        if(group=="A")
        {
            overt=1000*perc;
        }
        else
        overt=1100*perc;
    }
    else if((perc>20&&perc<40)||group=="A")
    {
        overt=1500*perc;
    }
    else if((perc>20&&perc<40)&&group=="B")
    {
        overt=1600*perc;
    }
    else if(perc>40&&perc<60)
    {
        overt=2000*perc;
    }
    else if(perc<60&&perc>80)
    {
        overt=2500*perc;
    }
    else
    overt=3000*perc;
    
    printf("Employee %d who is from group %c and earns %0.2lf and has completed %0.2f of his work, will get %0.2f as overtime allowance ",EmpId,group,salary,perc,overt);
   

    return 0;
}
