# LP2DPBO2024C2

### Saya Ravindra Maulana Sahman NIM 2108724 mengerjakan Latihan 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Deskripsi Tugas
Buatlah program berbasis OOP menggunakan bahasa pemrograman C++, Java, Python, dan PHP yang mengimplementasikan konsep Multi-level Inheritance  pada kelas - kelas tersebut:
* Product: idProduct, name, brand, price
* Clothing: size, material, gender
* Shirt: color, sleeve_type


## Desain Program
![UML diagram](https://github.com/Ravindraa181/LP2DPBO2024C2/assets/100990733/1d4ed563-914a-464b-8279-ef33fbf84767)

Program ini memiliki 3 kelas diantaranya, kelas 'Product', kelas 'Clothing', kelas 'Shirt'. Ketiga kelas tersebut nantinya akan mengimplementasikan konsep Multi-level Inheritance.
1. Product (sebagai super class / parent)
  Pada class Product terdapat 4 atribut : 
  * Id -> berisikan Id produk dengan tipe data 'integer'
  * Nama -> berisikan Nama produk dengan tipe data 'string'
  * Brand -> berisikan nama brand produk dengan tipe data 'string'
  * Price -> berisikan Harga produk dengan tipe data 'string'

2. Clothing (sebagai sub class / child dari product)
  Pada class Clothing terdapat 3 atribut :
  * Size -> berisikan ukuran produk dengan tipe data 'string'
  * Material -> berisikan nama bahan produk dengan tipe data 'string'
  * Gender -> berisikan tipe gender produk dengan tipe data 'String'

3. Shirt (sebagai sub class / child dari Clothing dan Toddler dari Product)
  Pada class Shirt terdapat 3 atribut :
  * Color -> berisikan warna produk dengan tipe data 'string'
  * Sleeve_type berisikan model lengan produl dengan tipe data 'string'

Tiap atribut dari masing masing class diatas memiliki Getter dan Setternya.

Selain itu, dalam class Shirt ini juga terdapat method yang digunakan untuk memproses operasi Menu didalam program serta fitur lainnya.

* commandOptions -> untuk menampilkan menu yang dapat dipilih oleh User
* tambahData -> untuk menambahkan data Produk
* tampilData -> untuk menampilkan data Produk
* clearScreen -> untuk membersihkan layar pertama kali program dijalankan (C++, Python)

## Alur Program
Pada umumnya, semua program yang dibuat memiliki alur yang sama, hanya saja pada source code Php tidak tersedia menu input dari pengguna (data diinput secara hardcode).

Pertama program akan menampilkan menu yang dapat dipilih oleh user. User akan diminta menginput perintah sampai program berakhir. Kelima perintahnya yaitu:

* 0 -> untuk keluar dari program atau dari menu CRUD
* 1 -> untuk menjalankan perintah 'tambahData' yaitu menginput data kedalam list
* 2 -> untuk menjalankan perintah 'tampilData' yaitu untuk menampilkan output dari semua data yang telah di input oleh user dalam bentuk tabel/list sederhana.

## Dokumentasi
* Pada Program C++
#### AddData
![SSadddataC++](https://github.com/Ravindraa181/LP2DPBO2024C2/assets/100990733/7c7c7e0e-55e2-4a84-b46d-ad2093594d8a)

#### ShowData
![SSshowdataC++](https://github.com/Ravindraa181/LP2DPBO2024C2/assets/100990733/054451f8-a60d-4db0-9d08-7f9f4b5c462b)


* Pada Program PHP
#### Create Data + Show Data
![SSphp](https://github.com/Ravindraa181/LP2DPBO2024C2/assets/100990733/a79dfd22-fbd3-493e-8144-d14e44e385e3)


