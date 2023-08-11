
class Solution{
    public:
    string reverseAlternate(string str)
{
    // code here 
      bool flag=false;
      int low=0;
      for(int i = 0; i<= str.length(); i++){
          if(str[i]==' ' || i== str.length()){
              if(flag == true){
                  reverse(str.begin()+ low ,str.begin()+i);
                  flag = false;
                  
              }
              else {
                  flag= true ;
                  low = i+1;
              }
              
          }
      }
      return str;
}
};