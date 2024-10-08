class Solution
{
public:
     int pairsum(vector<int> &arr)
     {

          int largest = INT_MIN;
          int Seclargest = INT_MIN;
          for (int i = 0; i < arr.size(); i++)
          {
               if (arr[i] > largest)
               {
                    Seclargest = largest;
                    largest = arr[i];
               }
               else if (arr[i] > Seclargest && arr[i] < largest)
               {
                    Seclargest = arr[i];
               }
          }

          return largest + Seclargest;
     }
};

// geeksforgeeks