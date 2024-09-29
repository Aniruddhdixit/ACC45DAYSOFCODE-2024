#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int s = nums.size();
        stack<int> st, st2;
        int count = 0;

        for(int i = 0; i < s; i++){
            if(i == 0){
                st.push(nums[i]);
                count++;
            }
            else{
                int j = i - 1;
                if(nums[i] == nums[j]){
                    continue;
                }
                else{
                    st.push(nums[i]);
                    count++;
                }
            }
        }

        while(!st.empty()){
            int t = st.top();
            st2.push(t);
            st.pop();
        }

        for(int i = 0; i < s; i++){
            if(!st2.empty()){
                nums[i] = st2.top();
                st2.pop();
            }
            else{
                nums[i] = '_';
            }
        }
        return count;
    }
};

int main(){
    
    return 0;
}