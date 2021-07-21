#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n=0,N,last=0,dig=0,sum=0;
	cin>>N;
	n=N; 
	while(n)
	{
		dig++;
		n/=10;
	}
	n=N;
	while(n)
	{
		last=n%10;
		sum+=pow(last,dig);
		n/=10;
	}
	if(sum==N)
	cout<<"true";
	else
	cout<<"false";
	return 0;
}