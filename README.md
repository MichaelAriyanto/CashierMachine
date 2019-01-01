# CashierMachine
- Description
- Installation
- Usage
- License



## Description

Program Kasir ini merupakan sebuah program yang dibuat untuk membantu pengusaha toko (e.g. minimarket) dalam melakukan perhitungan penjualan barang sehingga proses jual-beli dapat berlangsung dengan lancar. 

Program ini mempunyai kemampuan untuk menjalankan kasir sederhana yang dapat mempercepat proses menghitung total biaya belanjaan dan kembalian pembeli. Fitur dari program ini termasuk :

Program ini mempunyai kemampuan untuk menjalankan kasir sederhana yang dapat mempercepat proses menghitung total biaya belanjaan dan kembalian pembeli. Fitur dari program ini termasuk

- Input barang yang mudah dan cepat  
- Penjumlahan otomatis biaya belanjaan & kembalian
- Mengubah harga barang jualan 
- Sistem admin dengan password untuk menjaga keamanan harga barang
- Sistem antrian




## Installation

System Requirements: Windows 
Untuk dapat menggunakan Cashier Machine, Anda perlu melakukan hal berikut :

1. Mendownload source-code & text nya terlebih dahulu.
2. Buka source-code menggunakan C/C++ IDE.
3. Kemudian, jalankan dengan cara meng-compile main-program.c




## Usage

### Main Display

![untitled](https://user-images.githubusercontent.com/39557439/50573073-60996d00-0dff-11e9-9d58-095b4c6bd4ec.png)

Menu utama pada program ini terdiri dari 5 fitur, yaitu 

1. Menjalankan program (kasir)
2. Masuk antrian
3. Help
4. Admin Login
5. Exit

### <u>Program Kasir</u>

![untitled1](https://user-images.githubusercontent.com/39557439/50573074-62fbc700-0dff-11e9-82a3-d40105685e56.png)

Untuk melakukan perhitungan pembelian dengan mesin kasir, pengguna memasukan barcode untuk benda yang ingin dibeli (1-20) lalu tekan enter untuk terus melanjutkan pembelian. Setelah pengguna selesai menginput barang-barang yang ingin dibeli, masukan input 0 lalu tekan enter untuk menghitung harga total dari barang-barang yang dibeli. Masukan jumlah uang pembeli dan program akan menghitung kembalian pembeli.



### <u>Antrian</u>

![untitled8](https://user-images.githubusercontent.com/39557439/50573081-642cf400-0dff-11e9-8d0c-aca0b31c5bc9.png)

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



### <u>Help</u>

![untitled2](https://user-images.githubusercontent.com/39557439/50573075-62fbc700-0dff-11e9-8d80-5b47f0a353a3.png)

Menu help berisi panduan singkat untuk menjalankan program kasir ini.



### <u>Menu Admin</u>

![untitled3](https://user-images.githubusercontent.com/39557439/50573076-62fbc700-0dff-11e9-84c1-9f10d2825bea.png)

Sebelum pengguna masuk ke menu admin, pengguna diharuskan untuk memasukan password untuk dapat mengakses menu admin.



![untitled4](https://user-images.githubusercontent.com/39557439/50573077-63945d80-0dff-11e9-9c89-7729ff9b62fe.png)

Menu admin terdiri dari 4 macam fitur, yaitu 

1. Edit harga barang
2. Ganti password
3. Help
4. Exit



##### Edit Harga Barang

![untitled9](https://user-images.githubusercontent.com/39557439/50573082-642cf400-0dff-11e9-83e9-8ec4b73d0528.png)

Fitur ini digunakan untuk mengubah harga sebuah barang pada mesin kasir. Dengan menggunakan database external, harga barang yang diubah melalui mesin kasir dapat diubah secara permanen dan setelah mematikan program, data harga yang diubah akan tetap sama.



##### Ganti Password

![untitled5](https://user-images.githubusercontent.com/39557439/50573078-63945d80-0dff-11e9-869a-c542eb3e6a58.png)

Menu ganti password diawali dengan memasukan password admin pada mulanya, lalu program akan meminta pengguna untuk memasukan password baru anda.



##### Help

![untitled7](https://user-images.githubusercontent.com/39557439/50573080-642cf400-0dff-11e9-975a-40c1977ab794.png)

Berisi panduan singkat tentang cara penggunaan program.



##### Exit

![untitled6](https://user-images.githubusercontent.com/39557439/50573079-63945d80-0dff-11e9-9354-01df4c68b6d7.png)

Menu untuk keluar dari program kasir.



### <u>Exit</u>

![untitled6](https://user-images.githubusercontent.com/39557439/50573079-63945d80-0dff-11e9-9354-01df4c68b6d7.png)

Menu untuk keluar dari program kasir.



## License

MIT License
