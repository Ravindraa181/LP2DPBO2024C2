from Product import Product # Import class Product dari file Product.py

class Clothing(Product): # Deklarasi class clothing (class anak dari Product)
    
    # Membuat data atribut size, material, gender
    __size = ""
    __material = ""
    __gender = ""

    # Constructor
    def __init__(self, id = 0, nama = "" ,brand = "", price = "", size = "", material = "", gender = ""): # Membuat constructor dengan parameter
        super().__init__(id, nama, brand, price) # Menginisialisasi setiap atribut yang ada di dalam konstruktor parent class Product
        # menginisialisasi masing masing atribut dengan nilai dari parameter nama atribut sesuai namanya
        self.__size = size
        self.__material = material
        self.__gender = gender

    # Getter dan Setter

    # Getter    
    def getSize(self):
        return self.__size
    
    def getMaterial(self):
        return self.__material
    
    def getGender(self):
        return self.__gender
    
    # Setter
    def setSize(self, size):
        self.__size = size

    def setMaterial(self, material):
        self.__material = material

    def setGender(self, gender):
        self.__gender = gender