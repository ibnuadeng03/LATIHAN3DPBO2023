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

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ------- //  Class Human/manusia  // ------- // 
class Human{
    private:
        // Atribut private
        string NIK;                     // ------- //  nik // ------- // 
        string nama;                    // ------- //  nama terang // ------- // 
        string jenis_kelamin;           // ------- //  jenis kelamin // ------- // 
        
    public:
       // ------- // konstruktor // ------- // 
        Human();
        Human(string NIK, string nama, string jenis_kelamin);
        
        // ------- //  setter dan getter // ------- // 
        // NIK //
        void setNIK(string NIK);
        string getNIK();
        
        // NAMA ///
        void setNama(string nama);
        string getNama();
        
        // JENIS KELAMIN //
        void setJenisKelamin(string jenis_kelamin);
        string getJenisKelamin();

        // Destruktor
        ~Human();
};


// ------- //  kelas  SivitasAkademik // ------- // 
// ------- //  kelas sivitas akademik merupakan kelas anak dari Human // ------- // 
class SivitasAkademik : public Human{
    private:
        // Atribut private                 
        string asal_universitas;            // asal universitas //
        string email_edu;                   // email_edu //
        
    public:
        // ------- //  konstruktor // ------- // 
        SivitasAkademik();
        SivitasAkademik(string NIK, string nama, string jenis_kelamin, string asal_universitas, string email_edu);
        
        // ------- //  setter dan getter // ------- // 
        // universitas //
        void setUniversitas(string asal_universitas);
        string getUniversitas();
        
        // email edu //
        void setEmail_edu(string email_edu);
        string getEmail_edu();

        // Destruktor //
        ~SivitasAkademik();
};

// ------- // kelas mahasiswa // ------- // 
// ------- // kelas mahasiswa ieu teh nyaeta kelas budak ti SivitasAkademika // ------- // 
class Mahasiswa : public SivitasAkademik{
    private:
        // Atribut private
        string NIM;                 // nim //
        string fakultas;            // pakultas //
    
    public:
        // ------- // // konstruktor // // ------- // 
        Mahasiswa();
        Mahasiswa(string NIK, string NIM, string nama, string jenis_kelamin, string asal_universitas, string email_edu, string fakultas);
        
        // ------- // setter dan getter // ------- // 
        // set nim 
        void setNIM(string NIM);
        string getNIM();
        
        // set pakultas 
        void setFakultas(string fakultas);
        string getFakultas();

        // destruktor
        ~Mahasiswa();
};

// ------- //  kelas Dosen // ------- // 
// katiten yen kelas dosen teh nyaeta kelas budak ti SivitasAkademik // ------- // 
class Dosen: public SivitasAkademik{
    private:
        // Atribut private
        string NIP;                             // nomer induk pagawe //
        string fakultas;                        // pakultas //
        string pend_terakhir;                   // atikan //
        string keahlian;                        // pangabisa/kaahlian//
        
    public:
        // ------- //  konstruktor // 
        Dosen();
        Dosen(string NIK, string NIP, string nama, string jenis_kelamin, string asal_universitas, string email_edu, string fakultas, string pend_terakhir, string keahlian);
        
        // ------- //  setter jeung getter // ------- // 
        // jang NIP
        void setNIP(string NIP);
        string getNIP();
        
        // jang pakultas 
        void setFakultas(string fakultas);
        string getFakultas();
        
        // jang atikan 
        void setPendidikanTerakhir(string pend_terakhir);
        string getPendidikanTerakhir();
        
        // jang pangabisa/kaahlian
        void setKeahlian(string keahlian);
        string getKeahlian();

        // ------- //  destructor // ------- // 
        ~Dosen();
};

// ------- //  kelas program studi // ------- // 
class ProgramStudi{
    private:
        // Atribut private
        string nama_prodi;          // ngaran prodina ///
        string kode;                // kode //
        string course;              // widangStudi //
        
    public:
        // ------- //  konstruktor // ------- // 
        ProgramStudi();
        ProgramStudi(string nama_prodi, string kode, string course);
        
        // ------- //  setter dan getter // ------- // 
        // jang ngaran prodi 
        void setNamaProdi(string nama_prodi);
        string getNamaProdi();
        
        // jang kodena
        void setKode(string kode);
        string getKode();
        
        // jang widangStudi
        void setCourse(string course);
        string getCourse();
        
        // destruktor
        ~ProgramStudi();
};


// ------- // kelas course atawa widangStudi // ------- // 
class Course{
private:
    // Atribut private
    string nama_mk;
    vector<Mahasiswa> Mhs;
    vector<Dosen> Dosenn;
    
public:
    // konstruktor
    Course();
    Course(string nama_mk);
    
    // ------- //  setter dan getter // ------- // 
    void setNamaMataKuliah(string nama_mk);
    string getNamaMataKuliah();
    
    // ------- // kanggo nambihkeun data mahasiswa // ------- // 
    void addMahasiswa(Mahasiswa mahasiswa);
    vector<Mahasiswa> getMhs();
    
    void addDosen(Dosen dosen);
    vector<Dosen> getDosenn();

    // destruktor
    ~Course();
};