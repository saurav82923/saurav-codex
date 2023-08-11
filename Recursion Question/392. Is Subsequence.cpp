class Solution {
public:
    bool isSubsequence(string a, string b) {
        int j=0;
        for(int i=0;i<b.size();i++)

        {

            if(a[j]==b[i])

            {

                j++;

            }

        }

        if(j==a.size())

        return true;

        else

        return false;
    }
};