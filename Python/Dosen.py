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

from SivitasAkademik import SivitasAkademik

# Membuat kelas dengan nama Dosen #
class Dosen(SivitasAkademik):
    # Atribut kelas private 
    # __nip = ""
    # __pend_terakhir = ""
    # __keahlian =""
    # __pangkatGolongan =""
    # __jabatanFungsional =""

    ## Konstruktor ##
    def __init__(self, nik="-", nama="-", jenis_kelamin='-', asal_universitas="-", email_edu="-", fakultas="-", nip="-", pend_terakhir="-", keahlian="-", pangkatGolongan="-", jabatanFungsional="-"):
        super().__init__(nik, nama, jenis_kelamin, asal_universitas, email_edu, fakultas)
        self.__nip = nip
        self.__pend_terakhir = pend_terakhir
        self.__keahlian = keahlian
        self.__pangkatGolongan = pangkatGolongan
        self.__jabatanFungsional = jabatanFungsional

    ####### SETTER DAN GETTTER #######
    ## set dan get untuk nomor induk pegawai
    def setNip(self, nip):
        self.__nip = nip

    def getNip(self):
        return self.__nip

    # set dan get untuk pendidikan terakhir
    def setPend_terakhir(self, pend_terakhir):
        self.__pend_terakhir = pend_terakhir

    def getPend_terakhir(self):
        return self.__pend_terakhir
	
    # set dan get untuk keahliaan
    def setKeahlian(self, keahlian):
        self.__keahlian = keahlian
	
    def getKeahlian(self):
        return self.__keahlian
    
    # set dan get untuk pangkat/golongan
    def setPangkatGolongan(self, pangkatGolongan):
        self.__pangkatGolongan = pangkatGolongan
	
    def getPangkatGolongan(self):
        return self.__pangkatGolongan
    
    # set dan get untuk jabatan fungsional
    def setJabatanFungsional(self, jabatanFungsional):
        self.__jabatanFungsional = jabatanFungsional
	
    def getJabatanFungsional(self):
        return self.__jabatanFungsional