

#include <bits/stdc++.h>

using namespace std;

int main()
{   int first[4]={2,4,7,9};
    int second[5]={1,3,5,11,13};
    int third[9];
    int i=0;
    int j=0;
    int k=0;
    while(k<9)
    {
        if (first[i]<second[j])
            {
                third[k]=first[i];
                k++;
                i++;
            }

        else
           {
               third[k]=second[j];
               k++;
               j++;
           }
    }
    for(int p=0;p<9;p++)
    {
        cout<<third[p]<<' ';
    }

return 0;
}

