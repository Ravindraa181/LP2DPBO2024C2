
// Import library
import java.util.Scanner;

import javax.swing.plaf.synth.SynthOptionPaneUI;

import java.util.ArrayList;

public class Main {

    public static void main(String[] args) {
        ArrayList<Shirt> shirtList = new ArrayList<>();
        Scanner scan = new Scanner(System.in);

        boolean flag = true;
        int input;

        do {
            Shirt shirtObject = new Shirt();
            // shirtObject.clearScreen();

            shirtObject.commandOptions();

            input = scan.nextInt();
            int id;
            String nama, brand, price,size, material, gender, color, sleeve_type;

            switch (input) {
                case 0: /*
                         * Jika inputan = 0 maka program akan berhenti karena flag akan bernilai false
                         */
                    flag = false;
                    break;

                case 1:
                    System.out.print("\nMasukkan Id              : ");
                    id = scan.nextInt();
                    System.out.print("Masukkan Nama            : ");
                    nama = scan.next();
                    System.out.print("Masukkan Brand           : ");
                    brand = scan.next();
                    System.out.print("Masukkan Harga           : ");
                    price = scan.next();
                    System.out.print("Masukkan Ukuran          : ");
                    size = scan.next();
                    System.out.print("Masukkan Bahan           : ");
                    material = scan.next();
                    System.out.print("Masukkan Gender          : ");
                    gender = scan.next();
                    System.out.print("Masukkan Warna           : ");
                    color = scan.next();
                    System.out.print("Masukkan Model Lengan    : ");
                    sleeve_type = scan.next();

                    /* Memanggil method ... untuk menambahkan data kedalam list */
                    shirtObject.tambahData(shirtList, shirtObject, id, nama, brand, price, size, material, gender,
                            color, sleeve_type);
                    break;

                case 2:
                    shirtObject.tampilData(shirtList);
                    break;
                default:
                    System.out.println("\nInputan Salah, Coba Input Ulang");
                    break;
            }

            if (input != 0) {
                System.out.println("\n");
                /* Mempause program */
                System.out.println("Press Enter to continue . . .");
                new java.util.Scanner(System.in).nextLine();
            }

        } while (flag == true);

        scan.close(); /* Menterminasi Scanner */
    }
}