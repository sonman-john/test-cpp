#include <bits/stdc++.h>

using namespace std;

//--Print Fibonacci Number up to n  
void printFibonacciNumbers(int n)
{
 if (n<1) return;
 if (n>50){
 	long double f1 = 0, f2 = 1;
 	for (int i=1;i<=n;i++)
 	{
   		cout<<"("<<i<<")"<<f2<<" "<<endl;
   		long double next = f1 + f2;
   		f1 = f2;
   		f2 = next;
 	}
 }
 if (n<=50){
 	unsigned long f1 = 0, f2 = 1;
 	for (int i=1;i<=n;i++)
 	{
   		cout<<"("<<i<<")"<<f2<<" "<<endl;
   		unsigned long next = f1 + f2;
   		f1 = f2;
   		f2 = next;
 	}
 }
}

//--main function
int main()
{
 int n;
 cout<<"Enter count=";
 cin>>n;
 printFibonacciNumbers(n);
 return 0;
}
