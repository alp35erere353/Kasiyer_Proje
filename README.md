# Kasiyer Para Üstü Hesaplama Sistemi (Cashier Change Calculator)

Bu proje, bir mağazada kasiyerin ürün tutarı ile müşterinin ödediği para arasındaki para üstünü en az sayıda banknot ve madeni para kullanarak hesaplayan bir **C programlama dili** uygulamasıdır.

##  Projenin Amacı
Program, müşterinin ödediği para ile ürün tutarı arasındaki farkı hesaplar ve bu farkı en büyük küpürden (200 TL) en küçük madeni paraya (1 kuruş) kadar en az parça kullanarak müşteriye nasıl iade edeceğini gösterir.

##  Geliştirme Süeci ve Kullanılan Araçlar
* **Programlama Dili:** C dili (Yalnızca standart giriş/çıkış kütüphanesi olan `<stdio.h>` kullanılmıştır).
* **Akış Şeması:** Algoritma adımlarını planlamak üzere standart sembollerle **A4 kağıdına el çizimi** olarak tasarlanmıştır.
* **Sürüm Kontrolü:** Proje kodları GitHub reposu üzerinden yönetilmiş ve sunulmuştur.

##  Teknik Zorluklar ve Çözü Yaklaşımı (Kuruş ve Yuvarlama Mantığı)
1. **Ondalıklı Sayı Hassasiyeti (`Float Precision`):** Bilgisayarlar ondalıklı sayıları (`float`) ikilik sistemde saklarken küçük kayıplar yaşayabilir (Örn: `18.70` ve `20.00` işleminde `1.30` yerine `1.2999...` gibi değerler oluşabilir).
2. **Çözüm (Matematiksel Yuvarlama):** Bu hatayı önlemek için para üstü önce 100 ile çarpılarak kuruş cinsinden tam sayıya (`int`) dönüştürülmüştür. Harici kütüphane (`<math.h>`) kullanılmadan, olası kayıpları doğru noktaya yuvarlamak için **`+ 0.5` hilesi** uygulanarak tamsayıya zorlanmıştır:
   ```c
   toplam_kurus = (int)((para_ustu_float * 100) + 0.5);
