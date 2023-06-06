#include<iostream>
using namespace std;

int main()
{	
	int n;
	cout<<"Enter a number :";
	cin>>n;
	int i =1;
	
	while(i<=n)
	{
		int j=1;
		int space = n-i;
		//for spaces
		while(space)
		{	
			cout<<" ";
			
			space--;
		}
		//for stars
		while(j<=i)
		{
			cout<<"*";
			j++;
		}
		cout<<endl;
		i++;
		
	}
	
	
	
	return 0;
}
