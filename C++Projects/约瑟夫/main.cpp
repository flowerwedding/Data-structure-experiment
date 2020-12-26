#include <iostream>

int main()
{
    int a[31];
    int i, j = 1, k;
    for (i = 1; i <= 30; i++)
    {
        a[i] = 1;
    }

    for (i = 1; i <= 15; i++)
    {
        for (k = 1; k <= 9; k++)
        {
            if (j > 30)
            {
                j = 1;
            }
            while (a[j] == 0)
            {
                j++;//有些放在判断溢出的后面 
                if (j > 30 )
                {
                    j = 1;
                }
            }
            j++;
        }
        a[j - 1] = 0; //重点

    }
    for (i = 1; i <= 30; i++)
    {
        if (a[i] == 0)
        {
            printf("+ ");
        }
        else
        {
            printf("@ ");
        }
    }
    
    return 0;
}
