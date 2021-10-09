#include <iostream>
#include <vector>
#include <climits>
using namespace std;
/*
Time Complexity : O(n)
Space Complexity : O(n)
*/
int stockPrice1(vector<int>& nums){
    vector<int> aux(nums.size());
    aux[nums.size()-1] = nums[nums.size()-1];
    for(int i = nums.size()-2; i>=0;i--){
        aux[i] = max(nums[i+1],aux[i+1]);
    }

    int ans= 0;
    for(int i=0;i<nums.size()-1;i++){
        ans = max(ans , aux[i]-nums[i]);
    }

    return ans;
}

int stockPrice2(vector<int> & nums){ // O(n) Time Complexity  Space Comlexty O(1).
    int minSofar = nums[0];
    int maxProfit = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i] < minSofar){
            minSofar = nums[i];
        }
        maxProfit = max(maxProfit , nums[i]-minSofar);
    }
    return maxProfit;
}


int main(){
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i=0;i<n;i++)
        cin >> nums[i];

    cout << stockPrice2(nums);

}