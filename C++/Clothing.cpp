#include "Product.cpp" /* Import file Product.cpp */

using namespace std; // Menggunakan standard namespace

class Clothing : public Product /* Membuat class Anak  bernama Clothing */
{
protected:
    /* data */
    string size;
    string material;
    string gender;

public:
    /* Constructor */
    Clothing() : Product() /* Membuat Constructor default tanpa isi parameter */
    {
        this->size = "";
        this->material = "";
        this->gender = "";
    }

    Clothing(int id, string nama, string brand, string price, string size, string material, string gender) : Product(id, nama, brand, price)
    {
        this->size = size;
        this->material = material;
        this->gender = gender;
    }

    /* Getter dan Setter */

    /* Getter */
    string getSize()
    {
        return this->size;
    }

    string getMaterial()
    {
        return this->material;
    }

    string getGender()
    {
        return this->gender;
    }

    /* Setter */
    void setSize(string size)
    {
        this->size = size;
    }

    void setMaterial(string material)
    {
        this->material = material;
    }

    void setGender(string gender)
    {
        this->gender = gender;
    }

    /* Destructor */
    ~Clothing()
    {
    }
};
