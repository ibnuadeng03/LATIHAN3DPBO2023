/*  
	Saya Ibnu Adeng Kurnia NIM 2101769 mengerjakan latihan ke-4 
	dalam mata kuliah desain dan pemrograman berorientasi objek C2 2023
	untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. 
	Aamiin.
*/

/*  
	Design ini disusun dan/atau digunakan hanya untuk lingkungan sendiri.
	Tidak untuk menjadi konsumsi/kepentingan umum.
	Hanya untuk melengkapi tugas DPBO 2023.
*/

#include "header.hh"

// ------- // konstruktor // ------- //
SivitasAkademik::SivitasAkademik(){
    this->asal_universitas = "";			// asal unipersitas //
    this->email_edu = "";					// email atikan //
}

// ------- // konstruktor // ------- //
SivitasAkademik::SivitasAkademik(string NIK, string nama, string jenis_kelamin, string asal_universitas, string email_edu) : 
Human(NIK, nama, jenis_kelamin){
this->asal_universitas = asal_universitas;
this->email_edu = email_edu;
}

// ------- // Setter jeung Getter // ------- //
// set jeung get jang asal unipersitas
void SivitasAkademik::setUniversitas(string asal_universitas){
    this->asal_universitas = asal_universitas;
}
    
string SivitasAkademik::getUniversitas(){
    return asal_universitas;
}

// set jeung get jang email atikan
void SivitasAkademik::setEmail_edu(string email_edu){
    this->email_edu = email_edu;
}

string SivitasAkademik::getEmail_edu(){
    return email_edu;
}

// ------- // Destruktor // ------- //
SivitasAkademik::~SivitasAkademik(){

}
