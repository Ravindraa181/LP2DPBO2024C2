public class Clothing extends Product {
    protected String size;
    protected String material;
    protected String gender;

    /* Constructor tanpa parameter */
    public Clothing(){
        this.size = "";
        this.material = "";
        this.gender = "";
    }

    /* Constructor menggunakan parameter */
    public Clothing(String size, String material, String gender){
        this.size = size;
        this.material = material;
        this.gender = gender;
    }

    /* Getter dan Setter */

    /* Getter */
    public String getSize(){
        return this.size;
    }

    public String getMaterial(){
        return this.material;
    }

    public String getGender(){
        return this.gender;
    }

    /* Setter */
    public void setSize(String size){
        this.size = size;
    }

    public void setMaterial(String material){
        this.material = material;
    }

    public void setGender(String gender){
        this.gender = gender;
    }

}