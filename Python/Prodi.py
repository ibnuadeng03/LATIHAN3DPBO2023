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

from Dosen import Dosen
from Mahasiswa import Mahasiswa

# Membuat kelas dengan nama program studi #
class Prodi():
    # # Atribut kelas private 
    # __nama_prodi = ""                      ## nama mata kuliah  ##
    # __kode = ""                            ## kode ##
    # __listCourse = ""                      ## list course ##
    # __listDosen = ""                       ## list dosen ##
    # __listMahasiswa = ""                   ## list mahasiswa ##

    ##Konstruktor ##
    def __init__(self, nama_prodi="-", kode="-", listCourse=[], listDosen=[], listMahasiswa=[]):
        self.__nama_prodi = nama_prodi
        self.__kode = kode
        self.__listCourse = listCourse
        self.__listDosen = listDosen
        self.__listMahasiswa = listMahasiswa
    

    ##### setter dan getter ######
    ## set dan get nama prodi
    def setNama_prodi(self, nama_prodi):
        self.__nama_prodi = nama_prodi

    def getNama_prodi(self):
        return self.__nama_prodi

    ## set dan get untuk kode 
    def setKode(self, kode):
        self.__kode = kode

    def getKode(self):
        return self.__kode

    ## set dan get untuk list course
    def setListCourse(self, listCourse):
        self.__listCourse = listCourse

    def getListCourse(self):
        return self.__listCourse
    
    ##  untuk menambahkan daftar course
    def addListCourse(self, course):
        self.__listCourse.append(course)
    
    # string yg berisi list Course
    def getStrListCourse(self):
        return ', '.join(str(e.getNama_matakuliah()) for e in self.getListCourse() )

    ## set dan get untuk List Dosen 
    def setListDosen(self, listDosen):
        self.__listDosen = listDosen

    def getListDosen(self):
        return self.__listDosen
    
    # untuk menambahkan list dosen
    def addListDosen(self, dosen):
        self.__listDosen.append(dosen)
    
    # string yg berisi list dosen
    def getStrListDosen(self):
        return ', '.join(str(e.getNama()) for e in self.getListDosen() )
    
    ## set dan get untuk list mahasiswa
    def setListMahasiswa(self, listMahasiswa):
        self.__listMahasiswa = listMahasiswa
	
    def getListMahasiswa(self):
        return self.__listMahasiswa
    
    # untuk menambhkan list mahasiswa
    def addListMahasiswa(self, mahasiswa):
        self.__listMahasiswa.append(mahasiswa)
    
    # string yang berisi list mahasiswa
    def getStrListMahasiswa(self):
        return ', '.join(str(e.getNama()) for e in self.getListMahasiswa() )