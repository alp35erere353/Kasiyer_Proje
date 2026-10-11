#include <stdio.h>
int main() {
    float urun_tutar, odenen_para, para_ustu_float;
    int toplam_kurus;
    
    int adet_200 = 0, adet_100 = 0, adet_50 = 0, adet_20 = 0, adet_10 = 0, adet_5 = 0, adet_1 = 0;
    int kurus_50 = 0, kurus_25 = 0, kurus_10 = 0, kurus_5 = 0, kurus_1 = 0;
    int toplam_kupur_sayisi = 0;
    
    // 1. Kullanıcıdan verilerin alınması
    printf("Urun tutarini giriniz (TL): ");
    scanf("%f", &urun_tutar);
    
    printf("Odenen parayi giriniz (TL): ");
    scanf("%f", &odenen_para);
    
    // 2. Para üstü hesabı ve hassasiyet hatasını önleyen doğru yuvarlama yöntemi
    para_ustu_float = odenen_para - urun_tutar;
    toplam_kurus = (int)((para_ustu_float * 100) + 0.5);
    
    // 3. En az sayıda küpür (banknot/madeni para) kuralına göre dağılım hesabı
    adet_200 = toplam_kurus / 20000;
    toplam_kurus = toplam_kurus % 20000;
    
    adet_100 = toplam_kurus / 10000;
    toplam_kurus = toplam_kurus % 10000;
    
    adet_50 = toplam_kurus / 5000;
    toplam_kurus = toplam_kurus % 5000;
    
    adet_20 = toplam_kurus / 2000;
    toplam_kurus = toplam_kurus % 2000;

    adet_10 = toplam_kurus / 1000;
    toplam_kurus = toplam_kurus % 1000;
    
    adet_5 = toplam_kurus / 500;
    toplam_kurus = toplam_kurus % 500;
    
    adet_1 = toplam_kurus / 100;
    toplam_kurus = toplam_kurus % 100;
    
    kurus_50 = toplam_kurus / 50;
    toplam_kurus = toplam_kurus % 50;
    
    kurus_25 = toplam_kurus / 25;
    toplam_kurus = toplam_kurus % 25;
    
    kurus_10 = toplam_kurus / 10;
    toplam_kurus = toplam_kurus % 10;
    
    kurus_5 = toplam_kurus / 5; 
    toplam_kurus = toplam_kurus % 5;
    
    kurus_1 = toplam_kurus / 1;
    toplam_kurus = toplam_kurus % 1;
    
    // 4. Toplam küpür sayısının hesaplanması
    toplam_kupur_sayisi = adet_200 + adet_100 + adet_50 + adet_20 + adet_10 + adet_5 + adet_1 + 
                          kurus_50 + kurus_25 + kurus_10 + kurus_5 + kurus_1;
    
    // 5. Raporun ekrana yazdırılması (En az küpür detayıyla)
    printf("\n--- PARA USTU RAPORU ---\n");
    printf("Toplam Verilen Kupur/Para Sayisi: %d\n", toplam_kupur_sayisi);
     
    printf("%d adet 200 TL\n", adet_200);
    printf("%d adet 100 TL\n", adet_100);
    printf("%d adet 50 TL\n", adet_50);
    printf("%d adet 20 TL\n", adet_20);
    printf("%d adet 10 TL\n", adet_10);
    printf("%d adet 5 TL\n", adet_5);
    printf("%d adet 1 TL\n", adet_1);
    printf("%d adet 50 kurus\n", kurus_50);
    printf("%d adet 25 kurus\n", kurus_25);
    printf("%d adet 10 kurus\n", kurus_10);
    printf("%d adet 5 kurus\n", kurus_5);
    printf("%d adet 1 kurus\n", kurus_1);
    
    return 0;
}
