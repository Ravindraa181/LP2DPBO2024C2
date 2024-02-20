#include "Clothing.cpp" /* Import file Product.cpp */

using namespace std; // Menggunakan standard namespace

class Shirt : public Clothing /* Membuat Class cucu bernama Shirt*/
{
protected:
    /* data */
    string color;
    string sleeve_type;

public:
    /* Constructor */
    Shirt() : Clothing() /* Membuat Constructor default tanpa isi parameter */
    {
        this->color = "";
        this->sleeve_type = "";
    }

    /* Membuat constructor dengan isi parameter */
    Shirt(int id, string nama, string brand, string price, string size, string material, string gender, string color, string sleeve_type) : Clothing(id, nama, brand, price, size, material, gender)
    {
        this->color = color;
        this->sleeve_type = sleeve_type;
    }

    /* Getter */
    string getColor()
    {
        return this->color;
    }

    string getSleeve_type()
    {
        return this->sleeve_type;
    }

    /* Setter */
    void setColor(string color)
    {
        this->color = color;
    }

    void setSleeve_type(string sleeve_type)
    {
        this->sleeve_type = sleeve_type;
    }

    /* Method untuk perintah pilihan */
    void commandOptions() // Method untuk menampilkan menu program
    {
        cout << "==============================\n";
        cout << "======== Menu Program ========\n";
        cout << "[0]    Exit the program       \n"; // 0 untuk keluar dari program
        cout << "[1]    Add Data               \n"; // 1 untuk menambahkan Data anggota
        cout << "[2]    Show list of Data      \n"; // 2 untuk menampilkan semua Data dalam daftar anggota
        cout << "==============================\n";
        cout << "Choose Your Menu : ";
    }

    /* Method untuk menambahkan data */
    void tambahData(list<Shirt> &shirtList, Shirt temp, int id, string nama, string brand, string price,
                    string size, string material, string gender, string color, string sleeve_type)
    {
        /* Proses setter dari inputan ke setiap atribut dari obbjek temp */
        temp.setId(id);
        temp.setNama(nama);
        temp.setBrand(brand);
        temp.setPrice(price);
        temp.setSize(size);
        temp.setMaterial(material);
        temp.setGender(gender);
        temp.setColor(color);
        temp.setSleeve_type(sleeve_type);

        if (shirtList.empty())
        {                                          /* jika list kosong, langsung masukan data ke dalam list*/
            shirtList.push_back(temp);             /* Memasukkan data ke dalam list*/
            cout << "\n Data Berhasil Di Input\n"; /* MEnampilkan pesan bahwa data berhasil di input*/
        }
        else /* Jika list tidak kosong*/
        {
            bool find = false;                            /* untuk mengecek apakah data sudah ada atau belum, dengan false sebagai default bahwa data belum ada*/
            list<Shirt>::iterator it = shirtList.begin(); /* Membuat iterator untuk mengecek data di dalam list*/

            do /* do while untuk mengecek apakah data sudah ada atau belum, pengecekkan menggunakan Id sebagai primary key*/
            {
                if (temp.getId() == it->getId()) /* Jika sudah ada, maka data tidak akan dimasukkan ke dalam list dan akan menampilkan pesan error*/
                {
                    find = true;
                    cout << "\n Data Id telah dipakai silahkan masukkan Id yang lain";
                }
                it++;                                         /* Iterasi untuk mengecek data selanjutnya */
            } while (find == false && it != shirtList.end()); /* Jika data belum ditemukan (false) dan iterator belum sampai ke akhir list, maka akan terus melakukan proses pengecekan data berikutnya */

            if (find == false) /* Jika data tidak ditemukan, maka data akan dimasukan ke dalam list*/
            {
                shirtList.push_back(temp);             /* Memasukkan data ke dalam list*/
                cout << "\n Data Berhasil Di Input\n"; /* MEnampilkan pesan bahwa data berhasil di input*/
            }
        }
    }

