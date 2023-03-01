''' 
	Saya Ibnu Adeng Kurnia NIM 2101769 mengerjakan latihan ke-4
	dalam mata kuliah desain dan pemrograman berorientasi objek C2 2023
	untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. 
	Aamiin.
'''

'''  
    Design ini disusun dan/atau digunakan hanya untuk lingkungan sendiri.
	Tidak untuk menjadi konsumsi/kepentingan umum.
	Hanya untuk melengkapi tugas DPBO 2023.
'''

from Human import Human
from SivitasAkademik import SivitasAkademik
from Mahasiswa import Mahasiswa
from Prodi import Prodi
from Dosen import Dosen
from Course import Course

############ Pendeklarasian/penampungan untuk list data  ##############
listMhs = []
listDosen = []
listCourse = []
listProdi = []

###### DATA HARCODE PERTAMA BERISI DATA MAHASISWA #####
        #### Data Hardcode untuk input data mahasiswa yang pertama  ###
mhs1 = Mahasiswa()
mhs1.setNim("100533402625")	
mhs1.setNama("Arya Saloka Yudha Prawira")
mhs1.setJenis_kelamin("Pria")
mhs1.setFakultas("Pendidikan Teknik Informatika")
mhs1.setNik("3183749492834957442")
mhs1.setAsal_universitas("Universtas Negeri Malang")
mhs1.setEmail_edu("aryasaloka@gmail.com")
listMhs.append(mhs1)

        #### Data Hardcode untuk input data mahasiswa yang kedua  ###
mhs2 = Mahasiswa()
mhs2.setNim("14485920283923")
mhs2.setNama("Amanda Manopo")
mhs2.setJenis_kelamin("Wanita")
mhs2.setFakultas("Fakultas Hukum")
mhs2.setNik("3482638494746383934")
mhs2.setAsal_universitas("Universitas Indonesia")
mhs2.setEmail_edu("andin@gmail.com")
listMhs.append(mhs2)

        ## memasukkan data kedalam list mahasiswa ##
listMhs2 = []
listMhs2.append(Mahasiswa("2378172991821","Hetty Koes Endang","Wanita","Fakultas Seni dan Sastra","bundahetty@isbi.edu","ISBI","3163847293719321"))
listMhs2.append(mhs2)
listMhs2.append(mhs1)


###### DATA HARCODE KEDUA BERISI DATA Dosen #####
        #### Data Hardcode untuk input data dosen yang pertama  ###
dosen1 = Dosen()
dosen1.setNama("Dr. Asep Wahyudin, S.Kom., M.T")
dosen1.setJenis_kelamin("Pria")
dosen1.setNip("197112232006041001")
dosen1.setPend_terakhir("Strata-3")
dosen1.setKeahlian("Sistem Informasi")
dosen1.setPangkatGolongan("Penata Tingkat I / IIId")
dosen1.setJabatanFungsional("Lektor")
dosen1.setFakultas("FPMIPA")
dosen1.setNik("3263727362373828273")
dosen1.setAsal_universitas("UPI")
dosen1.setEmail_edu("away@upi.edu")
listDosen.append(dosen1)

        #### Data Hardcode untuk input data dosen yang kedua  ###
dosen2 = Dosen()
dosen2.setNama("Prof. Dr. Drs. H. Munir, M.IT.")
dosen2.setJenis_kelamin("Pria")
dosen2.setNip("196603252001121001")
dosen2.setPend_terakhir("Strata 3")
dosen2.setKeahlian("Multimedia")
dosen2.setPangkatGolongan("Pembina Utama Madya / IVd")
dosen2.setJabatanFungsional("Guru Besar")
dosen2.setFakultas("FPMIPA")
dosen2.setNik("35462748273092887282")
dosen2.setAsal_universitas("ITB")
dosen2.setEmail_edu("munir@itb.ac.id")
listDosen.append(dosen2)

###### DATA HARCODE KETIGA BERISI DATA Course #####
    ## data course pertama 
course1 = Course("Sistem Informasi",listDosen,listMhs)
        
    ## data course kedua 
course2 = Course("Metodologi Penelitian",listDosen,listMhs2)
listCourse.append(course1)
listCourse.append(course2)

###### DATA HARCODE KEEMPATBERISI DATA Program Studi #####
    ## data prodi pertama 
prodi1 = Prodi("Matematika","MAT-AB",listCourse,listDosen,listMhs)
        
    ## data prodi kedua 
prodi2 = Prodi("Kimia","KIM-CD",listCourse,listDosen,listMhs2)
listProdi.append(prodi1)
listProdi.append(prodi2)

