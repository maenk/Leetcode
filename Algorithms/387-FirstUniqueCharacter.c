int firstUniqChar(char* s) 
{
	int i;
	int  b[26]={0};
	
	for(i=0;i<strlen(s);i++)
	{
		b[s[i]-'a']++;
	}
	for(i=0;i<strlen(s);i++)
	{
		if(b[s[i]-'a']==1)
		{
			return i;
		}	
	
	}
	return -1;
}

	