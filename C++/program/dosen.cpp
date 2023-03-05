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

// ------------------------ // ^_^ Membuat kelas dengan nama dosen yang terhubung dengan SivitasAkademika  ^_^ // ------------------------ //
// ---- kelas dosen merupakan anak kelas dari SivitasAkademik ------ // 
// Pada intinya bahwa class dosen merupakan anak dari kelas sivitas akademik. Mengapa? Ya tentu karena dilihat 
// dari sisi objek, bahwa class SivitasAkademik dan class dosen merupakan sama-sama manusia
// yang menjalankan tugasnya masing-masing sesuai dengan juknis/juklak/tupoksi-Nya.


// ------- // Constructor // ------- //
Dosen::Dosen(){
    this->NIP = "";					// data NIP //
    this->fakultas = "";			// data fakultas //
    this->pend_terakhir = "";		// data pendidikan terakhir //
    this->keahlian = "";			// data keahlian //
}

// ------- // konstruktor // ------- //
Dosen::Dosen(string NIK, string NIP, string nama, string jenis_kelamin, string asal_universitas, string email_edu, string fakultas, string pend_terakhir, string keahlian)
    : SivitasAkademik(NIK, nama, jenis_kelamin, asal_universitas, email_edu){
    this->NIP = NIP;
    this->fakultas = fakultas;
    this->pend_terakhir = pend_terakhir;
    this->keahlian = keahlian;
}

// ------- // setter dan getter // ------- //
// set dan get untuk nomor induk pegawai 
void Dosen::setNIP(string NIP){
    this->NIP = NIP;
}

string Dosen::getNIP(){
    return this->NIP;
}

// set dan get untuk data fakultas 
void Dosen::setFakultas(string fakultas){
    this->fakultas = fakultas;
}
        
string Dosen::getFakultas(){
    return this->fakultas;
}
 
// ------- // set dan get untuk data pendidikan terakhir       
void Dosen::setPendidikanTerakhir(string pend_terakhir){
    this->pend_terakhir = pend_terakhir;
}
        
string Dosen::getPendidikanTerakhir(){
    return this->pend_terakhir;
}

// ------- // set dan get untuk data keahlian
void Dosen::setKeahlian(string keahlian){
    this->keahlian = keahlian;
}

string Dosen::getKeahlian(){
    return this->keahlian;
}

// ------- // Destructor // ------- //
Dosen::~Dosen(){}

