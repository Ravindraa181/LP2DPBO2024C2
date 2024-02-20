<?php
require_once("Clothing.php"); /* Require Class Clothing  */
class Shirt extends Clothing { /* Membuat class cucu bernama Shirt */
    /* Membuat atribut berjenis protected */
    protected $color;
    protected $sleeve_type;
    protected $image;
    
    /* Constructor */

    public function __construct($id = 0, $nama = '', $brand = '', $price = '',  $size = '', $material = '', $gender = '', $color = '', $sleeve_type = '', $image = '') {
        parent::__construct($id, $nama, $brand, $price, $size, $material, $gender);
        $this->color = $color;
        $this->sleeve_type = $sleeve_type;
        $this->image = $image;
        
    }
    
    /* Getter dan Setter */
    public function getColor(){
        return $this->color;
    }

    public function getSleeveType(){
        return $this->sleeve_type;
    }

    public function setColor($color){
        $this->color = $color;
    }
    
    public function setSleeveType($sleeve_type){
        $this->sleeve_type = $sleeve_type;
    }

    public function getImage(){
        return $this->image;
    }

    public function setImage($image){
        $this->image = $image;
    }

    /* Method untuk menu Menu program */

    public function tambahData(&$shirtList, $temp) /* Mecthod untuk menambahkan data */
    {
        if(empty($shirtList)){ /* jika array kosong, langsung masukan data ke dalam array*/
            array_push($shirtList, $temp); /* Memasukkan data ke dalam array*/
            echo "Data Berhasil di Input ". "<br>"; /* Pesan data berhasil di input */
        } 
        else /* Jika array tidak kosong  */ 
        {
            $find = false; /* untuk cek apakah data ada atau tidak */
            $i = 0; /* iterator  */

            do{ /* cek apakah id telah dipakai atau belum */
                if ($temp->getId() == $shirtList[$i]->getId()){ /* jika id lama sama dengan id baru maka */
                    $find = true; /* flag menjadi true */
                    echo'Data Id telah dipakai silahkan masukkan Id yang lain'. "<br>"; /* menampilkan pesan untuk mengganti id baru karena id tersebut telah dipakai */
                }
                $i++; /* iterasi untuk cek data selannjutnya */
            }  while($find == false && $i < count($shirtList));     
            if($find == false){ /* jika data id baru belum ditemukan maka */  
                array_push($shirtList, $temp); /* memasukkan data */
                echo "Data Berhasil di Input ". "<br>"; /* pesan data berhasil di input */
            }
        }
        
    }
    
    public function tampilData($shirtList) // Method untuk menampilkan semua data anggota  di dalam array
    {
        if (empty($shirtList)) { // Jika array kosong
            echo "Data dalam list masih kosong. Silakan masukkan data terlebih dahulu." . "<br>"; // Menampilkan pesan error
        } else { // Jika array ada isinya
            echo "<h3>Data Dari List </h3>"; // Judul Tabel
            echo "<table border='1' cellpadding='5' cellspacing = '0'>";
            echo "<tr>";
            echo "<th>id</th>" . "<th>Nama</th>" . "<th>Brand</th>" . "<th>Harga</th>". "<th>Ukuran</th>". "<th>Bahan</th>". "<th>Gender</th>". "<th>Warna</th>". "<th>Model Lengan</th>". "<th>foto</th>"; // Header Tabel
            echo "</tr>";
            // $no = 1;
            /* Menampilkan semua data anggota  */
            for ($i = 0; $i < count($shirtList); $i++) {
                echo "<tr>";
                // echo "<td>" . $no . '. ' . "</td>";
                echo "<td>" . $shirtList[$i]->getId() . "</td>";
                echo "<td>" . $shirtList[$i]->getNama() . "</td>";
                echo "<td>" . $shirtList[$i]->getBrand() . "</td>";
                echo "<td>" . $shirtList[$i]->getPrice() . "</td>";
                echo "<td>" . $shirtList[$i]->getSize() . "</td>";
                echo "<td>" . $shirtList[$i]->getMaterial() . "</td>";
                echo "<td>" . $shirtList[$i]->getGender() . "</td>";
                echo "<td>" . $shirtList[$i]->getColor() . "</td>";
                echo "<td>" . $shirtList[$i]->getSleeveType() . "</td>";
                echo "<td><img src=\"".  $shirtList[$i]->getImage() . "\" width='88px' /></td>";
                echo "</tr>";
            }
            echo "</table>";
            echo "<br>";
        }
    }
    
    /* Destructor */
    public function __destruct() {
    }
}