#include <iostream>
using namespace std;
int main()
{

long long n;
cin >> n;
long long i, j;
bool arr[n + 1] = {0};
arr[0] = 1;
for (i = 2; (i * i <= n); i++)
{
    j = (i * i);
while(j<=n)
{
if(!(arr[j]))
    arr[j] = 1;
j = j + i;
}
}
for (i = 1; i <= n;i++)
{
if(!arr[i])
    cout << i << endl;

}
return 0;
}
