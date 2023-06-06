#include<iostream>

using namespace std;

int main()
{	
	int n;
	cout<<"Enter a number";
	cin>>n;
	int count =1;
	int i = 1;
	while(i<=n)
	{
		// for space printing
		int j =1;
		while(j<=n-i)
		{
			cout<<"  ";
			j++;
			
		}
		// for number printing
		int col = 1;
		while(col<=i)
		{
			
			cout<<count<<" ";
			count++;
			col++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
