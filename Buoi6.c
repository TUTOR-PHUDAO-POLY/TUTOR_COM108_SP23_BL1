#include<stdio.h>
void Bai1(){ // Ham khong co kieu tra ve va khong co tham so dau ra
	        char abc[1];
			char hoTen[100];
			int namSinh;
			float canNang;
			printf("Moi ban nhap vao ten cua NYC: ");
//			fflush(stdin); Cach 1
			gets(abc); // Cach 2
			gets(hoTen); // Nhap vao tu ban phim 1 chuoi cac ky tu.
			printf("Moi ban nhap vao nam sinh cua NYC: ");
			scanf("%d",&namSinh);
			printf("Moi ban nhap vao can nang cua NYC: ");
			scanf("%f",&canNang);
		    printf("+-----------------NYC----------------+\n");
		   	printf("+          Ho va ten:");
		   	puts(hoTen);
        	printf("+          Nam sinh: %d\n",namSinh);
        	printf("+          Can nang: %0.1f\n",canNang);
	        printf("+          Tuoi: %d                  \n",2023-namSinh);
	        printf("+------------------------------------+\n");	
}
void Bai2(int n){
		int mangSoNguyen[n];// Nen khai bao sau khi da nhap n
			int i;
			for(i=0;i<n;i++){
				printf("Moi ban nhap gia tri cho phan tu %d: ",i);
				scanf("%d",&mangSoNguyen[i]);
			}
			int sum = 0;
			for(i=0;i<n;i++){
				if(mangSoNguyen[i]%2 == 1){
					sum = sum + mangSoNguyen[i];
				}
			}
			printf("Tong cac so le trong mang la: %d\n",sum);
			// Binh thuong tim gia tri lon nhat: int max = mangSoNguyen[0];
			// max < mangSoNguyen[i]
			// 7 6 4 2;
           //Tim so chan dau tien trong mang
           int max =0;
           for(i=0;i<n;i++){
           	if(mangSoNguyen[i]%2 ==0){
           		max = mangSoNguyen[i];
           		break;
			   }
		   }
            // Ngoac vuong [] la ki hieu cua mang
		   // Tim so chan lon nhat
           for(i=0;i<n;i++){
           	if(mangSoNguyen[i]%2 ==0 && max < mangSoNguyen[i]){
           		max = mangSoNguyen[i];
			   }
		   }
		   if(max == 0){
		   	printf("Khong co so chan nao trong mang\n");
		   }else
        	printf("So lon chan lon nhat trong mang la: %d\n",max);
}
int Bai2Vjp(int n){
			int mangSoNguyen[n];// Nen khai bao sau khi da nhap n
			int i;
			for(i=0;i<n;i++){
				printf("Moi ban nhap gia tri cho phan tu %d: ",i);
				scanf("%d",&mangSoNguyen[i]);
			}
			int sum = 0;
			for(i=0;i<n;i++){
				if(mangSoNguyen[i]%2 == 1){
					sum = sum + mangSoNguyen[i];
				}
			}
			printf("Tong cac so le trong mang la: %d\n",sum);
			// Binh thuong tim gia tri lon nhat: int max = mangSoNguyen[0];
			// max < mangSoNguyen[i]
			// 7 6 4 2;
           //Tim so chan dau tien trong mang
           int max =0;
           for(i=0;i<n;i++){
           	if(mangSoNguyen[i]%2 ==0){
           		max = mangSoNguyen[i];
           		break;
			   }
		   }
            // Ngoac vuong [] la ki hieu cua mang
		   // Tim so chan lon nhat
           for(i=0;i<n;i++){
           	if(mangSoNguyen[i]%2 ==0 && max < mangSoNguyen[i]){
           		max = mangSoNguyen[i];
			   }
		   }
           return max;
}
int main(){
	int chonSo;
	do{
	//Noi nay de viet Menu	
	printf("+-----------------Menu---------------+\n");
	printf("+          1.Thong tin NYC           +\n");
	printf("+          2.Tinh tong cac so le 1->n+\n");
	printf("+          3.Thong tin Vaccine       +\n");
	printf("+          4.Thoat                   +\n");
	printf("+------------------------------------+\n");
	printf("Moi ban nhap chuc nang: ");
	scanf("%d",&chonSo);
	switch(chonSo){
		case 1:{
			// Ham nhap chuoi se la gets(bien);
			// Ham xuat chuoi se la puts(bien);
		    Bai1();
			break;
			// Lam duoc nhu nay la duoc 4 diem
		}
		case 2:{
			int n;
			printf("Moi ban nhap so phan tu cua mang: ");
			scanf("%d",&n);
//		    Bai2(n);
           int max = Bai2Vjp(n);
		   if(max == 0){
		   	printf("Khong co so chan nao trong mang\n");
		   }else
        	printf("So lon chan lon nhat trong mang la: %d\n",max);
			break;
		}
		case 3:{
			printf("+----------Thong tin vaccine---------+\n");
			int n,i;
			printf("Moi nhap so luong vaccine: ");
			scanf("%d",&n);
			int mangVaccine[n]; 
			for(i=0;i<n;i++){
				printf("Moi ban nhap thoi gian hieu qua cho vaccine %d: ",i+1);
				scanf("%d",&mangVaccine[i]);
			}
			// Tim thoi gian tac dung ngan nhat
			int min = mangVaccine[0];
		    for(i=0;i<n;i++){
		    	if(min>mangVaccine[i]){
		    		min = mangVaccine[i];
				}
			}
			int max = mangVaccine[0];
		    for(i=0;i<n;i++){
		    	if(max<mangVaccine[i]){
		    		max = mangVaccine[i];
				}
			}
			int j,temp;
			for(i=0;i<n;i++){
				for(j=i+1;j<n;j++){
				 	if(mangVaccine[i]<mangVaccine[j]){
				 		temp=mangVaccine[i];
				 		mangVaccine[i]=mangVaccine[j];
				 		mangVaccine[j]=temp;
					 }
				}
			}
			printf("+--------Xuat thông tin vaccine-------+\n");
			printf("+        So luong vaccine: %d\n",n);
			printf("+        Thoi gian ngan nhat:%d\n",min);
			printf("+        Thoi gian dai nhat:%d\n",max);	
			printf("+        Tac dung sap xep theo thoi gian giam dan\n");	
			for(i =0;i<n;i++){
				printf("%d \t",mangVaccine[i]);
			}	
			printf("\n");
			break;
		}
		case 4:{
			printf("Bai bai\n");
			break;
		}
	}
	}while(chonSo != 4);
	
}
