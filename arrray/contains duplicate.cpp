class Solution {
public:
    bool containsDuplicate(vector<int>& n) {
if(n.size()==0)return false;
sort(n.begin(),n.end());
for(int i=0;i<n.size()-1;i++)
if(n[i]==n[i+1])return true;
return false;}

};


/*class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
if(nums.size()==0)return false;
set<int> s(nums.begin(), nums.end());
        if(s.size() < nums.size())return true;
        return false;}
}; */
