class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int l =0 ,h = n-1,m;
        int s ;
        for(int i=0 ;i<n-1; i++) {
            s = target - numbers[i];
            l = i+1;
            h = n-1;
            while(l <=h) {
                m = (l+h) /2;
                if(numbers[m] < s) {
                    l = m +1;
                }
                else if(numbers[m] > s) {
                    h = m-1;
                }
                else {
                    vector<int> ans{i+1, m+1};
                    return ans;
                }
            }
        }
        vector<int> ans;
        return ans ;
    }
};
