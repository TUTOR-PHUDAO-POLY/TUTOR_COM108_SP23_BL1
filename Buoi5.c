#include <stdio.h>
//1.1 Hàm không trả về- không có tham số truyền vào
void vidu1(){
    int diem;
    printf("Nhap diem thi mong muon: ");
    scanf("%d", &diem);
    printf("Hy vong ban dat duoc %d diem cuoi ky\n", diem);
}
//1.2 Hàm không trả về- có tham số truyền vào
void vidu2(int diem){
    printf("Hy vong ban dat duoc %d diem cuoi ky\n", diem);
}
//2.1 Hàm có trả về- không có tham số truyền vào => return
//hàm vidu3(): hàm có trả về kiểu int ==> vidu3() có giá trị= tiền còn lại
int vidu3(){
    int viTien; //khai báo biến ví tiền
    printf("Vi ban con bao nhieu tien? ");
    scanf("%d", &viTien); //nhập số tiền có trong ví
    int giaIP;//khai báo biến giá đt ip
    printf("Mua iphone 14 pro max het bao tien? ");
    scanf("%d", &giaIP);//nhập số tiền ip vừa mua
    int conLai= viTien - giaIP; //tính số tiền còn lại trong ví
    return conLai; // trả về số tiền còn lại => mang kiểu int
}
//2.2 Hàm có trả về- có tham số truyền vào
int vidu4(int viTien){
    // int viTien; //khai báo biến ví tiền
    // printf("Vi ban con bao nhieu tien? ");
    // scanf("%d", &viTien); //nhập số tiền có trong ví
    int giaIP;//khai báo biến giá đt ip
    printf("Mua iphone 14 pro max het bao tien? ");
    scanf("%d", &giaIP);//nhập số tiền ip vừa mua
    int conLai= viTien - giaIP; //tính số tiền còn lại trong ví
    return conLai; // trả về số tiền còn lại => mang kiểu int
}

int main() {
  printf("Hello World\n");
  int chon;
  do{
    printf("------MENU------\n");
    printf("--1. vi du 1--\n");
    printf("--2. vi du 2--\n");
    printf("--3. vi du 3--\n");
    printf("--4. vi du 4--\n");
    printf("--------------\n");
    printf("--Moi chon:   \n");
    scanf("%d", &chon);
    switch(chon){
      case 1:
           printf("--1. vi du 1--\n");
           vidu1();
           break;
      case 2:
           printf("--2. vi du 2--\n");
            int diem;
            printf("Nhap diem thi mong muon: ");
            scanf("%d", &diem);
            vidu2(diem);
            vidu2(diem);
            vidu2(diem);
            vidu2(diem);
           break;
      case 3:
           printf("--3. vi du 3--\n");
           int soTienConLai= vidu3();
           printf("so tien con lai la= %d\n", soTienConLai);
           break;
      case 4:
           printf("--4. vi du 4--\n");
           int viTien; //khai báo biến ví tiền
           printf("Vi ban con bao nhieu tien? ");
           scanf("%d", &viTien); //nhập số tiền có trong ví
           int soTienConLai2= vidu4(viTien);
           printf("so tien con lai la= %d\n", soTienConLai2);
           break;
      default:
           printf("Moi ban nhap lai!!!!!\n");
           break;
    }
  } while(chon != 0);
  return 0;
}

/*
PHẦN 1: HÀM KHÔNG TRẢ VỀ
1.1 Hàm không trả về- không có tham số truyền vào
1.2 Hàm không trả về- có tham số truyền vào

PHẦN 2: HÀM CÓ TRẢ VỀ
2.1 Hàm có trả về- không có tham số truyền vào
2.2 Hàm có trả về- có tham số truyền vào
*/

// Bài 1:Nhập vào số n. Viết hàm kiểm tra n là số chẵn hay số lẻ(Sử dụng hàm)
// Bài 2: Nhập vào số tháng trong năm. Viết hàm in ra nó thuộc tháng nào trong năm(Sử dụng hàm)
// Bài 3: Nhập vào số n. Tính tổng các số lẻ từ 0 tới n ( Sử dụng hàm)
// Bài 4: Nhập vào số n. Tính tich các số lẻ từ 1 tới n ( Sử dụng hàm)
// Bài 5: Nhập vào số n. Đếm xem có bao nhiêu số chẵn từ 0 tới n ( Sử dụng hàm)

#include <stdio.h>
#include <stdlib.h>
void checkSo(){
  int n;
  printf("Moi ban nhap so n : ");
  scanf("%d",&n);
  if(n%2==0){
    printf("So %d la so chan ",n);
  }else{
    printf("So %d la so le ",n);
  }
}

void thangNam(){
  int a;
  printf("Moi nhap so thang : ");
  scanf("%d",&a);
  switch(a){
    case 1 :
    printf("Thang Mot");
    break;
    case 2 :
    printf("Thang Hai");
    break;
    case 3 :
    printf("Thang Ba");
    break;
    case 4 :
    printf("Thang Bon");
    break;
    case 5 :
    printf("Thang Nam");
    break;
    case 6 :
    printf("Thang Sau");
    break;
    case 7 :
    printf("Thang Bay");
    break;
    case 8 :
    printf("Thang Tam");
    break;
    case 9 :
    printf("Thang Chin");
    break;
    case 10 :
    printf("Thang Muoi");
    break;
    case 11 :
    printf("Thang Muoi Mot");
    break;
    case 12 :
    printf("Thang Muoi Hai");
    break;
    default :
    printf("Khong Phai Thang Trong Nam");
  }
}

void tinhTong(){
 int n;
  printf("Moi ban nhap vao so n : ");
  scanf("%d",&n);
  int tong=0;
  for(int i = 0;i<=n;i++){
    if(i%2!=0){     
      tong += i;
      printf("%d\n",i);
    }
  }
  printf("Tong cac so le tu 0 -> %d la : %d",n,tong);
}

void tinhTich(){
  int n;
  printf("Moi ban nhap vao so n : ");
  scanf("%d",&n);
  int tich=1;
    for(int i = 1;i<=n;i++){
    if(i%2!=0){     
      tich *=i;
      printf("%d\n",i);
    }
    }
      printf("Tich cac so le tu 0 -> %d la : %d",n,tich);
}
int main(){
  // checkSo();
  // thangNam();
  // tinhTong();
  tinhTich();
return 0;
}
