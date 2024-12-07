#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
//[1,1,2]
//[0,0,1,1,1,2,2,3,3,4]w
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    vector <int> d;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=nums[i+1] && i+1<nums.size())
                d.push_back(nums[i]);
            if(i==nums.size()-1) d.push_back(nums[i]);
        }
        for(int i=0;i<d.size();i++){
           
                cout<<d[i]<<" ";
          awdadasd
        }
    }
};

int main(){
Solution solutie;
  int n;
  cin>>n;
  vector<int> heights(n);
  for(int i=0;i<n;i++) cin>>heights[i];
  solutie.removeDuplicates(heights);

}