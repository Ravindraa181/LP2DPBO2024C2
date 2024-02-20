from prettytable import PrettyTable # Import library untuk menampilkan data dalam bentuk tabel
from Clothing import Clothing

class Shirt(Clothing):
    __color = ""
    __sleeve_type = ""

    def __init__(self, id = 0, nama = "" ,brand = "", price = "", size = "", material = "", gender = "", color = "", sleeve_type = ""):
        super().__init__(id, nama, brand, price, size, material, gender) # Menginisialisasi setiap atribut yang ada di dalam konstruktor parent class Clothing
        self.__color = color
        self.__sleeve_type = sleeve_type
    
    # Getter dan Setter
    
    # Getter
    def getColor(self):
        return self.__color
    
    def getSleeve_type(self):
        return self.__sleeve_type
    
    # Setter
    def setColor(self, color):
        self.__color = color

    def setSleeve_type(self, sleeve_type):
        self.__sleeve_type = sleeve_type

    # Method untuk perintah pilihan
    def commandOptions(self): # Method untuk menampilkan menu program 
        print ("==============================")
        print ("======== Menu Program ========")
        print ("[0]    Exit the program       ") # 0 untuk keluar dari program
        print ("[1]    Add Data               ") # 1 untuk menambahkan Data anggota
        print ("[2]    Show list of Data      ") # 2 untuk menampilkan semua Data dalam daftar anggota
        print ("==============================")
        print ("Choose Your Menu : ", end = '')

    # Method untuk menambahkan data
    def tambahData(self, shirtList, temp, id, nama, brand, price, size, material, gender, color, sleeve_type):
        # Proses setter dari inputan ke setiap atribut dari objek temp 
        temp.setId(id)
        temp.setNama(nama)
        temp.setBrand(brand)
        temp.setPrice(price)
        temp.setSize(size)
        temp.setMaterial(material)
        temp.setGender(gender)
        temp.setColor(color)
        temp.setSleeve_type(sleeve_type)

        if not shirtList:   # jika list kosong, langsung masukan data ke dalam list
            shirtList.append(temp) # Memasukkan data ke dalam list
            print("\n Data Berhasil Di Input\n") # MEnampilkan pesan bahwa data berhasil di input 
        else: # Jika list tidak kosong
            find = False # untuk cek apakah data sudah dipakai atau belum
            i = 0 

            while not find and i < len(shirtList): # while untuk cek apakah data baru sudah ada atau belum pada data sebelumya
                if temp.getId() == shirtList[i].getId(): # jika sudah ada maka tidak dapat dimasukan kedalam list
                    find = True # dan find berubah menjadi true jika terdapat kesamaan pada id
                    print("\n Data Id telah dipakai silahkan masukkan Id yang lain") # menampilkan pesan untuk input id baru
                i += 1

            if not find: # Jika data tidak ditemukan, maka data akan dimasukan ke dalam list
                shirtList.append(temp) # Memasukan data ke dalam list
                print("\n Data Berhasil Di Input\n") # MEnampilkan pesan bahwa data berhasil di input

    # Method untuk menampilkan data
    def tampilData(self,shirtList): 
            if not shirtList: # jika list kosong maka akan mengeluarkan output untuk memasukkan data terlebih dahulu
                print("\n Data dalam list masih kosong. Silakan masukkan data terlebih dahulu.\n") # pesannya
            else: # jika list tidak kosong
                print() # slash n untuk jarak

                table = PrettyTable() # Membuat objek table dari class PrettyTable
                table.field_names = ["Id", "Nama", "Brand", "Harga", "Ukuran", "Bahan", "Gender", "Warna", "Model Lengan"] # Membuat header untuk tabel

                for i, Shirt in enumerate(shirtList): # Looping untuk menampilkan data                     
                    # Menambahkan data ke dalam tabel
                    table.add_row([Shirt.getId(), Shirt.getNama(), Shirt.getBrand(), Shirt.getPrice(), Shirt.getSize(), Shirt.getMaterial(), Shirt.getGender(), Shirt.getColor(), Shirt.getSleeve_type()])

                print(table) # menampilkan list data
                print() # slash n
            
            