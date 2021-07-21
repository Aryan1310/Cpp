#include<bits/stdc++.h>
using namespace std;
int main()
{
int rows, first=1, space, i, j;
cin>>rows;
for(i=0; i<rows; i++)
{
  for(space=1;space<=rows-i;space++)
  {
      cout<<" ";  
  }
  for(j=0;j<=i;j++)
  {
    if(j==0 || i==0)
        first= 1;
    else
        first=first*(i-j+1)/j;
    cout <<first<<" ";
  }
  cout<<endl;
}
return 0;
}