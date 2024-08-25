#include<bits/stdc++.h>

long long getTrappedWater(long long* arr, int n) {

   long long mx_l[n];
   long long  mx_r[n];
   long long water[n];
   long long sum=0;

   mx_r[n-1]=arr[n-1];

   mx_l[0]=arr[0];

   for(int i=1;i<n;i++)

   {

     mx_l[i]=max(mx_l[i-1],arr[i]);

   }

   for(int j=n-2;j>=0;j--)

   {

       mx_r[j]=max(mx_r[j+1],arr[j]);

   }

    for(int i=0;i<n;i++)

    {

        water[i]=min(mx_l[i],mx_r[i])-arr[i];

         sum+=water[i];

    }

    return sum;
}

/*

 CONCEPT -

 1. left ka max nikal lenge
 2. right ka  max  nikal lenge;
 3. max_left and max_right me se mi ko current ko minus kar denge
 4.  aur usko sum  me add kar denge
 
*/

// coding ninjas