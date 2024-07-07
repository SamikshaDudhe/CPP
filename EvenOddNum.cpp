 //Write a  program to find sum of all even and odd numbers between 1 to n
 #include<iostream>
 using namespace std;

// int main()
// {
//     int n,sum=0,odd=0;
//     cout<<"enter the no. upto which you want even and odd no."<<endl;
//     cin>>n;

//     for(int i=1;i<=n;i++)
//     {
//         if(i%2==0)
//         {
//             sum=sum+i;
//         }
//         else
//         {
//            odd=odd+i;
//         }
    
//     }
//    cout<<"sum of even no is "<<sum<<endl;
//    cout<<"sum of odd no is "<<odd<<endl;
// }

#include<iostream>
using namespace std;
int main()
{
	int n,sum_even=0,sum_odd=0;
	cout<<"enter limit:"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			sum_even=sum_even+i;
		}
		else
			sum_odd=sum_odd+i;
	}
	cout<<"sum of even numbers "<<sum_even<<endl;
	cout<<"sum of odd numbers "<<sum_odd<<endl;
	return 0;
}



