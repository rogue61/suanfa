#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==0)
	return 1;
	return  (n-1)*n;
	
 } 
 int main()
 {
 	int result =fact(10);
 	cout<<result<<endl;
 	return 0;
 }
