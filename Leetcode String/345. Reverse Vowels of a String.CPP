class Solution {
public:
    string reverseVowels(string st) {
        int s=0;
        int k=st.length()-1;
        while(s<k){
            if((st[s] == 'a' || st[s] == 'e' || st[s] == 'i' || st[s] == 'o' || st[s] == 'u' ||st[s] == 'A' || st[s] == 'E' || st[s] == 'I' || st[s] == 'O' || st[s] == 'U' ) && (st[k] == 'a' || st[k] == 'e' || st[k] == 'i' || st[k] == 'o' || st[k] == 'u' || st[k] == 'A' || st[k] == 'E' || st[k] == 'I' || st[k] == 'O' || st[k] == 'U')){
                swap(st[s],st[k]);
                s++;
                k--;
            }
            else if((st[s] != 'a' || st[s] != 'e' || st[s] != 'i' || st[s] != 'o' || st[s] != 'u' || st[s] != 'A' || st[s] != 'E' || st[s] != 'I' || st[s] != 'O' || st[s] != 'U') && (st[k] == 'a' || st[k] == 'e' || st[k] == 'i' || st[k] == 'o' || st[k] == 'u' || st[k] == 'A' || st[k] == 'E' || st[k] == 'I' || st[k] == 'O' || st[k] == 'U')){
                s++;
            }
            else{
                k--;
            }
        }
        return st;
    }
};