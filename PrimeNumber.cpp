// Write a  program to print all Prime numbers between 1 to n
#include<iostream>
 using namespace std;

int main()
{
   int n,count=0;
   cout<<"Enter the value "<<endl;
   cin>>n;
for(int i=0;i<=n;i++)
{
 if(n%i==0)
 {
    count++;
 }
}
if(count>2)
{
 cout<<"No is prime number"<<endl;
}
else
{
 cout<<"No is not prime number";
}
}