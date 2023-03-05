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


// ------- // konsruktor // ------- //
Mahasiswa::Mahasiswa(){
    this->NIM = "";				// nomer induk mahasiswa //
    this->fakultas = "";		// pakultas //
}

// ------- // konstruktor // ------- //
Mahasiswa::Mahasiswa(string NIK, string NIM, string nama, string jenis_kelamin, string asal_universitas, string email_edu, string fakultas) : 
SivitasAkademik(NIK, nama, jenis_kelamin, asal_universitas, email_edu){
    this->NIM = NIM;
    this->fakultas = fakultas;
}
        
// ------- // setter jeung getter // ------- //
// set jeung get jang nim 
void Mahasiswa::setNIM(string NIM){
    this->NIM = NIM;
}
        
string Mahasiswa::getNIM(){
    return this->NIM;
}

// set jeung get jang pakultas      
void Mahasiswa::setFakultas(string fakultas){
    this->fakultas = fakultas;
}
        
string Mahasiswa::getFakultas(){
    return this->fakultas;
}

// ------- //destruktorr // ------- //
Mahasiswa::~Mahasiswa(){

}
