
#include <bits/stdc++.h>

using namespace std;

int main()
{
int i,j;
int k=0;
int arr[6]={2,4,3,1,7,11};
for( i=0;i<6;i++)
   {
       for (j=0;j<6;j++)
         {if ((arr[i]+arr[j])==10)
            {cout<<"Sum is achieved"<<arr[i]<<' '<<arr[j]<<endl;
              break;}}

   }

    return 0;
}

