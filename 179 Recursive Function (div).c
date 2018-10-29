// Description
// ให้เขียน ฟังก์ชันการหารจำนวนเต็มบวก (a div b) โดยใช้การบวกและลบเท่านั้น ซึ่งสามารถเขียนเป็น recursive function ได้ดังนี้ 
//    fdiv(a, b) = 0   ถ้า a = 0 หรือ a < b    
//    fdiv(a, b) = 1+fdiv(a-b, b)   ถ้า  a>=b 
// หลักการคือให้ ลบ a ด้วย b ไปเรื่อยๆ จนกว่าจะเหลือค่าน้อยกว่า b นับจำนวนครั้งที่ลบได้ นั่นคือผลการ

// จงเขียนโปรแกรมนี้ให้สมบูรณ์ 
 
// #include 
// int fdiv(int a, int b);
// int main(){  
//   int p, q, d;    
//   scanf("%d%d",&p, &q);   
//   d=fdiv(p,q);   
//   printf("%d div %d = %d\n", p, q, d);   
//   return 0; 
// }


// Input
// จำนวนเต็มบวก สองตัว คือตัวตัวตั้ง(p) และ ตัวหาร(q) ตามลำดับ

// Output
// ผลหาร คือ p div q ซึ่งได้จากการเรียกใช้ฟังก์ชัน fdiv 

// Hint

#include <stdio.h>
#include <stdlib.h>

int fdiv(int a, int b);

int main(){  
  int p, q, d;    
  scanf("%d%d",&p, &q);   
  d=fdiv(p,q);   
  printf("%d div %d = %d\n", p, q, d);   
    exit(EXIT_SUCCESS);
}

int fdiv(int a, int b){
    if(a==0 || a<b)
        return 0;
    return 1+fdiv(a-b,b);
}