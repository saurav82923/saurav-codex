class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int i;
        bool a;
        if(num < 0)
            return false;
        else if(num == 0)
            return true;
        else if(num >0){
            for( i=1; i<=num; i++){
                if(i*i == num)
                     return true;
                 if(i*i > num)
                    return  false;
            }

        }
        return a;
    }
};