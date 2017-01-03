bool canConstruct(char* ransomNote, char* magazine) 
{
	int i,j;
	int count=strlen(magazine);
    int flag=0;
	if(strlen(ransomNote)>strlen(magazine))
	{
		printf("false1");
	}
	
	for( i=0;i<strlen(ransomNote);i++)
	{
	    flag=0;
	 	for(j=0;j<strlen(magazine);j++)
		{
			if(ransomNote[i]==magazine[j]&& magazine[j]!=-1)
			{	flag=1;
				magazine[j]=-1;
				count--;
				break;
			}
		}
		if(flag!=1)
		{
		    return false;
		}
		if(count==0)
		{
			return false;
			}
			
	}
	return true;
  
}