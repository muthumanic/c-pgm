#include <iostream>
using namespace std;

int main() {
	int n,i,j,c=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	    c=0;
	    for(j=1;j<=n;j++)
	    {
	        if(i%j==0)
	        {
	            c++;
	        }
	    }
	}
	    if(c>2)
	    {
	       
	    }
	    else
	    {
	        cout<<"no";
	    }
	return ;
}
