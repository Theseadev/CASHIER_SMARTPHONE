#include <iostream>

using namespace std;
int main (){
	
	//deklarasi variabel
	int brand;	
	long bayar, kembali, total;
	long tipe, unit;
	long tipe1, unit1;
	long uang, uang1;
	string pertanyaan;
	
	
	cout<<"========================================="<<endl;
	cout<<"NAMA	: MUHAMMAD FAHRUL BAHRI             "<<endl;
	cout<<"NIM	: 230104040057                      "<<endl;
	cout<<"KELAS: TI23B                             "<<endl;
	cout<<"========================================="<<endl;
	cout<<"\n";
	while (true) {
	cout<<"========================================="<<endl;
	cout<<"===== APLIKASI PENJUALAN SMARTPHONE ====="<<endl;
	cout<<"========================================="<<endl;
	cout<<"        | LIST BRAND SMARTPHONE |        "<<endl;
	cout<<"========================================="<<endl;
	cout<<"1. SAMSUNG                               "<<endl;
	cout<<"2. REALME                                "<<endl;
	cout<<"========================================="<<endl;
	cout<<"SILAHKAN PILIH : ";
	cin>>brand;
	cout<<"========================================="<<endl;
	cout<<"\n";
	
	switch (brand) {
	//SAMSUNG
	case 1:
	cout<<"========================================="<<endl;
	cout<<"=====            SAMSUNG            ====="<<endl;
	cout<<"========================================="<<endl;
	cout<<"|      TIPE      |    HARGA      |       "<<endl;
	cout<<"========================================="<<endl;
	cout<<"| 1. SAMSUNG A55 | Rp 5.999.000  |       "<<endl;
	cout<<"| 2. SAMSUNG A35 | Rp 4.499.000  |       "<<endl;
	cout<<"| 3. SAMSUNG M54 | Rp 6.499.000  |       "<<endl;
	cout<<"| 4. SAMSUNG S24 | Rp 15.999.000 |       "<<endl;
	cout<<"| 5. SAMSUNG A15 | Rp 3.599.000  |       "<<endl;
	cout<<"========================================="<<endl;
	cout<<"SILAHKAN PILIH TIPE : ";
	cin>>tipe;
	cout<<"========================================="<<endl;
	cout<<"\n";
	
	//SAMSUNG A55
	if (tipe == 1){
	cout<<"========================================="<<endl;
	cout<<"=====   SAMSUNG A55 (5.999.000)     ====="<<endl;
	cout<<"========================================="<<endl;
	cout<<"| INFORMASI |   STATUS    |              "<<endl;
	cout<<"========================================="<<endl;
	cout<<"| SIZE      | 6.6 INCHES  |              "<<endl;
	cout<<"| SIM       | DUAL SIM    |              "<<endl;
	cout<<"| CHIPSET   | EXYNOS 1480 |              "<<endl;
	cout<<"| MEMORY    | 8/128 8/256 |              "<<endl;
	cout<<"| USB       | TYPE-C      |              "<<endl;
	cout<<"========================================="<<endl;
	cout<<"BERAPA UNIT YANG ANDA BELI : ";
	cin>>unit;
	uang = unit*5999000;
	cout<<"UANG YANG ANDA HARUS BAYAR : Rp."<<uang<<endl;
	cout<<"========================================="<<endl;
	}else
	
	//SAMSUNG A35
	if (tipe == 2){
	cout<<"========================================="<<endl;
	cout<<"=====   SAMSUNG A35 (4.499.000)     ====="<<endl;
	cout<<"========================================="<<endl;
	cout<<"| INFORMASI |   STATUS    |              "<<endl;
	cout<<"========================================="<<endl;
	cout<<"| SIZE      | 6.6 INCHES  |              "<<endl;
	cout<<"| SIM       | DUAL SIM    |              "<<endl;
	cout<<"| CHIPSET   | EXYNOS 1380 |              "<<endl;
	cout<<"| MEMORY    | 6/128 8/128 |              "<<endl;
	cout<<"| USB       | TYPE-C      |              "<<endl;
	cout<<"========================================="<<endl;
	cout<<"BERAPA UNIT YANG ANDA BELI : ";
	cin>>unit;
	uang = unit*4499000;
	cout<<"UANG YANG ANDA HARUS BAYAR : Rp."<<uang<<endl;
	cout<<"========================================="<<endl;
	}else
	
	//SAMSUNG M54
	if (tipe == 3){
	cout<<"========================================="<<endl;
	cout<<"=====   SAMSUNG M54 (6.499.000)     ====="<<endl;
	cout<<"========================================="<<endl;
	cout<<"| INFORMASI |   STATUS    |              "<<endl;
	cout<<"========================================="<<endl;
	cout<<"| SIZE      | 6.7 INCHES  |              "<<endl;
	cout<<"| SIM       | DUAL SIM    |              "<<endl;
	cout<<"| CHIPSET   | EXYNOS 1380 |              "<<endl;
	cout<<"| MEMORY    | 8/128 8/256 |              "<<endl;
	cout<<"| USB       | TYPE-C      |              "<<endl;
	cout<<"========================================="<<endl;
	cout<<"BERAPA UNIT YANG ANDA BELI : ";
	cin>>unit;
	uang = unit*6499000;
	cout<<"UANG YANG ANDA HARUS BAYAR : Rp."<<uang<<endl;
	cout<<"========================================="<<endl;
	}else
	
	//SAMSUNG S24
	if (tipe == 4){
	cout<<"========================================="<<endl;
	cout<<"=====   SAMSUNG S24 (15.999.000)    ====="<<endl;
	cout<<"========================================="<<endl;
	cout<<"| INFORMASI |       STATUS       |       "<<endl;
	cout<<"========================================="<<endl;
	cout<<"| SIZE      | 6.2 INCHES         |       "<<endl;
	cout<<"| SIM       | DUAL SIM           |       "<<endl;
	cout<<"| CHIPSET   | SNAPDRAGON 8 GEN 3 |       "<<endl;
	cout<<"| MEMORY    | 8/128 8/256        |       "<<endl;
	cout<<"| USB       | TYPE-C             |       "<<endl;
	cout<<"========================================="<<endl;
	cout<<"BERAPA UNIT YANG ANDA BELI : ";
	cin>>unit;
	uang = unit*15999000;
	cout<<"UANG YANG ANDA HARUS BAYAR : Rp."<<uang<<endl;
	cout<<"========================================="<<endl;
	}else
	
	//SAMSUNG A15
	if (tipe == 5){
	cout<<"========================================="<<endl;
	cout<<"=====   SAMSUNG A15 (3.599.000)     ====="<<endl;
	cout<<"========================================="<<endl;
	cout<<"| INFORMASI |   STATUS    |              "<<endl;
	cout<<"========================================="<<endl;
	cout<<"| SIZE      | 6.5 INCHES  |              "<<endl;
	cout<<"| SIM       | DUAL SIM    |              "<<endl;
	cout<<"| CHIPSET   | HELIO G99   |              "<<endl;
	cout<<"| MEMORY    | 4/128 6/128 |              "<<endl;
	cout<<"| USB       | TYPE-C      |              "<<endl;
	cout<<"========================================="<<endl;
	cout<<"BERAPA UNIT YANG ANDA BELI : ";
	cin>>unit;
	uang = unit*3599000;
	cout<<"UANG YANG ANDA HARUS BAYAR : Rp."<<uang<<endl;
	cout<<"========================================="<<endl;
	}
	break;
	
	//REALME
	case 2:
	cout<<"========================================"<<endl;
	cout<<"=====            REALME            ====="<<endl;
	cout<<"========================================"<<endl;
	cout<<"|      TIPE           |    HARGA      |  "<<endl;
	cout<<"========================================="<<endl;
	cout<<"| 1. REALME 10        | Rp 1.599.000  |  "<<endl;
	cout<<"| 2. REALME C53       | Rp 1.899.000  |  "<<endl;
	cout<<"| 3. REALME NARZO 50i | Rp 1.299.000  |  "<<endl;
	cout<<"| 4. REALME NOTE 50   | Rp 1.499.000  |  "<<endl;
	cout<<"| 5. REALME C15       | Rp 1.549.000  |  "<<endl;
	cout<<"========================================="<<endl;
	cout<<"SILAHKAN PILIH TIPE : ";
	cin>>tipe1;
	cout<<"========================================="<<endl;
	cout<<"\n";
	
	//SAMSUNG A55
	if (tipe1 == 1){
	cout<<"========================================="<<endl;
	cout<<"=====     REALME 10 (1.599.000)     ====="<<endl;
	cout<<"========================================="<<endl;
	cout<<"| INFORMASI |   STATUS    |              "<<endl;
	cout<<"========================================="<<endl;
	cout<<"| SIZE      | 6.4 INCHES  |              "<<endl;
	cout<<"| SIM       | DUAL SIM    |              "<<endl;
	cout<<"| CHIPSET   | HELIO G99   |              "<<endl;
	cout<<"| MEMORY    | 8/128 8/256 |              "<<endl;
	cout<<"| USB       | TYPE-C      |              "<<endl;
	cout<<"========================================="<<endl;
	cout<<"BERAPA UNIT YANG ANDA BELI : ";
	cin>>unit1;
	uang1 = unit1*1599000;
	cout<<"UANG YANG ANDA HARUS BAYAR : Rp."<<uang1<<endl;
	cout<<"========================================="<<endl;
	}else
	
	//SAMSUNG A35
	if (tipe1 == 2){
	cout<<"========================================="<<endl;
	cout<<"=====    REALME C53 (1.899.000)     ====="<<endl;
	cout<<"========================================="<<endl;
	cout<<"| INFORMASI |      STATUS       |        "<<endl;
	cout<<"========================================="<<endl;
	cout<<"| SIZE      | 6.74 INCHES       |        "<<endl;
	cout<<"| SIM       | DUAL SIM          |        "<<endl;
	cout<<"| CHIPSET   | UNISOC TIGER T612 |        "<<endl;
	cout<<"| MEMORY    | 6/128 8/256       |        "<<endl;
	cout<<"| USB       | TYPE-C            |        "<<endl;
	cout<<"========================================="<<endl;
	cout<<"BERAPA UNIT YANG ANDA BELI : ";
	cin>>unit1;
	uang1 = unit1*1899000;
	cout<<"UANG YANG ANDA HARUS BAYAR : Rp."<<uang1<<endl;
	cout<<"========================================="<<endl;
	}else
	
	//SAMSUNG M54
	if (tipe1 == 3){
	cout<<"========================================="<<endl;
	cout<<"=====  REALME NARZO 50i (1.299.000) ====="<<endl;
	cout<<"========================================="<<endl;
	cout<<"| INFORMASI |    STATUS     |            "<<endl;
	cout<<"========================================="<<endl;
	cout<<"| SIZE      | 6.5 INCHES    |            "<<endl;
	cout<<"| SIM       | DUAL SIM      |            "<<endl;
	cout<<"| CHIPSET   | UNISOC SC9863 |            "<<endl;
	cout<<"| MEMORY    | 2/32 4/64     |            "<<endl;
	cout<<"| USB       | MICRO-USB     |            "<<endl;
	cout<<"========================================="<<endl;
	cout<<"BERAPA UNIT YANG ANDA BELI : ";
	cin>>unit1;
	uang1 = unit1*1299000;
	cout<<"UANG YANG ANDA HARUS BAYAR : Rp."<<uang1<<endl;
	cout<<"========================================="<<endl;
	}else
	
	//SAMSUNG S24
	if (tipe1 == 4){
	cout<<"========================================="<<endl;
	cout<<"=====  REALME NOTE 50 (1.499.000)  ====="<<endl;
	cout<<"========================================="<<endl;
	cout<<"| INFORMASI |       STATUS       |       "<<endl;
	cout<<"========================================="<<endl;
	cout<<"| SIZE      | 6.2 INCHES         |       "<<endl;
	cout<<"| SIM       | DUAL SIM           |       "<<endl;
	cout<<"| CHIPSET   | UNISOC TIGER T612  |       "<<endl;
	cout<<"| MEMORY    | 4/64 8/128         |       "<<endl;
	cout<<"| USB       | TYPE-C             |       "<<endl;
	cout<<"========================================="<<endl;
	cout<<"BERAPA UNIT YANG ANDA BELI : ";
	cin>>unit1;
	uang1 = unit1*1499000;
	cout<<"UANG YANG ANDA HARUS BAYAR : Rp."<<uang1<<endl;
	cout<<"========================================="<<endl;
	}else
	
	//SAMSUNG A15
	if (tipe1 == 5){
	cout<<"========================================="<<endl;
	cout<<"=====    REALME C15 (1.549.000)     ====="<<endl;
	cout<<"========================================="<<endl;
	cout<<"| INFORMASI |   STATUS    |              "<<endl;
	cout<<"========================================="<<endl;
	cout<<"| SIZE      | 6.5 INCHES  |              "<<endl;
	cout<<"| SIM       | DUAL SIM    |              "<<endl;
	cout<<"| CHIPSET   | HELIO G35   |              "<<endl;
	cout<<"| MEMORY    | 3/64 4/128  |              "<<endl;
	cout<<"| USB       | MICRO-USB   |              "<<endl;
	cout<<"========================================="<<endl;
	cout<<"BERAPA UNIT YANG ANDA BELI : ";
	cin>>unit1;
	uang1 = unit1*1549000;
	cout<<"UANG YANG ANDA HARUS BAYAR : Rp."<<uang1<<endl;
	cout<<"========================================="<<endl;
	}
	break;	
	}
	
  	cout<< "Apakah ingin memesan lagi (y/n)	: ";
 	cin>>pertanyaan;
 	cout<<"========================================="<<endl;
 	if(pertanyaan != "y"){
  	break;
  	
  	}
  	
	} 
	
	while (true) {
	total=uang+uang1;
	cout<<"total semua belanjaan anda: Rp."<<total<<endl;
	cout<<"masukkan uang yang akan anda bayar : Rp.";
  	cin>>bayar;
  	kembali=bayar-total;
  		
		  
	if (bayar < total){
  	cout<<"UANG YANG ANDA BAYAR KURANG!!!!"<<endl;
  	cout<<"========================================="<<endl;
	}else 
		
	if(bayar > total){
	cout<<"kembalian anda : Rp."<<kembali<<endl;
	break;
	}
	
	}
	cout<<"===========================\n";
	cout<<"TERIMA KASIH TELAH MEMESAN\n";
	cout<<"===========================\n";
  	return 0;
}

	
	
	


