class Product: # Membuat Class Parent bernama Product

    # Membuat data atribut id, nama, brand, dan price 
    __id = 0
    __nama = ""
    __brand = ""
    __price = ""

    # Constructor
    def __init__(self, id = 0, nama = "", brand = "", price = ""): # Membuat constructor dengan parameter
        # Menginisialisasi masing masing atribut dengan nilai dari parameter nama atribut sesuai namanya
        self.__id = id
        self.__nama = nama
        self.__brand = brand
        self.__price = price

    # Getter dan Setter
    
    # Getter 
    def getId(self):
        return self.__id

    def getNama(self):
        return self.__nama

    def getBrand(self):
        return self.__brand

    def getPrice(self):
        return self.__price

    # Setter
    def setId(self, id):
        self.__id = id

    def setNama(self, nama):
        self.__nama = nama

    def setBrand(self, brand):
        self.__brand = brand

    def setPrice(self, price):
        self.__price = price 

