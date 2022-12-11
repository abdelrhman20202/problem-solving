int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
int i,j;

int MaxWealth=0;
for(i=0;i<accountsSize;i++)
{ int wealth=0;

    for(j=0;j<accountsColSize[i];j++)
    {
        wealth += accounts[i][j]; 
    }

    if(wealth>MaxWealth)
    MaxWealth=wealth;
}

return MaxWealth;
}