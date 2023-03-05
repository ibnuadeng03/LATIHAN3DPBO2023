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

int main(){
    // ------------------------------------------ // Header Program // --------------------------------------------------------------- //
    cout << "\n                         KEMENTERIAN PENDIDIKAN KEBUDAYAAN RISET DAN TEKNOLOGI" << endl;
    cout << "                              PUSAT DATA DAN TEKNOLOGI INFORMASI (PUSDATIN)" << endl;
    cout << "                                PANGKALAN DATA PENDIDIKAN TINGGI (PDDIKTI)" << endl;
    cout << "                                   DIREKTORAT JENDERAL PENDIDIKAN TINGGI" << endl;
    cout << "                  Sekretariat Direktorat Jenderal Pendidikan Tinggi, Kementerian Pendidikan" << endl;
    cout << "                      Kebudayaan Riset dan Teknologi , Gedung D, Jalan Jenderal Sudirman," << endl;
    cout << "                                   Pintu 1 Senayan, Jakarta Pusat 10270" << endl;
    cout << "       Telp. 021-57946104, 021 741 8808. Email : pddikti@kemdikbud.go.id, pusdatin@kemdikbud.go.id" << endl;
    cout << "=========================================================================================================" << endl;
    
    cout << "              Selamat Datang Bapak/Ibu diportal Pangkalan Data Pendidikan Tinggi (PDDikti)  "<< endl;
    cout << "                  PUSDATIN KEMENDIKBUDRISTEKDIKTI Direktorat Jenderal Pendidikan Tinggi"<< endl;
    
    cout << "---------------------------------------------------------------------------------------------------------"<< endl;
    cout << "                                              DATA POKOK PENDIDIKAN"<< endl;
    cout << "                                        TAHUN PEMBAHARUAN 2022/2023-Genap" << endl;
    cout << "---------------------------------------------------------------------------------------------------------\n"<< endl;
	
	// ------------------------ // Input Data // ------------------------ //
	// ------------------------ // data mahasiswa // ------------------------ //
	// Data dilakukan secara di HardCode //
    Mahasiswa mhs1("3209377839230011", "1902763", "Arya Saloka", "Pria", "Universitas Tangsimekar", "aryasaloka@ts.ac.id", "Fakultas Televisi dan Film");		// data MHS 1//
    Mahasiswa mhs2("3627238207351183", "18271921311", "Amanda Manopo", "Wanita", "Universitas Trisakti", "mamahandin@trisakti.edu", "Fakultas Hukum");		// data MHS 2//
    Mahasiswa mhs3("3572825028362726", "2000172529", "Ikbal Fauzi", "Pria", "Universitas Majalaya", "rendi@majalayabedas.edu", "Fakultas Seni Sastra");	// data MHS 3//

    // ------------------------ // daftar list mahasiswa // ------------------------ //
    vector<Mahasiswa> listmhs;
    listmhs.push_back(mhs1);
    listmhs.push_back(mhs2);
    listmhs.push_back(mhs3);

    // ------------------------ // keluaran data mahasiswa // ------------------------ //
    cout << "               INFORMASI DATA DAFTAR MAHASISWA" << endl;
    for (int i = 0; i < 3; i++){
        cout << " > Data Mahasiswa ke-" << i+1 << endl;
        cout << "   - NIK              : " << listmhs[i].getNIK() << endl;
        cout << "   - NIM              : " << listmhs[i].getNIM() << endl;
        cout << "   - Nama             : " << listmhs[i].getNama() << endl;
        cout << "   - Jenis Kelamin    : " << listmhs[i].getJenisKelamin() << endl;
        cout << "   - Asal Universitas : " << listmhs[i].getUniversitas() << endl;
        cout << "   - Email            : " << listmhs[i].getEmail_edu() << endl;
        cout << "   - Fakultas         : " << listmhs[i].getFakultas() << endl << endl;
    }
    cout << "-----------------------------------------------------------------------" << endl;
	cout << "=======================================================================\n" << endl;

    
	// ------------------------ // data dosen // ------------------------ //
    Dosen dosen1("328938460974830221", "20030803 202506 1 001", "H. Ibnu Adeng Kurnia, S.Kom., M.A.B.", "Pria", "Universitas Padjadjaran", "ibnuadeng@unpad.ac.id", "FISIP", "Strata-2 Magister Administrasi Bisnis", "Sistem Informasi Bisnis");
    Dosen dosen2("334563709896734321", "19711223 200604 1 001", "Dr. Asep Wahyudin, S.Kom., M.T.", "Pria", "Universitas Indonesia", "away@upi.edu", "FPMIPA", "Strata-3 Teknik Informatika", "Sistem Informasi & Rekayasa Perangkat Lunak");
    Dosen dosen3("352420837821936372", "19660325 200112 1 001", "Prof. Dr. Drs. H. Munir, M.IT.", "Pria", "Universiti Kebangsaan Malaysia", "munir@upi.edu", "FPMIPA", "Strata-3 Teknik Informatika", "Multimedia dan Desain Arsitektur Sistem");

    // ------------------------ // daftar dosen // ------------------------ //
    vector <Dosen> listdsn;
    listdsn.push_back(dosen1);
    listdsn.push_back(dosen2);
    listdsn.push_back(dosen3);

    // ------------------------ // keluaran daftar data dosen // ------------------------ //
    cout << "               INFORMASI DATA DAFTAR DOSEN" << endl;
    for (int i = 0; i < 3; i++){
        cout << " > Data Dosen ke-" << i+1 << endl;
        cout << "   - NIK                : " << listdsn[i].getNIK() << endl;
        cout << "   - NIP                : " << listdsn[i].getNIP() << endl; 
        cout << "   - Nama               : " << listdsn[i].getNama() << endl;
        cout << "   - Jenis Kelamin      : " << listdsn[i].getJenisKelamin() << endl;
        cout << "   - Asal Universitas   : " << listdsn[i].getUniversitas() << endl;
        cout << "   - Email              : " << listdsn[i].getEmail_edu() << endl;
        cout << "   - Fakultas           : " << listdsn[i].getFakultas() << endl;
        cout << "   - Pendidikan Terakhir: " << listdsn[i].getPendidikanTerakhir() << endl;
        cout << "   - Keahlian           : " << listdsn[i].getKeahlian() << endl << endl;
    }
    cout << "-----------------------------------------------------------------------" << endl;
	cout << "=======================================================================\n" << endl;
	
    
	// ------------------------ // data persebaran mata kuliah // ------------------------ //
    Course course1("Metodologi Penelitian");
    Course course2("Teori Organisasi dan Administrasi Bisnis");
    Course course3("Kapita Selekta Manajemen Sumber Daya Manusia");

    // ------------------------ // daftar persebaran mata kuliah // ------------------------ //
    vector <Course> listcrs;
    listcrs.push_back(course1);
    listcrs.push_back(course2);
    listcrs.push_back(course3);

    // ------------------------ // Menambahkan data mahasiswa ke data course/persebaran mata kuliah // ------------------------ //
    course1.addMahasiswa(mhs1);
    course1.addMahasiswa(mhs2);
    course2.addMahasiswa(mhs2);
    course2.addMahasiswa(mhs3);
    course3.addMahasiswa(mhs1);
    course3.addMahasiswa(mhs3);

    // ------------------------ // Menambahkan data dosen ke course/persebaran mata kuliah // ------------------------ //
    course1.addDosen(dosen1);
    course2.addDosen(dosen2);
    course3.addDosen(dosen3);

    // ------------------------ // keluaran daftar mahasiswa berdasarkan mk yg dikontrak // ------------------------ //
    cout << "\n+--------------------------------------------------------------------+" << endl;
    cout << "       DAFTAR MAHASISWA BERDASARKAN MATA KULIAH YANG DIKONTRAK  \n" << endl;
    cout << " 1. Mata Kuliah  " << course1.getNamaMataKuliah() << ":" << endl;
    vector<Mahasiswa> list_mhs1 = course1.getMhs();
    for (int i = 0; i < list_mhs1.size(); i++){
        cout << "    - " << list_mhs1[i].getNama() << endl;
    }

    cout << " 2. Mata Kuliah " << course2.getNamaMataKuliah() << ":" << endl;
    vector<Mahasiswa> list_mhs2 = course2.getMhs();
    for (int i = 0; i < list_mhs2.size(); i++){
        cout << "    - " << list_mhs2[i].getNama() << endl;
    }

    cout << " 3. Mata Kuliah " << course3.getNamaMataKuliah() << ":" << endl;
    vector<Mahasiswa> list_mhs3 = course3.getMhs();
    for (int i = 0; i < list_mhs3.size(); i++){
        cout << "    - " << list_mhs3[i].getNama() << endl;
    }
	cout << "\n+--------------------------------------------------------------------+" << endl;

	
	
    // ------------------------ // keluaran daftar dosen berdasarkan mk yang diampunya // ------------------------ //
    cout << "\n+--------------------------------------------------------------------+" << endl;
    cout << "         DAFTAR DOSEN BERDASARKAN MATA KULIAH YANG DIAMPU \n" << endl;
    cout << " 1. Mata Kuliah  " << course1.getNamaMataKuliah() << ":" << endl;
    vector<Dosen> list_dsn1 = course1.getDosenn();
    for (int i = 0; i < list_dsn1.size(); i++){
        cout << "    - " << list_dsn1[i].getNama() << endl;
    }

    cout << " 2. Mata Kuliah " << course2.getNamaMataKuliah() << ":" << endl;
    vector<Dosen> list_dsn2 = course2.getDosenn();
    for (int i = 0; i < list_dsn2.size(); i++){
        cout << "    - " << list_dsn2[i].getNama() << endl;
    }

    cout << " 3. Mata Kuliah " << course3.getNamaMataKuliah() << ":" << endl;
    vector<Dosen> list_dsn3 = course3.getDosenn();
    for (int i = 0; i < list_dsn3.size(); i++){
        cout << "    - " << list_dsn3[i].getNama() << endl;
    }
    cout << "\n+--------------------------------------------------------------------+" << endl;


    // ------------------------ // data hardcode prodi // ------------------------ //
    ProgramStudi ps("Hubungan Internasional", "64201", "");

    // ------------------------ // menampilkan data informasi prodi // ------------------------ //
    cout << "\n+--------------------------------------------------------------------+" << endl;
    cout << "\n                INFORMASI DATA PROGRAM STUDI \n" << endl;
    cout << " Nama Program Studi  : " << ps.getNamaProdi() << endl;
    cout << " Kode Program Studi  : " << ps.getKode() << endl;
    cout << " Mata Kuliah         :" << endl;
    for (int i = 0; i < listcrs.size(); i++){
    cout << " - " << listcrs[i].getNamaMataKuliah() << endl;
    }
	cout << "\n+--------------------------------------------------------------------+\n\n" << endl;
	
	// ------------------------ // footer // ------------------------ //
		cout << "======================================================================" << endl;
		cout << "                       Copyrigt 2023. IBNU ADENG KURNIA";
		cout << endl << "                              All Rights Reserved";
		cout << "\n======================================================================\n" << endl;
    
	return 0;
};
