 int binarytoInteger(vector<int> bin){
        int ans = 0;
        int size = bin.size()-1;
        for(int i = 0 ; i < bin.size() ; i++){
            if(bin[i] == 1){
            ans += pow(2,size);
            }
            size--;
        }
        return ans;
    }