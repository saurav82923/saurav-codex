class Solution {
public:
    string interpret(string command) {
        string s = "";
        for(int i=0; i<command.length(); i++){
            if(command[i] == 'G')
                s = s+ "G";
           else if(command[i] == '(' && command[i+1] ==')'){
               s =s + "o";
               i++;
           }
            else if(command[i] == '('){
                s =s + "al";
                i= i+3;
            }
        }
        return s;
    }
};