char findTheDifference(char* s, char* t) 
{
    char d=0;
    int i;
    for(i=0;i<strlen(s);i++)
    {
        d=d^s[i];
    }
    for(i=0;i<strlen(t);i++)
    {
        d=d^t[i];
    }
    return d;
}