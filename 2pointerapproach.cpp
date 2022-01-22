
#include <bits/stdc++.h>

using namespace std;

int main()
{
int i,j,k;
i=0;
j=5;

int arr[6]={1,2,3,4,7,11};
while (1)
   {
    if ((arr[i]+arr[j])==10)
        {k=1;
        break;}
    else if ((arr[i]+arr[j])>=10)
        j--;
    else
        i++;

   }
if (k==1)
    cout<<arr[i]<<' '<<arr[j];

return 0;
}

