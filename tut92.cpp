#include<iostream>
using namespace std;
int main()
{
   
int arr[]={1,2,3,4};
int sum =0;
int size = sizeof(arr)/ sizeof(arr[0]);
for(int i=0;i<size;i++)
{
      sum +=arr[i];
}
cout<<"sum of arrays: "<<sum<<endl;
return 0;
   
}