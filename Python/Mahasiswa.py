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

'''
    Kelas mahasiswa teh mangrupikeun bagian tina sivitas akademika, naha ? ya estuning
    tangtos margi sacara struktural sareng fungsionalna ada saling keberkaitan satu sama lain.
'''

from SivitasAkademik import SivitasAkademik

class Mahasiswa(SivitasAkademik):
    # Atribut kelas private 
    #__nim = ""                  ## nomor induk mahasiswa ##

    # KONSTRUKTOR #
    def __init__(self, nik="-", nama="-", jenis_kelamin='-', asal_universitas="-", email_edu="-", fakultas="-", nim="-"):
        super().__init__(nik, nama, jenis_kelamin, asal_universitas, email_edu, fakultas)      # memanggil constructor parent nya
        self.__nim = nim

    ### setter dan getter ####
    # set untuk nim 
    def setNim(self, nim):
        self.__nim = nim

    #get untuk nim 
    def getNim(self):
        return self.__nim
	