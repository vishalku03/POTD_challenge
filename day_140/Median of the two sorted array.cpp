class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        /*
          LOGIC:-
          1.  WE FIND THE SIZE BOTH ARRAYS
          2. PUSH IT INTO THE VECTOR
          3. SORT THE VECTOR
          4. IF THE SIZE OF VECTOR IS IN  ODD THEN  ONE MIDDILE 
          5. IF THE SIZE OF THE  VECTOR IS IN EVEN FORM THEN 
             WE HAVE T WO CASES FIND MIDDLE AND MINUS AND 
            AFTER THAT WE ADD  THEM 

        */
        int n = nums1.size();
        int m = nums2.size();
        vector<int> merged;
        for (int i = 0; i < n; i++) {
            merged.push_back(nums1[i]);
        }
        for (int i = 0; i < m; i++) {
            merged.push_back(nums2[i]);
        }
        sort(merged.begin(), merged.end());
        int total = merged.size();
        if (total % 2 == 1) {
            return static_cast<double>(merged[total / 2]);
        } else {
            int middle1 = merged[total / 2 - 1];
            int middle2 = merged[total / 2];
            return (static_cast<double>(middle1) + static_cast<double>(middle2)) / 2.0;
        }
    }
};
// leetcode -  4
//   hamko jind gi me bahu kuchh  krna hai