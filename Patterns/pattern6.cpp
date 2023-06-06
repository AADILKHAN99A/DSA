

#include<iostream>

using namespace std;

int main()
{	int n;
	cout<<"Enter number in range 1 to 10:";
	cin>>n;
	int i =1;
	char c = 'A';
	while(i<=n)
	{	
		int j=1;
	
		while(j<=n)
		{
			cout<<c;
		
			j++;
		}
		c++;
		cout<<"\n";
		i++;
	}
	
	return 0;
}

