class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char> m;
        
        int x=0;
        for(int i=0; i<key.length(); i++){
             if(m.find(key[i])==m.end() && key[i] != ' '){
                m[key[i]]=char('a'+x);
                x++;
            }
        }
        for(int i=0; i<message.length(); i++){
            if(message[i] != ' ')
             message[i]= m[message[i]];
        }
        return message;
    }
};