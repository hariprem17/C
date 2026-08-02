#include<stdio.h>

int main()
{
    int a[9][9] = {
    {5,3,0,0,7,0,0,0,0},
    {6,0,0,1,9,5,0,0,0},
    {0,9,8,0,0,0,0,6,0},
    {8,0,0,0,6,0,0,0,3},
    {4,0,0,8,0,3,0,0,1},
    {7,0,0,0,2,0,0,0,6},
    {0,6,0,0,0,0,2,8,0},
    {0,0,0,4,1,9,0,0,5},
    {0,0,0,0,8,0,0,7,9}
     };


    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int z=0;z<3;z++)
            {
                for(int k=0;k<3;k++)
                {
                    if(i!=z && j!=k)
                    {
                    if(a[i][j]==a[z][k])
                    {
                        printf("false");
                        return 0;
                    }
                    }
                }
            }
        }
    }


    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            //every row
            for(int z=0;z<9;z++)
            {
                if(z!=j)
                {

                if(a[i][z]==0)
                {
                    continue;
                }
                else if(a[i][z]==a[i][j])
                {
                    printf("false");
                    return 0;
                }
                }
            }
            //every column
            for(int k=0;k<9;k++)
            {
                if(k!=i)
                {
                if(a[k][j]==0)
                {
                    continue;
                }
                else if(a[k][j]==a[i][j])
                {
                    printf("false");
                    return 0;
                }
                }
            }

        }
    }
    printf("true");
}
