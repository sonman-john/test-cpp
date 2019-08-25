#include <bits/stdc++.h>
//-- Mutiprecision for 128bit int128_t
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
//-- Mutiprecision for 128bit int128_t
using namespace boost::multiprecision;

//--Print Fibonacci Number up to n  
void printFibonacciNumbers(int n)
{
 if (n<1) return;
 //-- Mutiprecision for 128bit int128_t
 if (n>50){
 	int128_t f1 = 0, f2 = 1;
 	for (int i=1;i<=n;i++)
 	{
   		cout<<"("<<i<<")"<<f2<<" "<<endl;
   		int128_t next = f1 + f2;
   		f1 = f2;
   		f2 = next;
 	}
 }

 /*
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
*/

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
