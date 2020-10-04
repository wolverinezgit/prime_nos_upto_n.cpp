#include <iostream>
using namespace std;
int main()
{

long long n,i,p,count=0;
cin>>n;

for(i=2;i<=n;i++)
{
for(long long j=1;j<=i;j++)
{
if(i%j==0)
count++;


}
if(count==2)
cout<<i<<" ";
count=0;

}
return 0;
}