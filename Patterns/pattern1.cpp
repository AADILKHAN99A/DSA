#include<iostream>

using namespace std;

int main()
{	int n;
	cout<<"Enter number in range 1 to 10:  ";
	cin>>n;
	int i =1;
	while(i<=n)
	{	
		int j=1;
		while(j<=n)
		{
			cout<<j;
			j++;
		}
		cout<<"\n";
		i++;
	}
	
	return 0;
}
