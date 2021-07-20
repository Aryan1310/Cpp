#include<iostream>
using namespace std;

int main() {
	int num,dig,com=0,count=0;
	cin>>num;
	cin>>dig;
	while(num)
	{
		com=num%10;
		if(dig==com)
		{
			count+=1;
		}
		num/=10;
	}
	cout<<count;

	return 0;
}