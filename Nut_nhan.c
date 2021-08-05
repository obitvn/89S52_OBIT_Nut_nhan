// Chao mung ban den voi www.mualinhkien.vn
// Huong dan su dung kit 8051
// Lap trinh nut nhan

#include <REGX51.H>

void main(){					   //Ham main chinh
	while(1){
		if(P3_3 == 0) P1_0 = 0;	   //Nhan nut LED o PORT P1_0 sang
		if(P3_3 == 1) P1_0 = 1;	   //Khong nhan nut LED tat

		if(P3_5 == 0) P1_1 = 0;	   //Nhan nut LED o PORT P1_1 sang
		if(P3_5 == 1) P1_1 = 1;	   //Khong nhan nut LED tat

		if(P3_4 == 0) P1_2 = 0;	   //Nhan nut LED o PORT P1_2 sang
		if(P3_4 == 1) P1_2 = 1;	   //Khong nhan nut LED tat

		if(P3_7 == 0) P1_3 = 0;	   //Nhan nut LED o PORT P1_3 sang
		if(P3_7 == 1) P1_3 = 1;    //Khong nhan nut LED tat

		if(P3_6 == 0) P1_4 = 0;	   //Nhan nut LED o PORT P1_3 sang
		if(P3_6 == 1) P1_4 = 1;    //Khong nhan nut LED tat
  }
}

//Tren day là code nut nhan khi cac ban test ca 4 nut nhan
// Nhan vao se lam sang LED va khi tha ra LED se tat