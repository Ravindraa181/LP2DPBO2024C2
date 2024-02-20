// Import library yang dibutuhkan
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std; // Menggunakan standard namespace

class Product /* Membuat Class Parent bernama Product*/
{
protected: /* Membuat atribut bersifat protected*/
    /* data */
    int id;       /* Untuk menyimpan IdProduct*/
    string nama;  /* Untuk menyimpan nama*/
    string brand; /* Untuk menyimpan brand barang */
    string price; /* Untuk menyimpan harga barang */

public:
    /* Constructor */
    Product()
    { /* Membuat Constructor Default tanpa parameter */
        ;
        this->id = 0;     /* Meng-assign atribut id dengan 0*/
        this->nama = "";  /* Meng-assign atribut nama dengan string kosong*/
        this->brand = ""; /* Meng-assign atribut brand dengan string kosong*/
        this->price = ""; /* Meng-assign atribut price dengan string kosong*/
    }

    Product(int id, string nama, string brand, string price) /* Membuat constructor dengan parameter*/
    {
        /* Meng-assign masing masing atribut dengan nilai dari parameter nama atribut sesuai namanya*/
        this->id = id;
        this->nama = nama;
        this->brand = brand;
        this->price = price;
    }

    /* Getter dan Setter*/

    /* Getter*/
    int getId()
    {
        return this->id;
    }

    string getNama()
    {
        return this->nama;
    }

    string getBrand()
    {
        return this->brand;
    }

    string getPrice()
    {
        return this->price;
    }

    /* Setter */
    void setId(int id)
    {
        this->id = id;
    }

    void setNama(string nama)
    {
        this->nama = nama;
    }

    void setBrand(string brand)
    {
        this->brand = brand;
    }

    void setPrice(string price)
    {
        this->price = price;
    }

    /* Destructor */
    /* Membuat Destructor untuk menghapus semua objek yang telah dibuat*/
    ~Product()
    {
    }
};
