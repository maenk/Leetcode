int hammingDistance(int x, int y) {
    
 	int m,count=0;
	m=x^y;
	int k=0;
	int q[100];
	while(m!=0)
	{
		q[k]=m%2;
		m=m/2;
		k++;
	}
for (int i=k-1;i>=0;i--)
	{
		if(q[i]==1)
		{
			count++;
		}
	}
      return count;

}