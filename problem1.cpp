#include<bits/stdc++.h>

using namespace std;

int findLargestPrefix(string a)
{
    int n_left = 0,n_right = 0,i,max_correct = 0,flag = 0;

    if(a[0] == '>')
      return 0;
    else
    {
        n_left = 1;

        for(i = 1;i < a.size();i++)
         {
             if(a[i] == '>')
             {
                 n_right++;
                 if(n_right > n_left)
                 {
                     flag = 1;
                 }
                 else if(n_right == n_left)
                 {
                     max_correct = i+1;
                 }
             }
             else
             {
                 n_left++;
             }

             if(flag == 1)
              break;
         }

    }
    return max_correct;
}

int main()
{
    int t,res;
    string a;

    cin>>t;

    while(t--)
    {
        cin>>a;

        res = findLargestPrefix(a);
        cout<<res;
    }
}
