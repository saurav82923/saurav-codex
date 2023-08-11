class Solution {
public:
    int search(vector<int>& v, int target) {
        if(find(v.begin(),v.end(),target) != v.end())
            return find(v.begin(),v.end(),target)-v.begin();
        else
            return -1;
    }
};

        ANOTHER APPROACH

class Solution {
public:
    int search(vector<int>& v, int target) {
        int a=0;
        int l=v.size();
        while(a<l){
            int mid = (a+l)/2;
            if(target == v[mid])
                return mid;
            else if(v[mid] < target)
                a= mid+1;
            else 
                l= mid;
        }
        return -1;
    }
};