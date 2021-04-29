#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int count;
    do
    {
        count = get_int("Enter the Height:");
    }
    while(count<=0 || count>8);
for(int i=0;i<count;i++)
{
   for(int dots=count-i;dots>0; dots--)
   // for printing the space from left to right
   {
       printf(".");

   }
   for(int j=0;j<=i;j++)
   // for printing the block or hash in this instance
    {
        printf("#");

    }
    // new line and again go in for loop until i is smaller than count
    printf("\n");
}
}