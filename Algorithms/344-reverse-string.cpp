class Solution {
public:
    string reverseString(string s)
    {
      int str_len,i,j=0;
      str_len = s.length();
      char s2[str_len];

      for(i=str_len-1; i>=0; i--)
      {
        s2[j]=s[i];
        j++;
      }
      j--;
      return s2;
    }
};
