#include <stdio.h>

int main(void) {
//   Bài 1: Nhập vào 3 số nguyên a, b, c. 
// In ra tổng, hiệu, tích, thương của 3 số.
// Tính (a + b) * c và in ra màn hình.

  int a;
  int b; 
  int c;
  printf("Nhap vao so a: ");
  scanf("%d",&a);
  printf("Nhap vao so b: ");
  scanf("%d",&b);
  printf("Nhap vao so c: ");
  scanf("%d",&c);
  printf("so a la :%d",a);
  printf("\nso b la :%d",b);
  printf("\nso c la :%d",c);
  printf("\n Tong 3 so a+b+c la : %d",a+b+c);
  printf("\n hieu 2 so a , b la : %d", a-b);
  // 4/2 =?2
  // 5/2 = float
  // 5/0 = ?
  // in ra kết quả a/b
  if(b!=0){
    float thuong = (float) a/b;
    printf("\n thuong 2 so a/b la : %f", thuong);
  }else{
    printf("\nb phai khac 0");
  }
  printf("\n (a+b)*c ket qua la : %d", (a+b)*c);
  // a/b b=0;
  // a=b => dấu = phép gán
  // a==b => dấu == là phép so sánh
  // a>b, a>= b , a<b, a<=b
}

//Bài 2: Nhap 2 canh a,b
//Neu a = b => tính dien tích hình vuông và in ra màn hình
//Neu a != b => tính dien tích hcn và in ra màn hình
//Bài 3: Xây dung chuong trình tính di?m trung bình:
//Nhap diem toán van anh tu bàn phím
//Tính diem trung bình  = (toán + van + anh)/3
//Neu 0<= diem trung bình <= 4 in ra màn hình ‘Hoc yeu’
//Neu 4< diem trung bình < 6 in ra màn hình ‘Hoc trung bình’
//Neu 6< = diem trung bình <8 in ra màn hình ‘Hoc khá’
//Neu 8<= diem trung bình <=10 in ra màn hình ‘Hoc gioi’

#include<stdio.h>
int main(){
//	int a,b;
//	printf("Nhap canh a:");
//	scanf("%d",&a);
//	printf("Nhap canh b:");
//	scanf("%d",&b);
//	//boolean 
//	// ==, !=, >=, <=
//	if(a == b){
//		printf("Dien tich hinh vuong la: %d",(a*b));
//	}
////else{
////		printf("Dien tich hinh chu nhat la: %d",(a*b));
////	}
//   if(a!=b){
//   	printf("Dien tich hinh chu nhat la: %d",(a*b));
//   }

// CTRL + / comment code nhanh
//   float diemToan,diemVan,diemAnh;
//   printf("Nhap diem toan: ");
//   scanf("%f",&diemToan);
//   printf("Nhap diem van: ");
//   scanf("%f",&diemVan);
//   printf("Nhap diem anh: ");
//   scanf("%f",&diemAnh);
//   float diemTrungBinh = (diemToan + diemVan + diemAnh)/3;
//   printf("Diem trung binh toan van anh:\t %.3f",diemTrungBinh); //%.3f lay sau so 0 3 so. \t cach ra 1 khoang trang
   
   	float diemtoan, diemvan, diemanh, diemtb;
	printf("Xin moi nhap diem toan: ");
	scanf("%f",&diemtoan);
	printf("Xin moi nhap diem van: ");
	scanf("%f",&diemvan);
	printf("Xin moi nhap diem anh: ");
	scanf("%f",&diemanh);
	diemtb = (diemtoan+ diemvan+ diemanh)/3;
	printf("Diem trung binh la: %.1f",diemtb); 
	if(diemtb>=0&&diemtb<=4){
		printf("\n Xep loai yeu"); 
	}else if(diemtb>4 &&diemtb<6){
		printf("\n xep loai trung binh"); 
	}else if(diemtb<8){
		printf("\n xep loai kha"); 
	}else if(diemtb<=10){
		printf("\n xep loai gioi"); 
	} 
	return 0;
   
}
