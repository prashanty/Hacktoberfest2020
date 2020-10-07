Write a program to find the missing number in an array.

#include <iostream>
using namespace std;

int main() {
	long i,t,n;
    cin>>t;
    while(t--)
    {cin>>n;
  long a,sum=0,ans=0;
  ans = (n*(n+1))/2;
    for(i=0;i<n-1;i++)
    {
        cin>>a;
        sum=sum+a;
    }
    cout<<ans-sum<<endl;
        
    }
	return 0;
}
