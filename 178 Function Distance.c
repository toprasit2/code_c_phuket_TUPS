// Description
// จงเขียนโปรแกรมสำหรับคำนวณระยะห่างระหว่างจุด บนระนาบสองมิติ โดยให้สร้างฟังก์ชันนี้ ในโปรแกรม 
//   float    distance(int x1, int y1, int x2, int y2) เป็นฟังก์ชันหาระยะห่างระหว่างจุด (x1,y1) กับ (x2,y2)  

  
// จงเขียนโปรแกรม ให้สมบูรณ์ (โดยใช้โครงร่างนี้)

// #inlclude 

// float distance (int x1, int y1, int x2, int y2);

// int main(){   
//     int x1, y1, x2, y2, n, i;  
//     scanf("%d", &n);
//     for(i=0; i<n; i++) {
//        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
//        printf("%.2f\n", distance(x1,y1,x2,y2)  );    

//     }  
    
//     return 0;
// }

 

// Input
// จำนวนเต็ม ตัวแรกเป็นจำนวนของคู่จุด และ บรรทัดต่อมา เป็นค่า x1, y1, x2, y2 คือพิกัดจุดของ จุดแต่ละคู่ ที่ต้องการหาระยะห่าง

// Output
// ระยะห่างของคู่จัด แสดงเป็นเลขทศนิยม 2 ตำแหน่ง บรรทัดละ 1 ค่า ตามลำดับ


// Hint
// -- มีการเรียกใช้ฟังก์ชัน sqrt() จาก math.h ด้วย

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float distance (int x1, int y1, int x2, int y2);

int main(){   
    int x1, y1, x2, y2, n, i;  
    scanf("%d", &n);
    for(i=0; i<n; i++) {
       scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
       printf("%.2f\n", distance(x1,y1,x2,y2)  );    

    }  
    exit(EXIT_SUCCESS);
}

float distance (int x1, int y1, int x2, int y2){
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}