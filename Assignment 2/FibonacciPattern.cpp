#include<iostream>
using namespace std;

int main() {
	int n1=1,n2=1,row,sum=0;
	cin>>row;
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(i==1 && j==1)
			{
				sum=0;
				cout<<sum<<"	";
				break;
			}
			else if(i==2 && j==1)
			{
				sum=1;
				cout<<sum<<"	"<<sum;
				break;
			}
			else if(i>=3)
			{
				sum=n1+n2;
				cout<<sum<<"	";
				n1=n2;
				n2=sum;
			}
		}
		cout<<endl;
	}
	return 0;
}