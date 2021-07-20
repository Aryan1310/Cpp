#include<iostream>
using namespace std;
int main() {
    int N;
	cin>>N;
	while(N)
	{

		int last,sumE=0,sumO=0,n;
		cin>>n;
		while(n)
		{
			last=n%10;
			if(last%2==0)
			sumE+=last;
			else
			sumO+=last;
			n/=10;
		}
		if(sumE%4==0 || sumO%3==0)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
		N--;
	}

	return 0;
}