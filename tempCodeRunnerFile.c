for(int i=1;i<=n/2;i++)
    {
        for(int j=1;j<=i;j++)
        printf("  ");
        for(int k=n-2;k>=2*i-1;k--)
        printf("* ");
        printf("\n");
    }