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
		// for space printing
		int j =1;
		while(j<=i-1)
		{
			cout<<" ";
			j++;
			
		}
		// for number printing
		int col = 1;
		while(col<=n-i+1)
		{
			
			cout<<(col+i-1);
			
			col++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
