#include<bits/stdc++.h>

using namespace std;


int main()
{
     long n,q,i,j,x,res = 0,sum = 0,temp = 0;
     long lb,ub;
     cin>>n>>q;

     
	 res = n;
 
	 vector< pair<long int,long int> > a;


     for(i = 1;i <= q;i++)
    {
        sum = 0;
        cin>>lb>>ub>>x;

 
        a.push_back(make_pair(lb-1,x));
        a.push_back(make_pair(ub,-x));
        
    }
    sort(a.begin(),a.end());
    
    for(i = 0;i < a.size();i++)
    {
    	//cout<<a[i].first<<" "<<a[i].second<<"\n";
    	if(a[i].second < 0)
    	{
    		res = max(res,temp+a[i].first);
    		temp += a[i].second;
		}
		else
		{
			temp += a[i].second;
		}
	}
	cout<<res;



}
