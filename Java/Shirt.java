
//Import library
import java.util.Scanner;
import java.util.ArrayList;

public class Shirt extends Clothing {
    /* Membuat atribut berjenis private */
    private String color;
    private String sleeve_type;

    /* Constructor tanpa parameter (Default) */
    public Shirt() {
        this.color = "";
        this.sleeve_type = "";
    }

    /* Constructor dengan parameter */
    public Shirt(String color, String sleeve_type) {
        this.color = color;
        this.sleeve_type = sleeve_type;
    }

    /* Setter dan Getter */

    /* Getter */
    public String getColor() {
        return this.color;
    }

    public String getSleeve_type() {
        return this.sleeve_type;
    }

    /* Setter */
    public void setColor(String color) {
        this.color = color;
    }

    public void setSleeve_type(String sleeve_type) {
        this.sleeve_type = sleeve_type;
    }

    public void commandOptions() // Method untuk menampilkan menu program CRUD
    {
        System.out.println("=========================");
        System.out.println("|      CRUD Program     |"); // CRUD = Create, Read, Update, Delete
        System.out.println("=========================");
        System.out.println("|  0. Exit the program  |"); // 0 untuk keluar dari program
        System.out.println("|  1. Add data          |"); // 1 untuk menambahkan data
        System.out.println("|  2. Show list of Data |"); // 2 untuk menampilkan semua data dalam daftar
        System.out.println("=========================");
        System.out.print("Enter your choice : ");
    }

    public void tambahData(ArrayList<Shirt> shirtList, Shirt temp, int id, String nama, String brand, String price,
            String size, String material, String gender, String color, String sleeve_type) {
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

        if (shirtList.isEmpty()) {
            shirtList.add(temp);
            System.out.println("\n Data Berhasil Di Input");
        } else {
            boolean find = false;
            int i = 0;

            do {
                if (temp.getId() == shirtList.get(i).getId()) {
                    find = true;
                    System.out.println("\n Data Id tidak ada didalam List");
                }
                i++;
            } while (find == false && i < shirtList.size());

            if (find == false) {
                shirtList.add(temp);
                System.out.println("\n Data Berhasil Di Input");
            }
        }
    }

    public void tampilData(ArrayList<Shirt> shirtList) {
        if (shirtList.isEmpty()) {
            System.out.println("\nData Didalam List Masih Kosong\nSilahkan Masukkan Data Terlebih Dahulu");
        } else {
            int i = 0;
            System.out.println(); /* \n */

            for (shirtList.get(i); i < shirtList.size(); i++) { /* Looping untuk menampilkan Data */
                System.out.println("List Data Ke - " + (i + 1));
                System.out.println("ID              : " + shirtList.get(i).getId());
                System.out.println("Nama            : " + shirtList.get(i).getNama());
                System.out.println("Brand           : " + shirtList.get(i).getBrand());
                System.out.println("Harga           : " + shirtList.get(i).getPrice());
                System.out.println("Ukuran          : " + shirtList.get(i).getSize());
                System.out.println("Bahan           : " + shirtList.get(i).getMaterial());
                System.out.println("Gender          : " + shirtList.get(i).getGender());
                System.out.println("Warna           : " + shirtList.get(i).getColor());
                System.out.println("Model Lengan    : " + shirtList.get(i).getSleeve_type());
                if (i != shirtList.size() - 1) {/*
                                                 * Jika bukan data terakhir, maka akan memberikan jarak antara data
                                                 * diatas / Slash N
                                                 */
                    System.out.println();
                }
            }
        }
    }

    // public void clearScreen() // Method untuk membersihkan layar
    // {
    // // System.out.print("\\033[H\\033[2J"); // Membersihkan layar dengan
    // menggunakan
    // // escape sequence
    // // System.out.flush(); // Membersihkan buffer dari escape sequence
    // // try {
    // // final String os = System.getProperty("os.name");
    // // if (os.contains("Windows")) {
    // // Runtime.getRuntime().exec("cls");
    // // }
    // // } catch (final Exception e) {
    // // e.printStackTrace();
    // // }
    // new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
    // }

}