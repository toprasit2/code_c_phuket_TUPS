// จงเขียนโปรแกรมคำนวณค่า determinant ของเมตริกซ์ 2x2 และ 3x3 ซึ่งมีสูตรการคำนวณดังนี้

// matrix determinant
// สำหรับเมตริกซ์ 2x2  A มีสมาชิกแถวที่หนึ่ง = [ a  b ] และ แถวที่ 2 = [ c   d ] หรือ
//  A = | a  b |
//      | c  d |

// determinant คำนวณดังนี้ det(A) หรือ |A| = ad - bc 

// สำหรับเมตริกซ์ 3x3  A มีสมาชิกดังนี้ 
//  A = | a  b  c |
//      | d  e  f |
//      | g  h  i |

// determinant คำนวณดังนี้ det(A) หรือ |A| = a(ei-fh)-b(di-fg)+c(dh-eg)

// Input
// จำนวนเต็มตัวแรก เป็น 2 หรือ 3 เพื่อระบุว่าเป็น เมตริกซ์ขนาด 2x2 หรือ 3x3 จากนั้น ตามด้วยจำนวนเต็มที่เป็นค่าสมาชิกของเมตริกซ์นั้น ตามลำดับ

// Output
// ค่า determinant ของเมตริกซ์

// Hint
// -- ใช้อาร์เรย์สองมิติ

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d", &x);
    int num[x][x];
    for(int i=0; i<x; i++)
        for(int j=0; j<x; j++)
            scanf("%d", &num[i][j]);
    if(x == 2){
        int a = num[0][0], b = num[0][1];
        int c = num[1][0], d = num[1][1];
        int det = a*d - b*c;
        printf("%d", det);
    }
    else if(x == 3){
        int a = num[0][0], b = num[0][1], c = num[0][2];
        int d = num[1][0], e = num[1][1], f = num[1][2];
        int g = num[2][0], h = num[2][1], i = num[2][2];
        int det = a*(e*i-f*h)-b*(d*i-f*g)+c*(d*h-e*g);
        printf("%d", det);
    }
    exit(EXIT_SUCCESS);
}