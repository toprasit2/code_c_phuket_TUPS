// Description
// Calculate the area and perimeter of a given rectangle.
// จงคำนวณหาพื้นที่และเส้นรอบรูปของรูปสี่เหลี่ยมมุมฉาก

// Input
// Two integers indicating the width and length of a rectangle.
// จำนวนเต็ม 2 จำนวน ซึ่งเป็นความกว้างและความยาวของรูปสี่เหลี่ยมมุมฉาก

// Output
// The output contains 2 integers in 2 lines. The first line is the area of the rectangle. The second line is the perimeter of the rectangle. 
// ผลลัพธ์มีสองบรรทัด บรรทัดแรกคือพื้นที่ของรูปสี่เหลื่ยมมุมฉากที่คำนวณได้ และบรรทัดที่สองคือความยาวเส้นรอบรูปของสี่เหลี่ยมมุมฉาก

// Hint
// พท.สี่เหลี่ยม = กว้าง x ยาว
// ความยาวรอบรูป = 2 x ( กว้าง + ยาว )
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    scanf("%d %d", &x, &y);
    printf("%d\n%d", x*y, 2*(x+y));
    exit(EXIT_SUCCESS);
}