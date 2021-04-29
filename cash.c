#include<cs50.h>
#include<stdio.h>
#include<math.h>
int main(void)
{
    float dollar;
    do
    {
        dollar=get_float("Money : \n");
    }
    while(dollar<0);
    int cents = round(dollar* 100);
    int counter=0;
while (cents>0)
{

    if(cents>=25)
    {
        cents=cents-25;
        counter++;
    }
    else if (cents>=10)
    {
        cents=cents-10;
        counter++;
    }
    else if (cents>=5)
    {
        cents=cents-5;
        counter++;
    }
    else if (cents>=1)
    {
        cents=cents-1;
        counter++;
    }
}
printf("Least Number of Coins : %i \n",counter);
}