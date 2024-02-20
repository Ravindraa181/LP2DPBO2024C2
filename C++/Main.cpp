/*
Saya Ravindra Maulana Sahman NIM 2108724 mengerjakan soal Latihan Praktikum 2 dalam mata kuliah DPBO untuk
keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin
*/

#include "Shirt.cpp" /* Import file Shirt.cpp*/

using namespace std; /* Menggunakan standard namespace */

int main()
{

    bool flag = true;      /* Deklarasi variabel flag untuk menentukan apakah program akan berulang atau tidak */
    Shirt shirtObject;     /* Deklarasi objek shirtObject dari kelas Shirt s*/
    list<Shirt> shirtList; /* Deklarasi list dari ShirtList dari kelas Shirt*/

    do /* do while untuk menampilkan menu program dan meminta inputan dari user */
    {
        system("cls");                /* Membersihkan layar */
        shirtObject.commandOptions(); /* Menampilkan menu program */

        int input;    /* Variable input untuk menyimpan masukan dari user untuk menjalankan menu program */
        cin >> input; /* Meminta masukan dari user untuk input */

        /* Deklarasi variabel masing masing atribut yang akan digunakan dalam program ini */
        int id;
        string nama, brand, price, size, material, gender, color, sleeve_type;

        switch (input) /* Switch case untuk menentukan apa yang akan dilakukan berdasarkan input dari user */
        {
        case 0:           /* Jika input = 0, maka program akan berhenti */
            flag = false; /* Mengubah nilai flag menjadi false agar program berhenti */
            break;

        case 1: /* Jika input = 1, maka akan meminta inputan dari user untuk mengisi data yang akan dimasukan kedalam list */

            /* Masing masing meminta masukan dari user untuk disimpan kedalam list */
            cout << "\nMasukkan Id              : ";
            cin >> id;
            cout << "Masukkan Nama            : ";
            cin >> nama;
            cout << "Masukkan Brand           : ";
            cin >> brand;
            cout << "Masukkan Harga           : ";
            cin >> price;
            cout << "Masukkan Ukuran          : ";
            cin >> size;
            cout << "Masukkan Bahan           : ";
            cin >> material;
            cout << "Masukkan Gender          : ";
            cin >> gender;
            cout << "Masukkan Warna           : ";
            cin >> color;
            cout << "Masukkan Model Lengan    : ";
            cin >> sleeve_type;

            /* Memanggil method untuk menambahkan data kedalam list */
            shirtObject.tambahData(shirtList, shirtObject, id, nama, brand, price, size, material, gender, color, sleeve_type);
            break;
        case 2: /* Jika input = 2, maka akan menampilkan list dari seluruh data */
            shirtObject.tampilData(shirtList);
            break;
        default: /* Jika inputan selain 0,1,2, maka akan menampilkan pesan peringatan */
            cout << "\n Inputan yang anda masukkan tidak ada didalam Menu, Silahkan coba Kembali";
            break;
        }

        if (input != 0) /* Jika input tidak sama dengan 0, maka akan menampilkan 2 enter dan mempause program */
        {
            cout << "\n\n";
            system("pause"); /* Mempaus program */
        }

    } while (flag == true); /* Loop akan berhenti jika nilai flag false atau jika user memasukkan nilai 0*/

    return 0;
}