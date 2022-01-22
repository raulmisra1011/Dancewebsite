#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{2,4,7,9};
    vector<int> p{1,3,5,11,13};
    sort(v.begin(),v.end());
    sort(p.begin(),p.end());
    vector<int> q;

    int i=0;
    int j=0;
    int k=0;

    while (1)
    {
        if (v[i]<p[j])
            {q[k]=v[i];
            q.push_back(q[k]);
            k++;
            i++;}

        else
        {   q[k]=p[j];
            q.push_back(q[k]);
            k++;
            j++;
        }
    }
int siz=q.size();
for (int s=0;s<siz;s++)
{
    cout<<q[s]<<' ';
}
return 0;
}

