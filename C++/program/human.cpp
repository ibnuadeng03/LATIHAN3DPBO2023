/*  
	Saya Ibnu Adeng Kurnia NIM 2101769 mengerjakan latihan ke-4 
	dalam mata kuliah desain dan pemrograman berorientasi objek C2 2023
	untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. 
	Aamiin.
*/

/*  Design ini disusun dan/atau digunakan hanya untuk lingkungan sendiri.
	Tidak untuk menjadi konsumsi/kepentingan umum.
	Hanya untuk melengkapi tugas DPBO 2023.
*/

#include "header.hh"

// ------- // konstruktor // ------- //
Human::Human(){
    this->NIK = "";					// nomoer induk kapandudukan //
    this->nama = "";				// jenengan //
    this->jenis_kelamin = "";		// jenis kelamin //
}

// ------- // konstruktor // ------- //
Human::Human(string NIK, string nama, string jenis_kelamin){
    this->NIK = NIK;
    this->nama = nama;
    this->jenis_kelamin = jenis_kelamin;
}
    
// ------- // setter jeung getter // ------- //
// set jeung get jang NIK //
void Human::setNIK(string NIK){
    this->NIK = NIK;
}
    
string Human::getNIK(){
    return NIK;
}

// set jeung get jang jenengan 
void Human::setNama(string nama){
    this->nama = nama;
}
    
string Human::getNama(){
    return nama;
}

// set jeung get jang jenis kelamin 
void Human::setJenisKelamin(string jenis_kelamin){
    this->jenis_kelamin = jenis_kelamin;
}
    
string Human::getJenisKelamin(){
    return jenis_kelamin;
}

// ------- // Destruktor // ------- //
Human::~Human(){

}
