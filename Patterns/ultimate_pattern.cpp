#include<iostream>

using namespace std;

int main()
{	
	int n;
	cout<<"Enter a number";
	cin>>n;

	int i = 1;
	while(i<=n)
	{
		// for first triangle printing
		int j =1;
		while(j<=n-i+1)
		{
			cout<<j;
			j++;
			
		}
		
		// for first star triangle printing
		int col = 1;
		while(col<=i-1)
		{
			cout<<"*";
		
			col++;
		}
		
		// for second star triangle printing
		int col1=1;
		while(col1<=i-1)
		{
			cout<<"*";
		
			col1++;
		}
	
		// for Second triangle printing
		int col2=n-i+1;
		while(col2)
		{
			cout<<j-1;
			j--;
			col2--;
		}
		
		cout<<endl;
		i++;
	}
	return 0;
}
