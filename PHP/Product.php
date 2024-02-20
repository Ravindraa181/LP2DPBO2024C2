<?php
class Product{
    protected $id;
    protected $nama;
    protected $brand;
    protected $price;

    /* Constructor */
    public function __construct($id = 0, $nama = '',  $brand = ' ', $price = ''){
        $this->id = $id;
        $this->nama = $nama;
        $this->brand = $brand;
        $this->price = $price;
    }

    /* Getter dan Setter */
    public function getId(){
        return $this->id;
    }
    
    public function setId($id){
        $this->id = $id;
    }
    
    public function getNama(){
        return $this->nama;
    }

    public function setNama($name){
        $this->nama = $name;
    }

    public function getBrand(){
        return $this->brand;
    }

    public function setBrand($brand){
        $this->brand = $brand;
    }

    public function getPrice(){
        return $this->price;
    }
    
    public function setPrice($price){
        $this->price = $price;
    }

    /* Destructor */
    public function __destruct(){ 
    }  
}