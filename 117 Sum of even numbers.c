// Description
// จงหาผลรวมของเลขคู่ จาก 1 ถึง n เช่น 
// n = 10, sum = 2+4+6+8+10 = 30 
// n = 13, sum = 2+4+6+8+10 + 12 = 42   เป็นต้น  

// Input
// จำนวนเต็มบวกหนึ่งค่า (ค่า n)

// Output
// ผลรวมของจำนวนคู่ จาก 1 ถึง n

// Hint
// - ใช้ลูป for
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i, sum=0;
    scanf("%d", &n);
    for(i=0; i<=n; i++){
        if(i%2 == 0)
            sum+=i;
    }
    printf("%d", sum);
    exit(EXIT_SUCCESS);
}