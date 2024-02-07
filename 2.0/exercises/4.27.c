#include <stdio.h>

int main(void)
{
    int triangleSum = 0;
    int triangleCounter = 0;
    for(int i = 1; i <= 500; ++i)
    {
        for (int j = 1; j <= 500; ++j)
        {
            for(int k = 1; k <= 500; ++ k)
            {
               triangleSum = (i * i) + (j * j);
               if (triangleSum == k * k)
               {
                printf("%3d\t%3d\t%3d\n",i, j, k);
                triangleCounter++;
               }
            }
        }
    }
    printf("evaluated %d triangles.\n", triangleCounter);
    
}