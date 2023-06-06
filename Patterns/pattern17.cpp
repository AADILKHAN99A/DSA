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
		while(j<=n-i)
		{
			cout<<" ";
			j++;
			
		}
		// for first triangle printing
		int col = 1;
		
		while(col<=i)
		{
			cout<<col;
		
			col++;
		}
		// for second triangle printing
		int col_2=1;
		while(col_2<=i-1)
		{
			cout<<col_2;
			col_2++;
		}

		cout<<endl;
		i++;
	}
	return 0;
}
