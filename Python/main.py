# Saya Ravindra Maulana Sahman NIM 2108724 mengerjakan soal Latihan Praktikum 2 dalam mata kuliah DPBO untuk 
# keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

import os   # Import library os untuk mengakses fungsi-fungsi yang berhubungan dengan sistem operasi
from Shirt import Shirt # import class Shirt dari file Shirt.py

flag = True # Flag untuk menentukan apakah program akan berhenti atau tidak
shirtList = [] # List untuk menyimpan objek

while flag: # while akan terus berjalan selama flag bernilai True
    shirtObject = Shirt() # Membuat objek dari class Student
    os.system('cls' if os.name == 'nt' else 'clear') # Menghapus layar
    shirtObject.commandOptions() # Menampilkan menu

    choice = int(input()) # Meminta input dari user untuk memilih menu

    if choice == 0: # jika user memilih 0 maka program akan berhenti
        flag = False # mengubah nilai flag menjadi flase agar program berhenti
    elif choice == 1: # jika user memilih 1 maka akan meminta inputan untuk dimasukkan kedalam list
        # Meminta inputan dari semua atribut yang ada didalam list
        id = int(input ("\nMasukkan Id              : "))    
        nama = input ("Masukkan Nama            : ")    
        brand = input ("Masukkan Brand           : ")    
        price = input ("Masukkan Harga           : ")    
        size = input ("Masukkan Ukuran          : ")    
        material = input ("Masukkan Bahan           : ")    
        gender = input ("Masukkan Gender          : ")    
        color = input ("Masukkan Warna           : ")    
        sleeve_type = input ("Masukkan Model Lengan    : ")

        # Memanggil method untuk menambahkan data
        shirtObject.tambahData(shirtList, shirtObject, id, nama, brand, price, size, material, gender, color, sleeve_type)
    elif choice == 2: # Jika memilih 3 maka akan menampilkan data dalam list 
        shirtObject.tampilData(shirtList) # Memangil method untuk menampilkan data dalam list
    else: # Jika input selain 0,1,2 maka akan mengeluarkan pesan
        print("\n Inputan yang anda masukkan tidak ada didalam Menu, Silahkan coba Kembali")

    if(choice !=0): # Jika user memilih menu selain 0, maka akan menampilkan pesan untuk menekan tombol apapun untuk melanjutkan
        os.system("pause") # Menampilkan pesan untuk menekan tombol apapun untuk melanjutkan