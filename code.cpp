#include<iostream>
using namespace std;
int main()
{
    int num,count=0;
    cout<<"Enter the number to check :";
    cin>>num;
    for(int i=1;i<=num;i++)
if(num%i==0)
count++;
 
     if (count==2)

    cout<<"it is a prime number ";
else

cout<<"it is not a prime number";
return 0;

}