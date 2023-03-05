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

// ------- // konstruktor  // ------- //
ProgramStudi::ProgramStudi(){
    this->nama_prodi = "";				// ngaran prodi //
    this->kode = "";					// kode //
    this->course = "";					// widang studi //
}

// ------- // konstruktor // ------- //
ProgramStudi::ProgramStudi(string nama_prodi, string kode, string course){
    this->nama_prodi = nama_prodi;
    this->kode = kode;
    this->course = course;
}
        
// ------- // setter dan  getter // ------- //
// set jeung get jang ngaran prodi 
void ProgramStudi::setNamaProdi(string nama_prodi){
    this->nama_prodi = nama_prodi;
}
        
string ProgramStudi::getNamaProdi(){
    return this->nama_prodi;
}

// set jeung get jang kode 
void ProgramStudi::setKode(string kode){
    this->kode = kode;
}

string ProgramStudi::getKode(){
    return this->kode;
}

// set jeung get jang widang Studi 
void ProgramStudi::setCourse(string course){
    this->course = course;
}

string ProgramStudi::getCourse(){
    return this->course;
}

// ------- // destruktorr // ------- //
ProgramStudi::~ProgramStudi(){

}
