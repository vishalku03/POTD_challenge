class Solution
{
public:
     int smallestSubWithSum(int x, vector<int> &arr)
     {
          // Your code goes here
          // int start=0;
          // int end=0;
          // int sum=0;
          // int count=INT_MAX;

          // while(end<arr.size()){
          //     while(sum<=x && end<arr.size()){
          //     sum=sum+arr[end++];
          //     }
          //     while(sum>x ){
          //         count=min(count,end-start);
          //         sum=sum-arr[start];
          //         start++;
          //     }

          // }
          // return (count==INT_MAX)?0:count;

          int n = arr.size();
          int minLength = INT_MAX;
          for (int i = 0; i < n; i++)
          {
               int currSum = 0;
               for (int j = i; j < n; j++)
               {
                    currSum = currSum + arr[j];

                    if (currSum > x)
                    {
                         minLength = min(minLength, j - i + 1);
                         break;
                    }
               }
          }

          return (minLength == INT_MAX) ? 0 : minLength;
     }
};


// geeksforgeeks