// Description
// จงเขียนฟังก์ชัน สำหรับคูณเมตริกซ์ [5x2] ด้วยค่าคงที่ n 
// ใช้โครงร่างโปรแกรมนี้ และเขียนโปรแกรมให้สมบูรณ์
// #include 
// void show(int M[5][2])
// { int i,j;  
//   for(i=0;i<5;i++)
//   {  for(j=0;j<2;j++) printf("%3d ",M[i][j]); 
//       printf("\n");   
//    }
// }

// void mult(int M[5][2], int n);

// int main()
// {  int matrix[5][2], n, i,j;    
//     for(i=0;i<5;i++)     
//         for(j=0;j<2;j++) scanf("%d",&matrix[i][j]);   
//     scanf("%d",&n);   
//     mult(matrix,n);  
//     show(matrix);   
//     return 0; 
// }

// Input
// จำนวนเต็ม 10 ตัวแรก คือสมาชิกของเมตริกซ์ขนาด 5 แถว 2 หลัก ตามลำดับ 
// แล้วตามด้วยค่าจำนวนเต็ม n ที่จะใช้คูณกับเมตริกซ์

// Output
// แสดงเมตริกซ์ที่ได้ หลังจากการคูณด้วยค่า n

// Hint

#include <stdio.h>
#include <stdlib.h>

void show(int M[5][2]);
void mult(int M[5][2], int n);

int main()
{  int matrix[5][2], n, i,j;    
    for(i=0;i<5;i++)     
        for(j=0;j<2;j++) scanf("%d",&matrix[i][j]);   
    scanf("%d",&n);   
    mult(matrix,n);  
    show(matrix);
    
    exit(EXIT_SUCCESS);
}

void show(int M[5][2])
{ int i,j;  
  for(i=0;i<5;i++)
  {  for(j=0;j<2;j++) printf("%3d ",M[i][j]); 
      printf("\n");   
   }
}

void mult(int M[5][2], int n){
    int i,j;
    for(i=0;i<5;i++) 
        for(j=0;j<2;j++)
        M[i][j]*=n;
}