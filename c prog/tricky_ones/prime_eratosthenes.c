/*This is a simple program to display all the prime numbers till a given range using Eratosthenes' method:
(Adapted from wikepedia)
To find all the prime numbers less than or equal to a given integer n by Eratosthenes' method:

1.    Create a list of consecutive integers from 2 to n: (2, 3, 4, ..., n).
2.    Initially, let p equal 2, the first prime number.
3.    Starting from p, count up in increments of p and mark each of these numbers greater than p itself in the list.
      These numbers will be 2p, 3p, 4p, etc.; note that some of them may have already been marked.
4.    Find the first number greater than p in the list that is not marked.
      If there was no such number, stop. Otherwise, let p now equal this number (which is the next prime), and repeat from step 3.
*/
#include<stdio.h>
void Eratosthenes(int n)
{
int boolean[n-1];//boolean array holds 0 if the numbers is not prime
int list[n-1];//store the numbers till given range from 2 onwards
int ctr,outctr,inctr,primeassm;
for(ctr=0;ctr<n-1;ctr++)
{
    list[ctr]=ctr+2;//start storing numbers from 2 onwars
    boolean[ctr]=1;//assume all to be prime
}
for(outctr=0;outctr<n/2+1;outctr++)
{
    if(boolean[outctr]==1)
    {
    primeassm=list[outctr];//perform primality check for indivusal numbers
    for(inctr=outctr+1;inctr<n-1;inctr++)
    if(list[inctr]%primeassm==0)//if divisible set boolean to 0
    boolean[inctr]=0;
    }
}
printf("\nThe prime numbers till the given range are\n");
for(ctr=0;ctr<n-1;ctr++)
if(boolean[ctr]==1)//display the list of prime numbers
printf("%d\n",list[ctr]);
}
int main()
{
    int num;
    printf("ENTER THE RANGE WITHIN WHICH YOU WANT TO SEE THE PRIME NUMBERS\n");
    scanf("%d",&num);
    Eratosthenes(num);
    
    return 0;
}
