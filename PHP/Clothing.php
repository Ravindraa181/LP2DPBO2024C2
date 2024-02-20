<?php
require_once("Product.php");

class Clothing extends Product
{
    /* Membuat atribut berjenis protected */
    protected $size;
    protected $material;
    protected $gender;

    /* Constructor */
    public function __construct($id = 0, $nama = '', $brand = '', $price = '',  $size = '', $material = '', $gender = '')
    {
        parent::__construct($id, $nama, $brand, $price); /* Memanggil constructor dari class parent */
        $this->size = $size;
        $this->material = $material;
        $this->gender = $gender;
    }

    /* Getter dan Setter */
    public function getSize()
    {
        return $this->size;
    }
    
    public function setSize($size)
    {
        $this->size = $size;
    }
    
    public function getMaterial(){
        return $this->material;
    }

    public function setMaterial($material){
        $this->material = $material;
    }

    public function getGender(){
        return $this->gender;
    }

    public function setGender($gender){
        $this->gender = $gender;
    }

    /* Destructor */
    public function __destruct(){
        
    }
}