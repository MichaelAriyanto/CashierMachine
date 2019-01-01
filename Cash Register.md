# Cash Register

- Description
- Installation
- Usage
- License



### Description

Program Kasir ini merupakan sebuah program yang dibuat untuk membantu pengusaha toko (e.g. minimarket) dalam melakukan perhitungan penjualan barang sehingga proses jual-beli dapat berlangsung dengan lancar. 

Program ini mempunyai kemampuan untuk menjalankan kasir sederhana yang dapat mempercepat proses menghitung total biaya belanjaan dan kembalian pembeli. Fitur dari program ini termasuk :

Program ini mempunyai kemampuan untuk menjalankan kasir sederhana yang dapat mempercepat proses menghitung total biaya belanjaan dan kembalian pembeli. Fitur dari program ini termasuk

- Input barang yang mudah dan cepat  
- Penjumlahan otomatis biaya belanjaan & kembalian
- Mengubah harga barang jualan 
- Sistem admin dengan password untuk menjaga keamanan harga barang
- Sistem antrian



### Installation

System Requirements: Windows 
Untuk dapat menggunakan Dijk-Path, Anda perlu melakukan hal berikut :

1. Mendownload source-code nya terlebih dahulu.
2. Buka source-code menggunakan C/C++ IDE.
3. Kemudian, jalankan dengan cara meng-compile main-program.c



### Usage

#### Main Display

![Untitled](C:\Users\Michael\Pictures\proyek\Untitled.png)

Menu utama pada program ini terdiri dari 5 fitur, yaitu 

1. Menjalankan program (kasir)

2. Masuk antrian

3. Help

4. Admin Login

5. Exit


#### <u>Program Kasir</u>

![Untitled1](C:\Users\Michael\Pictures\proyek\Untitled1.png)

Untuk melakukan perhitungan pembelian dengan mesin kasir, pengguna memasukan barcode untuk benda yang ingin dibeli (1-20) lalu tekan enter untuk terus melanjutkan pembelian. Setelah pengguna selesai menginput barang-barang yang ingin dibeli, masukan input 0 lalu tekan enter untuk menghitung harga total dari barang-barang yang dibeli. Masukan jumlah uang pembeli dan program akan menghitung kembalian pembeli.



#### <u>Antrian</u>

![Untitled8](C:\Users\Michael\Pictures\proyek\Untitled8.png)

Menu antrian terdiri dari 4 macam fitur, yaitu 

1. Enter queue
2. Next queue (hanya dapat diakses oleh admin)
3. Display queue
4. Exit



##### Enter Queue

Digunakan untuk memasukan antrian.



##### Next Queue

Fitur yang hanya dapat digunakan oleh admin yang berfungsi untuk memanggil nomor antrian pembeli.



##### Display Queue

Digunakan untuk menampilkan urutan pembeli.



##### Exit

Exit digunakan untuk keluar dari menu antrian dan kembali menuju menu / display utama.



#### <u>Help</u>

![Untitled2](C:\Users\Michael\Pictures\proyek\Untitled2.png)

Menu help berisi panduan singkat untuk menjalankan program kasir ini.



#### <u>Menu Admin</u>

![Untitled3](C:\Users\Michael\Pictures\proyek\Untitled3.png)

Sebelum pengguna masuk ke menu admin, pengguna diharuskan untuk memasukan password untuk dapat mengakses menu admin.



![Untitled4](C:\Users\Michael\Pictures\proyek\Untitled4.png)

Menu admin terdiri dari 4 macam fitur, yaitu 

1. Edit harga barang
2. Ganti password
3. Help
4. Exit



##### Edit Harga Barang

![Untitled9](C:\Users\Michael\Pictures\proyek\Untitled9.png)

Fitur ini digunakan untuk mengubah harga sebuah barang pada mesin kasir. Dengan menggunakan database external, harga barang yang diubah melalui mesin kasir dapat diubah secara permanen dan setelah mematikan program, data harga yang diubah akan tetap sama.



##### Ganti Password

![Untitled5](C:\Users\Michael\Pictures\proyek\Untitled5.png)

Menu ganti password diawali dengan memasukan password admin pada mulanya, lalu program akan meminta pengguna untuk memasukan password baru anda.



##### Help

![Untitled7](C:\Users\Michael\Pictures\proyek\Untitled7.png)

Berisi panduan singkat tentang cara penggunaan program.



##### Exit

![Untitled6](C:\Users\Michael\Pictures\proyek\Untitled6.png)

Menu untuk keluar dari program kasir.



#### <u>Exit</u>

![Untitled6](C:\Users\Michael\Pictures\proyek\Untitled6.png)

Menu untuk keluar dari program kasir.



### License

MIT License