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

# Membuat kelas dengan nama SivitasAkademik #
## class sivitasakademik merupakan inheriten dengan class human, karena sivitasakademik objeknya ialah manusia.
class SivitasAkademik(Human):
    # # Atribut kelas private 
    # __asal_universitas = ""          ## asal universitas ##
    # __email_edu = ""                 ## email pendidikan ##
    # __fakultas = ""                  ## fakultas ##

    # Konstruktor #
    def __init__(self, nik="-", nama="-", jenis_kelamin='-', asal_universitas="-", email_edu="-", fakultas="-"):
        super().__init__(nik,nama,jenis_kelamin)
        self.__asal_universitas = asal_universitas
        self.__email_edu = email_edu
        self.__fakultas = fakultas
    
    ######################## SETTER DAN GETTER ###########################
    ### Set dan get untuk data asal  Universitas
    def setAsal_universitas(self, asal_universitas):
        self.__asal_universitas = asal_universitas

    def getAsal_universitas(self):
        return self.__asal_universitas

    ### Set dan get untuk email 
    def setEmail_edu(self, email_edu):
        self.__email_edu = email_edu

    def getEmail_edu(self):
        return self.__email_edu
	
    ### Set dan get untuk fakultas 
    def setFakultas(self, fakultas):
        self.__fakultas = fakultas
	
    def getFakultas(self):
        return self.__fakultas