bool isAnagram(string str1, string str2)
{
    long long int i;
    int A[250]={0};
    long long int  n =str1.length();
    long long int n1=str2.length();
    for(i=0;i<n;i++)
    {
        A[str1[i]]++;
    }
    for(i=0;i<n1;i++)
    {
        A[str2[i]]--;
    }
    for(int j=0;j<250;j++)
    {
        if(A[j]!=0)
        {
            return false;
        }
    }
    return true;
}