    void tampilData(list<Shirt> &shirtList) /* Method untuk menampilkan data*/
    {
        if (shirtList.empty())
        {
            cout << "\nData dalam list masih kosong. Silakan masukkan data terlebih dahulu.\n";
        }
        else
        {
            /* Mencari lebar maksimum untuk setiap kolom */
            size_t maxIdWidth = 2, maxNamaWidth = 4, maxBrandWidth = 5, maxHargaWidth = 5, maxUkuranWidth = 6, maxGenderWidth = 6, maxBahanWidth = 5, maxWarnaWidth = 5, maxModelLenganWidth = 12;

            /* Mengiterasi melalui setiap anggota DPR untuk mencari lebar maksimum untuk setiap kolom */
            for (auto &Shirt : shirtList)
            {
                maxIdWidth = max(maxIdWidth, to_string(Shirt.getId()).size());
                maxNamaWidth = max(maxNamaWidth, Shirt.getNama().size());
                maxBrandWidth = max(maxBrandWidth, Shirt.getBrand().size());
                maxHargaWidth = max(maxHargaWidth, Shirt.getPrice().size());
                maxUkuranWidth = max(maxUkuranWidth, (Shirt.getSize()).size());
                maxBahanWidth = max(maxBahanWidth, (Shirt.getMaterial()).size());
                maxGenderWidth = max(maxGenderWidth, Shirt.getGender().size());
                maxWarnaWidth = max(maxWarnaWidth, Shirt.getColor().size());
                maxModelLenganWidth = max(maxModelLenganWidth, Shirt.getSleeve_type().size());
            }

            /* Menampilkan header Tabel */
            cout << "+-" << string(maxIdWidth, '-') << "-+-" << string(maxNamaWidth, '-') << "-+-" << string(maxBrandWidth, '-') << "-+-" << string(maxHargaWidth, '-') << "-+-" << string(maxUkuranWidth, '-') << "-+-" << string(maxBahanWidth, '-') << "-+-" << string(maxGenderWidth, '-') << "-+-" << string(maxWarnaWidth, '-') << "-+-" << string(maxModelLenganWidth, '-') << "-+" << endl;
            cout << "| " << setw(maxIdWidth) << left << "ID"
                 << " | " << setw(maxNamaWidth) << left << "Nama"
                 << " | " << setw(maxBrandWidth) << left << "Brand"
                 << " | " << setw(maxHargaWidth) << left << "Harga"
                 << " | " << setw(maxUkuranWidth) << left << "Ukuran"
                 << " | " << setw(maxBahanWidth) << left << "Bahan"
                 << " | " << setw(maxGenderWidth) << left << "Gender"
                 << " | " << setw(maxWarnaWidth) << left << "Warna"
                 << " | " << setw(maxModelLenganWidth) << left << "Model Lengan"
                 << " |" << endl;
            cout << "+-" << string(maxIdWidth, '-') << "-+-" << string(maxNamaWidth, '-') << "-+-" << string(maxBrandWidth, '-') << "-+-" << string(maxHargaWidth, '-') << "-+-" << string(maxUkuranWidth, '-') << "-+-" << string(maxBahanWidth, '-') << "-+-" << string(maxGenderWidth, '-') << "-+-" << string(maxWarnaWidth, '-') << "-+-" << string(maxModelLenganWidth, '-') << "-+" << endl;

            /* Menampilkan data */
            for (auto &Shirt : shirtList)
            {
                cout << "| " << setw(maxIdWidth) << left << Shirt.getId()
                     << " | " << setw(maxNamaWidth) << left << Shirt.getNama()
                     << " | " << setw(maxBrandWidth) << left << Shirt.getBrand()
                     << " | " << setw(maxHargaWidth) << left << Shirt.getPrice()
                     << " | " << setw(maxUkuranWidth) << left << Shirt.getSize()
                     << " | " << setw(maxBahanWidth) << left << Shirt.getMaterial()
                     << " | " << setw(maxGenderWidth) << left << Shirt.getGender()
                     << " | " << setw(maxWarnaWidth) << left << Shirt.getColor()
                     << " | " << setw(maxModelLenganWidth) << left << Shirt.getSleeve_type()
                     << " |" << endl;

                /* Menampilkan footaer tabel */
                cout << "+-" << string(maxIdWidth, '-') << "-+-" << string(maxNamaWidth, '-') << "-+-" << string(maxBrandWidth, '-') << "-+-" << string(maxHargaWidth, '-') << "-+-" << string(maxUkuranWidth, '-') << "-+-" << string(maxBahanWidth, '-') << "-+-" << string(maxGenderWidth, '-') << "-+-" << string(maxWarnaWidth, '-') << "-+-" << string(maxModelLenganWidth, '-') << "-+" << endl;
            }

            // Menampilkan footer tabel
            // cout << "+-" << string(maxIdWidth, '-') << "-+-" << string(maxNamaWidth, '-') << "-+-" << string(maxBrandWidth, '-') << "-+-" << string(maxHargaWidth, '-') << "-+-" << string(maxUkuranWidth, '-') << "-+-" << string(maxBahanWidth, '-') << "-+-" << string(maxGenderWidth, '-') << "-+-" << string(maxWarnaWidth, '-') << "-+-" << string(maxModelLenganWidth, '-') << "-+" << endl;
        }
    }

    /* Destructor */
    ~Shirt()
    {
    }
};
