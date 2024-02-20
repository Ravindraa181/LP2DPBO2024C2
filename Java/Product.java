public class Product {
    /* private attributes */
    protected int id;
    protected String nama;
    protected String brand;
    protected String price;

    /* constructors */

    /* constructor tanpa tipe return */
    public Product() {
        this.id = 0;
        this.nama = "";
        this.brand = "";
        this.price = "";
    }

    /* constructor dengan parameter */
    public Product(int id, String nama, String brand, String price) {
        this.id = id;
        this.nama = nama;
        this.brand = brand;
        this.price = price;
    }

    /* Getter dan Setter */

    /* Getter */
    public int getId() {
        return this.id;
    }

    public String getNama() {
        return this.nama;
    }

    public String getBrand() {
        return this.brand;
    }

    public String getPrice() {
        return this.price;
    }

    /* Setter */
    public void setId(int id) {
        this.id = id;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public void setBrand(String brand) {
        this.brand = brand;
    }

    public void setPrice(String price) {
        this.price = price;
    }
}