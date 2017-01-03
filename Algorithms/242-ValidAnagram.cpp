public class Solution {
    public boolean isAnagram(String s, String t) 
    {
       
        
        char s3[]=s.toCharArray();
        char t4[]=t.toCharArray();
        Arrays.sort(s3);
        Arrays.sort(t4);
String s1=new String(s3);
String s2=new String(t4);
if(s1.equals(s2))
return true;
else return false;
        
    }
}