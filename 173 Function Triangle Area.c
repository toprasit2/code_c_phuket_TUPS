// Description
// จงเขียนโปรแกรมสำหรับคำนวณพื้นที่รูปสามเหลี่ยม โดยการรับความยาวด้านสามด้าน 
// กำหนดให้ มีการสร้าง 2 ฟังก์ชันนี้ในโปรแกรม 
//   int    isTriangle(int a, int b, int c) เป็นฟังก์ชันใช้ทดสอบว่าด้าน a, b, และ c เป็นด้านของรูปสามเหลี่ยมหรือไม่ ถ้าใช่ ให้ return 1  (เป็นจริง) แต่ถ้าไม่ใช่ ใช้ return 0 (เป็นเท็จ) 

//   float    triangleArea(int a, int b, int c) เป็นฟังก์ชันคำนวณพื้นที่รูปสามเหลี่ยมจากด้านทั้งสามด้าน 

// จงเขียนโปรแกรม ให้สมบูรณ์ (โดยใช้โครงร่างนี้)

// #inlclude <stdio.h>
// #include <math.h>
// int     isTriangle(int a, int b, int c);
// float  triangleArea(int a, int b, int c);
// int main(){   
//       int a, b, c;    
//       scanf("%d%d%d",&a, &b, &c);   
//        if( isTriangle(a,b,c)==1 )  
//             printf("%.4f",  triangleArea(a,b,c) ); 
//        else    
//             printf("NOT Triangle!"); 
//        return 0;
// }

 

// Input
// จำนวนเต็มบวก 3 ค่า (ค่า a b c)  

// Output
// ค่าพื้นที่รูปสามเหลี่ยม เป็นเลขทศนิยม 4 ตำแหน่ง หรือ หากด้านทั้งสาม ไม่ใช่รูปสามเหลี่ยม ให้แสดงข้อความ "NOT Triangle!" 

// Hint
// -- การตรวจสอบ ด้านของรูปสามเหลี่ยม ให้ตรวจสอบว่า ด้านที่ยาวที่สุด จะต้องยาวน้อยกว่าผลบวกของอีกสองด้าน จึงจะเป็นรูปสามเหลี่ยมได้ เช่น 3 4 5 (5 < 3+4) , 2 2 3 (3 < 2+2), 5 4 8 (8 < 5+4) เป็นต้น แต่ถ้า ด้านที่ยาวที่สุดมากกว่าหรือเท่ากับอีกสองด้านรวมกัน จะไม่สามารถสร้างเป็นรูปสามเหลี่ยมได้ เช่น 2 2 4 (2+2=4), 2 8 1 (8>1+2), 3 3 10 (10>3+3) เป็นต้น 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int     isTriangle(int a, int b, int c);
float   triangleArea(int a, int b, int c);

int main()
{
    int a, b, c;    
    scanf("%d%d%d",&a, &b, &c);   
    if( isTriangle(a,b,c)==1 )  
        printf("%.4f",  triangleArea(a,b,c) ); 
    else    
        printf("NOT Triangle!"); 
    exit(EXIT_SUCCESS);
}
int     isTriangle(int a, int b, int c){
        if(a>b && a>c)
            return a<(b+c);
        else if(b>a && b>c)
            return b<(a+c);
        else if(c>a && c>b)
            return c<(a+b);
        return 1;
}
float   triangleArea(int a, int b, int c){
    float S;
    S = (float)(a+b+c)/2;
    return sqrt(S*(S-a)*(S-b)*(S-c));
}