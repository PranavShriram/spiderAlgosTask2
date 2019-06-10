#include<bits/stdc++.h>

using namespace std;


int main()
{
     long n,q,i,j,x,res = 0,sum = 0;
     long lb,ub;

     cin>>n>>q;

     vector<long int> a;

     for(i = 0;i < n;i++)
       a.push_back(0);

     for(i = 1;i <= q;i++)
    {
        sum = 0;
        cin>>lb>>ub>>x;

        a[lb-1] += x;
        a[ub] -= x;
    }

   sum = 0;
  for(i = 0;i < n;i++)
   {
      sum += a[i];
      res = max(res,sum+i+1);
   }
   cout<<res;
}
