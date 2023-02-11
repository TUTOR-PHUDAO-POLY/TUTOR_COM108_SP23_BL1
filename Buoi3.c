#include <stdio.h>

int main() {
  int chon; //khai báo biến chọn - chức năng
  do{
    printf("+-----------------Menu--------------+\n");
    printf("+--1. Nhap tuoi NY           -------+\n");
    printf("+--2. Xep lich hen ho        -------+\n");
    printf("+--3. Valentine              -------+\n");
    printf("+--0. Thoat                  -------+\n");
    printf("+-----------------------------------+\n");
    printf("Moi chon chuc nang: ");
    scanf("%d", &chon);
    switch(chon){
      case 1:
          printf("+--1. Nhap tuoi NY           -------+\n");
          int tuoi;  
          do{
            printf("Nhap tuoi Ny cua ban : ");
            scanf("%d", &tuoi);
            if(tuoi >= 18){
              printf("Khong phai di TU \n");
              //break;
            } else{
              printf("Phai chia tay, ko dc yeu, nhap lai!!!!! \n");
            }
          }while(tuoi < 18 );
          break;
      case 2:
          printf("+--2. Xep lich hen ho        -------+\n");
          for(int i=2; i <= 8; i++){
            //thứ 2 3 4 5 6 7 8 (Chủ nhật)
            if(i==8){
              printf("O nha Chu Nhat\n");
            }else{
              if(i % 2 == 0){ //2 4 6
                printf("Thu %d di choi voi Ny Moi\n",i);
              }else{ //3 5 7
                printf("Thu %d di choi voi Ny Cu\n",i);
              }
            }
          }
          break;
      case 3:
          printf("+--3. Valentine              -------+\n");
          int viTien;
          printf("Valentine ban con bao nhieu tien trong ??");
          scanf("%d", &viTien);
          // > 2000:
          // 1000- 2000:
          // 500-1000:
          // còn lại: 
          if (viTien >= 2000){
            printf("Di an bo nuong sot tieu den si si\n");
          }else if(viTien >= 1000){
            printf("Di an pizza Hutttt\n");
          }else if (viTien >= 500){
            printf("Di uong ta tua\n");
          }else{
            printf("Di uong tra da\n");
          }
          break;
      case 0:
          printf("+--0. Thoat                  -------+\n");
          exit(0);
      default:
          printf("Moi ban nhap lai!!!!!\n");
    }
  }while(chon != 0);
  	
// nhap so nguyen 
// kiem tra xem songuyen co phai so nguyen to hay khong a giúp e bài này dùng vòng for
// kieu so nguyen la int
//int soNT;
//printf("Moi ban nhap so de kiem tra");
//scanf("%d",&soNT);
//int i = 2;
//int count = 0;
//for(i;i<soNT;i++){
//	if(soNT % i == 0){
//		count++;
//	}
//}
//if(count == 0){
//	printf("So %d la so nguyen to",soNT);
//}else{
//	printf("So %d khong phai la so nguyen to ",soNT);
//}

//kieudulieu tenMang[soluong] = { };
// mang la 1 tap hop chua cac phan tu;

int array[10] = {1,2,3,4,5,6,7,8,9,10};
printf("%d ",array[1]);
//vi tri cua mang se bat dau tu 0 va ket thuc n-1
int i=0;
for(i;i<10;i++){
printf("%d ",array[i]);
}

  return 0;
}
/*
Xây dựng Menu tổ chức chương trình bao gồm các bài sau.
Menu in ra như sau (sự lựa chọn được lặp lại đến khi chọn 0): 
+--------------------------Menu------------------------+
1. Nhập tuổi NY 
2. Xếp lịch hẹn hò
3. Valentine
0. Thoát
+------------------------------------------------------+
while(điều kiện){
  //công việc
}
do{
  //công việc
}while(điều kiện)

for(khởi tạo; điều kiện; bước nhảy){
  //công việc
}
*/
