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

# Membuat kelas dengan nama Course #
class Course():
    # # Atribut kelas private 
    # __nama_matakuliah = ""
    # __listDosen = ""
    # __listMahasiswa =""

    ### konstruktor ###
    def __init__(self, nama_matakuliah="-", listDosen=[], listMahasiswa=[]):
        self.__nama_matakuliah = nama_matakuliah
        self.__listDosen = listDosen
        self.__listMahasiswa = listMahasiswa
    
    ##### setter dan getter ######
    #set dan get nama mata kuliah 
    def setNama_matakuliah(self, nama_matakuliah):
        self.__nama_matakuliah = nama_matakuliah

    def getNama_matakuliah(self):
        return self.__nama_matakuliah

    # set dan get daftar nama dosen 
    def setListDosen(self, listDosen):
        self.__listDosen = listDosen

    def getListDosen(self):
        return self.__listDosen
    
    ## menambahkan daftar/list dosen 
    def addListDosen(self, dosen):
        self.__listDosen.append(dosen)
    
    ## string yg berisi daftar/list dosen pengampu 
    def getStrListDosen(self):
        return ', '.join(str(e.getNama()) for e in self.getListDosen() )
	
    # set dan get daftar mahasiswa 
    def setListMahasiswa(self, listMahasiswa):
        self.__listMahasiswa = listMahasiswa
	
    def getListMahasiswa(self):
        return self.__listMahasiswa
    
    ## menambahkan daftar/list mahasiswa
    def addListMahasiswa(self, mahasiswa):
        self.__listMahasiswa.append(mahasiswa)
    
    ## string yg berisi daftar/list mahasiswa
    def getStrListMahasiswa(self):
        return ', '.join(str(e.getNama()) for e in self.getListMahasiswa() )