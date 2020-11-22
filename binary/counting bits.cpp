class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> res(num +1);
        for(int i =0;i<=num;i++){
        res[i] = res[i/2] + i%2;
        }
    return res;
    }
    
};

/*
class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> res(num +1);
        for(int i =0;i<=num;i++){
        res.push_back(__builtin_pop_count(i))
        }
    return res;
    }
    
}; */