class Awal:
    def __init__(self,nama):
        self.nama = nama
class Kedua(Awal):
    def __str__(self):
        print("Namaku {}".format(self.nama))
class Ketiga(Kedua):
    obj2 = Kedua("Joni")
