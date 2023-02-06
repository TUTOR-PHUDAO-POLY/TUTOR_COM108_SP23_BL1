
#include <stdio.h>
int main(){
//  printf("Nhap vao so nguyen n: ");
//  int n;
//  int sum = 0;
//  int tongLe = 0;
//  int bienDem=0;
//  float trungBinh;
//  scanf("%d",&n);
//  printf("\nYeu cau 1: Tim so chan");
//  printf("\nSo chan tu 1 den n la: ");
//  int i =1;
//   for(i;i<=n;i++){
//	if(i % 2 == 0){ //Dieu kien so chan
//		printf("%d ",i);
//		//sum = sum + i;
//		sum += i;		
//		bienDem++;
//        //bienDem = bienDem+1;
//	}
//   }
//   printf("\nTong cac so chan la: %d",sum);
//   trungBinh = (float)sum/bienDem;
//   printf("\nTrung binh cong cac so chan la: %0.3f",trungBinh);
//   printf("\nYeu cau 2: Tim so le");
//   printf("\nSo le tu 1 den n la: ");
//   for(i=1;i<=n;i++){
//   	if(i % 2 != 0){ //Dieu kien so le
//   		printf("%d ",i);
//   		tongLe += i;
//	   }
//   }
//   printf("\nTong cac so le la: %d",tongLe);
//   
//   int a,b;
//   int tong;
//   int bienDem = 0;
//   printf("Nhap so a: ");
//   scanf("%d",&a);
//   printf("Nhap so b: ");
//   scanf("%d",&b);
//   int i=a;//Bat dau tu a
//   for(i;i<=b;i++){
//   	tong += i;
//   	if(i % 2 == 0){
//   		bienDem++;//Neu la so le thi bien dem se tang len 1 don vi
//	}
//   }
//   printf("\nYeu cau 1:");
//   printf("\nTong tu %d den %d la: %d",a,b,tong);
//   printf("\nYeu cau 2:");
//   printf("\nTong cac so chan tu %d den %d la: %d",a,b,bienDem);
   // if(bool){}
   //switch case
   // if(c == 'a')
//   printf("Moi ban nhap: ");
//   char c;
//   scanf("%c",&c);
//   switch(c){
//   	case 'a':{
//   		printf("Ban vua nhap: %c",c);
//   		break;
//	   }
//	case 'b':{
//		printf("Ban vua nhap: %c",c);
//		break;
//	   }
//   }
   printf("BUOI2");
   float a,b;
   char phepTinh;
   printf("\nNhap phep tinh ban muon (+ - * % /): ");
   scanf("%c",&phepTinh);
   printf("\nMoi ban nhap so a: ");
   scanf("%f",&a);
   printf("\nMoi ban nhap so b: ");
   scanf("%f",&b);
    switch(phepTinh){
   	case '+':{
   		printf("Tong %f va %f la: %f",a,b,(a+b));
		break;
	   }
	case '-':{
		printf("Hieu %f va %f la: %f",a,b,(a-b));
		break;
	   }
	case '*':{
		printf("Tich %f va %f la: %f",a,b,(a*b));
		break;
	   }
	case '%':{
		float thuong = (int)a % (int)b;
		printf("Thuong lay du %f va %f la: %f",a,b,thuong);
		break;
	   }
	case '/':{
		printf("Thuong lay nguyen %f va %f la: %f",a,b,(a/b));
		break;
	   }
	   default:{
	   	printf("K co phep tinh nao phu hop");
		break;
	   }
   }
 return 0;
}
