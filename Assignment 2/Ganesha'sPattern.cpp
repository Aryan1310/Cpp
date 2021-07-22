#include <bits/stdc++.h>
using namespace std;
 
void swastika(int row)
{
for (int i = 0; i < row; i++) 
{
    for (int j = 0; j < row; j++) 
	{
    if (i < row / 2) 
	{
        if (j < row / 2) 
		{
        if (j == 0)
            cout <<"*";
        else
            cout <<" ";
        }
        else if (j == row / 2)
        cout <<"*";
        else
        {
        if (i == 0)
            cout <<"*";
        }
    }
    else if (i == row / 2)
        cout <<"*";
    else 
	{
        if (j == row / 2 || j == row - 1)
        cout <<"*";
        else if (i == row - 1) 
		{
        if (j <= row / 2 || j == row - 1)
            cout <<"*";
        else
            cout <<" ";
        }
        else
        cout <<" ";
    }
    }
    cout <<endl;
}
}
int main()
{
   int row;
   cin>>row;
   swastika(row);  
   return 0;
}