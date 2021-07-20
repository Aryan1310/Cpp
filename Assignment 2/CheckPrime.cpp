#include<iostream>
using namespace std;
int main() {
	int N,b=0;
	cin >> N;
	for(int i=2;i<=N/2;i++) {
		if(N%i==0){
			b=1;
			break;
		}
	}
	if(b==0)
	cout<<"Prime";
	else
	cout<<"Not Prime";
	return 0;
}