// Description
// ให้เขียน ฟังก์ชันการหาเศษจากการหารจำนวนเต็มบวก (a mod b) โดยใช้การบวกและการลบเท่านั้น ซึ่งสามารถเขียนเป็น recursive function ได้ดังนี้ 
//    rem(a, b) = a   ถ้า a = 0 หรือ a < b    
//    rem(a, b) = rem(a-b, b)   ถ้า  a>=b 
// หลักการคือให้ลบ a ด้วย b ไปเรื่อยๆ จนกว่าจะเหลือค่าน้อยกว่า b นั่นคือเศษจากการหาร
// จงเขียนโปรแกรมนี้ให้สมบูรณ์ 
 
// #include <stdio.h>
// int rem(int a, int b);
// int main(){  
//   int p, q, r;    
//   scanf("%d%d",&p, &q);   
//   r=rem(p,q);   
//   printf("%d mod %d = %d\n", p, q, r);   
//   return 0; 
// }

// Input
// จำนวนเต็มบวก สองจำนวน คือ ตัวตั้ง (p) และ ตัวหาร (q)

// Output
// เศษจากการหาร p/q โดยได้ผลลัพธ์มากจากการเรียกใช้ฟังก์ชัน rem

// Hint

#include <stdio.h>
#include <stdlib.h>

int rem(int a, int b);

int main(){  
  int p, q, r;    
  scanf("%d%d",&p, &q);   
  r=rem(p,q);   
  printf("%d mod %d = %d\n", p, q, r);   
    exit(EXIT_SUCCESS);
}

int rem(int a, int b){
    if(a==0 || a<b)
        return a;
    return rem(a-b,b);
}