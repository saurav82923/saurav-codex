class Solution {
    public String reverseWords(String s) {
        if(s == null)
            return null;
        String str[]=s.trim().split("\\s+");
        int st=0;
        int l=str.length-1;
        while(st<l){
            String temp=str[st];
            str[st]=str[l];
            str[l]=temp;
            st++;
            l--;
        }
        return String.join(" ",str);
    }
}