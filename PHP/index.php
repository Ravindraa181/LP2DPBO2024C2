<?php
require_once("shirt.php");

$shirtList = array();
$arrShirtData = array();

echo "<center>";
echo "<h3> Create Data</h3>";

/* Input data mahasiswa */
$arrShirtData[0] = new Shirt(
    "19970324",
    "Myoui Mina",
    "Gucci",
    "Rp.25.000.000",
    "L",
    "Wol",
    "Perempuaan",
    "Merah",
    "Pendek",
    "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQWoHrDtvu2dFi6eLA39Gncq5cmgjWhdGdxlQ&usqp=CAU"
);
$arrShirtData[0]->tambahData($shirtList, $arrShirtData[0]);

$arrShirtData[1] = new Shirt(
    "20000721",
    'Choi Ji-su',
    "Supreme",
    "Rp.10.000.000",
    "M",
    "Katun",
    "Perempuan",
    "Biru",
    "Pendek",
    "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSb2eKIxdQPminvaZzXdSWO8CC0ZiKeEVYyFw&usqp=CAU"
); // Create data dengan konstruktor
$arrShirtData[1]->tambahData($shirtList, $arrShirtData[1]);

$arrShirtData[2] = new Shirt(
    "20030901",
    "An Yu-jin",
    "LV",
    "Rp.33.220.000",
    "L",
    "Katun",
    "Perempuan",
    "Hijau",
    "Panjang",
    "https://i.pinimg.com/236x/04/47/de/0447de30feaded5e3e821ef4cfcfffd2.jpg"
); // Create data dengan konstruktor
$arrShirtData[2]->tambahData($shirtList, $arrShirtData[2]);

// Create data dengan setter tiap atribut
$arrShirtData[3] = new Shirt();
$arrShirtData[3]->setId("20030225");
$arrShirtData[3]->setNama("Oh Haewon");
$arrShirtData[3]->setBrand("GajahDuduk");
$arrShirtData[3]->setPrice("Rp.12.233.000");
$arrShirtData[3]->setSize("L");
$arrShirtData[3]->setMaterial("Sutra");
$arrShirtData[3]->setGender("Perempuan");
$arrShirtData[3]->setColor("Kuning");
$arrShirtData[3]->setSleeveType("Panjang");
$arrShirtData[3]->setImage("https://i.pinimg.com/236x/3c/5f/d3/3c5fd328fb580692bd6ca86512500fbc.jpg");
$arrShirtData[3]->tambahData($shirtList, $arrShirtData[3]);

$arrShirtData[4] = new Shirt(
    "20030809",
    "Kazuha Nakamura",
    "CahayaAsia",
    "Rp.21.420.000",
    "M",
    "Viscose",
    "Perempuan",
    "Pink",
    "Pendek",
    "https://i.pinimg.com/1200x/a8/11/cf/a811cfb2b5c43c031b141a9ec5fe7556.jpg"
); // Create data dengan konstruktor
$arrShirtData[4]->tambahData($shirtList, $arrShirtData[4]);

$arrShirtData[4] = new Shirt(
    "20021023",
    "Ning Yizhuo",
    "Alibaba",
    "Rp.32.323.000",
    "S",
    "Kanvas",
    "Perempuan",
    "Hitam",
    "Panjang",
    "https://i.pinimg.com/564x/75/63/3b/75633b10d91edca6b46d2450a9a29acc.jpg"
); // Create data dengan konstruktor
$arrShirtData[4]->tambahData($shirtList, $arrShirtData[4]);



$showDPRData = new Shirt(); // Objek untuk menampilkan isi array daftar anggota dpr
$showDPRData->tampilData($shirtList); // Menampilkan isi array setelah input data