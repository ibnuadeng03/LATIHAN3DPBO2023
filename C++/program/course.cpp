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


// ------- //  konstruktor // ------- //
Course::Course(){
    this->nama_mk = "";
}

// ------- // konstruktor // ------- //
Course::Course(string nama_mk){
    this->nama_mk = nama_mk;
}
        
// ------- // setter dan getter // ------- //
// ------- // set dan get untuk nama mata kuliah 
void Course::setNamaMataKuliah(string nama_mk){
    this->nama_mk = nama_mk;
}
        
string Course::getNamaMataKuliah(){
    return nama_mk;
}

vector<Mahasiswa> Course::getMhs(){
    return Mhs;
}
        
vector<Dosen> Course::getDosenn(){
    return Dosenn;
}
        
// ------- // untuk menambah data mahasiswa // ------- //
void Course::addMahasiswa(Mahasiswa mahasiswa){
    Mhs.push_back(mahasiswa);
}
        
// ------- // menambah data dosen // ------- //
void Course::addDosen(Dosen dosen){
    Dosenn.push_back(dosen);
}

// ------- // Destructor // ------- //
Course::~Course(){

}

