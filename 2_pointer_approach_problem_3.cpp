

#include <bits/stdc++.h>

using namespace std;

int main()
{   int i,k=0;
    vector<int> v={1,6,3,9,12,7};
    sort(v.begin(),v.end());
    int start=0,end1=v.size()-1,target=13;
    {
        for( i=0;i<6;i++)
        {
            while(start<=end1)
            {
                if ((v[start+1]+v[end1]+v[i])==13)
                    {cout<<"YES it is possible";
                    k++;
                    break;}
                else if ((v[start+1]+v[end1]+v[i])>=13)
                    end1--;
                else
                    start++;
            }
            if (k==1)
                break;
        }
        cout<<' '<<v[i]<<' '<<v[start+1]<<' '<<v[end1];
    }

return 0;
}

