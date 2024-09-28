#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++){
            int first = i;
            int j = i + 1;

            while(j < nums.size()){
                if(nums[first] + nums[j] == target){
                    ans.push_back(first);
                    ans.push_back(j);
                    return ans;
                }
                else{
                    j++;
                }
            }
        }
        return ans;
    }
};

int main(){
    
    return 0;
}