

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v={2,4,3,1,7,11};
    sort(v.begin(),v.end());
    int start=0,end1=v.size()-1,target=10;
    while(start<end1)
    {
        int sum=v[start]+v[end1];
        if (target==sum)
        {
            cout<<"YES";
            break;
        }
        else if (sum>target)
        {
            end1--;
        }
        else
        {
            start++;
        }
    }

return 0;
}