############ MENAMPILKAN DATA INFORMASI MAHASISWA #############
# Ouput Data
#### ================================================= HEADER ========================================= #######
print("\n                    KEMENTERIAN PENDIDIKAN KEBUDAYAAN RISET DAN TEKNOLOGI")
print("                          PUSAT DATA DAN TEKNOLOGI INFORMASI (PUSDATIN)")
print("                           PANGKALAN DATA PENDIDIKAN TINGGI (PDDIKTI)")
print("                              DIREKTORAT JENDERAL PENDIDIKAN TINGI")
print("             Sekretariat Direktorat Jenderal Pendidikan Tinggi, Kementerian Pendidikan")
print("                Kebudayaan Riset dan Teknologi , Gedung D, Jalan Jenderal Sudirman,")
print("                               Pintu 1 Senayan, Jakarta Pusat 10270")
print("     Telp. 021-57946104, 021 741 8808. Email : pddikti@kemdikbud.go.id, pusdatin@kemdikbud.go.id")
print(" =========================================================================================================")

print("               Selamat Datang Bapak/Ibu diportal Pangkalan Data Pendidikan Tinggi (PDDikti)")
print("                  PUSDATIN KEMENDIKBUDRISTEKDIKTI Direktorat Jenderal Pendidikan Tinggi")

print(" ---------------------------------------------------------------------------------------------------------")
print("                                        DATA POKOK PENDIDIKAN")
print("                                       UNIVERSITAS IKATAN BATIN")
print("                                   TAHUN PEMBAHARUAN 2022/2023-Genap")
print(" ---------------------------------------------------------------------------------------------------------\n")

print("Data Informasi MAHASISWA ; ")
for i in range(len(listMhs2)):
    print("+ Mahasiswa Ke-" + str(i+1) + " + ")
    print("  - NIM              : " + listMhs2[i].getNim())
    print("  - Nama             : " + listMhs2[i].getNama())
    print("  - Jenis Kelamin    : " + listMhs2[i].getJenis_kelamin())
    print("  - Fakultas         : " + listMhs2[i].getFakultas())
    print("  - NIK              : " + listMhs2[i].getNik())
    print("  - Asal Universitas : " + listMhs2[i].getAsal_universitas())
    print("  - Email Edu        : " + listMhs2[i].getEmail_edu())
    print()

############ MENAMPILKAN DATA INFORMASI DOSEN#############
print("Detail Informasi Dosen")
for i in range(len(listDosen)):
    print("+ Dosen Ke- " + str(i+1) + " + ")
    print("  - NIK                : " + listDosen[i].getNip())
    print("  - Nama               : " + listDosen[i].getNama())
    print("  - Jenis Kelamin      : " + listDosen[i].getJenis_kelamin())
    print("  - Fakultas           : " + listDosen[i].getFakultas())
    print("  - NIK                : " + listDosen[i].getNik())
    print("  - Asal Universitas   : " + listDosen[i].getAsal_universitas())
    print("  - Email Edu          : " + listDosen[i].getEmail_edu())
    print("  - Pendidikan         : " + listDosen[i].getPend_terakhir())
    print("  - Keahlian           : " + listDosen[i].getKeahlian())
    print("  - Pangkat/Golongan   : " + listDosen[i].getPangkatGolongan())
    print("  - Jabatan Fungsional : " + listDosen[i].getJabatanFungsional())
    print()

############ MENAMPILKAN DATA INFORMASI COURSER #############
print("Detail Informasi Course")
for i in range(len(listCourse)):
    print("+  Course " + str(i+1) + " + ")
    print("   - Mata Kuliah      : " + listCourse[i].getNama_matakuliah())
    print("   - Dosen            : " + listCourse[i].getStrListDosen())
    print("   - Mahasiswa        : " + listCourse[i].getStrListMahasiswa())
    print()

############ MENAMPILKAN DATA INFORMASI PROGRAM STUDI #############
print("Detail Informasi Program Studi")
for i in range(len(listProdi)):
    print(" +  Program Studi " + str(i+1) + " + ")
    print("    - Nama Program Studi : " + listProdi[i].getNama_prodi())
    print("    - Kode               : " + listProdi[i].getKode())
    print("    - Mata Kuliah        : " + listProdi[i].getStrListCourse())
    print("    - Dosen              : " + listProdi[i].getStrListDosen())
    print("    - Mahasiswa          : " + listProdi[i].getStrListMahasiswa())
    print()

############################ ======================== FOOTER ========================= ########################################################S
print("\n                                   Copyrigt © 2023. IBNU ADENG KURNIA")
print("                                           All Rights Reserved")