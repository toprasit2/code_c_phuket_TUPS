// Description
// จงหาผลบวกของจำนวนเต็ม ในช่วงจาก m ถึง n โดยที่ค่า m<=n  เช่น 
// m=1 , n = 3 , sum = 1+2+3 = 6 
// m=-2, n = 2,  sum = -2 + -1 + 0 + 1 + 2 = 0  เป็นต้น

// Input
// จำนวนเต็ม 2 ค่า คือค่า m และ n  (m <= n)

// Output
// ผลรวมของจำนวนเต็ม จาก m จนถึง n

// Hint
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n;
    int i, sum = 0;
    scanf("%d %d", &m, &n);
    for(i=m; i<=n; i++)
        sum+=i;
    printf("%d", sum);
    exit(EXIT_SUCCESS);
}