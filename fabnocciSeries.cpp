#include<iostream>
using namespace std;

int fabnocciSeries(int n)
{
   if (n <= 1)
        return n;
    return fabnocciSeries(n - 1) + fabnocciSeries(n - 2);
}
int main()
{


int number ;
cin>>number;

int ans = fabnocciSeries(number);
cout<<ans;
return 0;
}
