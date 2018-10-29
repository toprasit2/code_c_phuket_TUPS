// // จงเขียนโปรแกรมสำหรับคำนวณค่าต่างๆของรูปวงกลม และ รูปทรงกลม รัศมี r  
// // กำหนดให้ มีการสร้าง 4 ฟังก์ชัน สำหรับการคำนวณค่าเหล่านี้ ในโปรแกรม 
// //   float    circum(int r) เป็นฟังก์ชันคำนวณความยาวเส้นรอบวง ของวงกลมรัศมี r 

// //   float    area(int r) เป็นฟังก์ชันคำนวณพื้นที่ของวงกลมรัศมี r 

// //   float    volume(int r) เป็นฟังก์ชันคำนวณปริมาตรของทรงกลมรัศมี r 

// //   float    surface(int r) เป็นฟังก์ชันคำนวณพื้นที่ผิวของทรงกลมรัศมี r 

// // จงเขียนโปรแกรม ให้สมบูรณ์ (โดยใช้โครงร่างนี้)

// // #inlclude 
// // #define Pi 3.14159 
// // float area(int r);
// // float circum(int r);
// // float volume(int r);
// // float surface(int r);
// // int main(){   
// //     int r;  
// //     scanf("%d", &r);   
// //     printf("Circle Circumference: %.4f\n", circum(r) );    
// //     printf("Circle Area: %.4f\n", area(r) );    
// //     printf("Sphere Volume: %.4f\n", volume(r) );    
// //     printf("Sphere Surface: %.4f", surface(r) ); 
// //     return 0;
// // }

 

// // Input
// // จำนวนเต็ม หนึ่งค่า คือค่า r (รัศมีของวงกลม)

// // Output
// // ค่าทั้ง 4 ค่าที่คำนวณได้ แสดงเป็นเลขทศนิยม 4 ตำแหน่ง ดังตัวอย่าง

// // Hint
// // -- ให้ใช้ค่า Pi ดังค่าคงที่ Pi ที่กำหนดไว้แล้วในโปรแกรม #define Pi 3.14159

// จงเขียนโปรแกรมสำหรับคำนวณค่าต่างๆของรูปวงกลม และ รูปทรงกลม รัศมี r  
// กำหนดให้ มีการสร้าง 4 ฟังก์ชัน สำหรับการคำนวณค่าเหล่านี้ ในโปรแกรม 
//   float    circum(int r) เป็นฟังก์ชันคำนวณความยาวเส้นรอบวง ของวงกลมรัศมี r 

//   float    area(int r) เป็นฟังก์ชันคำนวณพื้นที่ของวงกลมรัศมี r 

//   float    volume(int r) เป็นฟังก์ชันคำนวณปริมาตรของทรงกลมรัศมี r 

//   float    surface(int r) เป็นฟังก์ชันคำนวณพื้นที่ผิวของทรงกลมรัศมี r 

// จงเขียนโปรแกรม ให้สมบูรณ์ (โดยใช้โครงร่างนี้)

// #inlclude 
// #define Pi 3.14159 
// float area(int r);
// float circum(int r);
// float volume(int r);
// float surface(int r);
// int main(){   
//     int r;  
//     scanf("%d", &r);   
//     printf("Circle Circumference: %.4f\n", circum(r) );    
//     printf("Circle Area: %.4f\n", area(r) );    
//     printf("Sphere Volume: %.4f\n", volume(r) );    
//     printf("Sphere Surface: %.4f", surface(r) ); 
//     return 0;
// }

 

// Input
// จำนวนเต็ม หนึ่งค่า คือค่า r (รัศมีของวงกลม)

// Output
// ค่าทั้ง 4 ค่าที่คำนวณได้ แสดงเป็นเลขทศนิยม 4 ตำแหน่ง ดังตัวอย่าง

// Hint
// -- ให้ใช้ค่า Pi ดังค่าคงที่ Pi ที่กำหนดไว้แล้วในโปรแกรม #define Pi 3.14159

#include <stdio.h>
#include <stdlib.h>

#define Pi 3.14159 

float area(int r);
float circum(int r);
float volume(int r);
float surface(int r);

int main(){   
    int r;  
    scanf("%d", &r);   
    printf("Circle Circumference: %.4f\n", circum(r) );    
    printf("Circle Area: %.4f\n", area(r) );    
    printf("Sphere Volume: %.4f\n", volume(r) );    
    printf("Sphere Surface: %.4f", surface(r) ); 
    exit(EXIT_SUCCESS);
}

float area(int r){
    return Pi*r*r;
}
float circum(int r){
    return 2*Pi*r;
}
float volume(int r){
    return 4*Pi*r*r*r/3;
}
float surface(int r){
    return 4*Pi*r*r;
}