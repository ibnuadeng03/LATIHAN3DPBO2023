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

# Membuat kelas dengan nama Human/Manusia #
class Human:
    ## atribute private ##
    # __nik = ""
    # __nama = ""
    # __jenis_kelamin = ""

    # Konstruktor #
    def __init__(self, nik="-", nama="-", jenis_kelamin='-'):
        self.__nik = nik
        self.__nama = nama
        self.__jenis_kelamin = jenis_kelamin
    
    #### setter and gettter ##
    ### setter dan getter untuk NIK ####
    def setNik(self, nik):
        self.__nik = nik

    def getNik(self):
        return self.__nik

    ### setter dan getter untuk nama ###
    def setNama(self, nama):
        self.__nama = nama

    def getNama(self):
        return self.__nama
	
    ### setter dan getter untuk jenis kelamin ###
    def setJenis_kelamin(self, jenis_kelamin):
        self.__jenis_kelamin = jenis_kelamin
	
    def getJenis_kelamin(self):
        return self.__jenis_kelamin