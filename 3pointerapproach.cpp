
#include <bits/stdc++.h>

using namespace std;

int main()
{
int i,j,k;
int z=0;
int arr[6]={1,3,6,7,9,12};
    for( i=0;i<6;i++)
    {
       for (j=0;j<6;j++)
            {for (k=0;k<6;k++)
                {if ((arr[i]+arr[j]+arr[k])==13)
                    {cout<<"Sum is achieved"<<' '<<arr[i]<<' '<<arr[j]<<' '<<arr[k]<<endl;
                        z=1;
                        break;}}
                if (z==1)
                    break;
            }
            if (z==1)
                break;


    }

    return 0;
}

