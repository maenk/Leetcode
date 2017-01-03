class Solution {
public:
    int longestPalindrome(string s) {
    int a[52];int ans=0;
    for(int i=0;i<52;i++)
    {
    	
    	a[i]=0;
    }
for(int i=0;i<s.length();i++)
{
	if(s[i]>='a'&&s[i]<='z')
	a[s[i]-'a']++;
	
	else if(s[i]>='A'&&s[i]<='Z')
	a[s[i]-'A'+26]++;
}
for(int i=0;i<52;i++)
{
	if(a[i]%2==0)
	{
		ans+=a[i];
	}
	else
	{
		ans+=a[i]-1;
	}
}
if(ans<s.length())
{
	ans++;
}
return ans;
}  };