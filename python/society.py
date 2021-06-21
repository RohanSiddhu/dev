''' This program creates a class SOCIETY with following inforamtion:
    society_name
    house_no
    no_of_members
    flat
    income

    Methods:
    * An __init__ method to assign initial values of society_name as
      "Surya Apartments", flat as "A Type", house_no as 20,
      no_of_members as 3, income as 25000.
    * Inputdata() - to read data members(society, house_no, no_of_members & income)
      and call allocate_flat().
    * allocate_flat() - To allocate flat according to income
        Income                          Flat
        >=25000                         A Type
        >=20000 and <25000              B Type
        <15000                          C Type
'''
# Coded By: Rohan Siddhu
# Date: 14\10\2019

class SOCIETY:
    society_name=None
    house_no=None
    no_of_members=None
    flat=None
    income=None

    def __init__(self):
        self.society_name="Surya Apartments"
        self.house_no=20
        self.no_of_members=3
        self.flat="A Type"
        self.income=25000

    def Inputdata(self):
        self.society_name=input("Enter society name: ")
        self.house_no=int(input("Enter house number: "))
        self.no_of_members=int(input("Enter number of members: "))
        self.income=int(input("Enter income: "))

        self.allocate_flat()

    def allocate_flat(self):
        if self.income>=25000:
            self.flat="A Type"
        elif self.income>=20000 and self.income<25000:
            self.flat="B Type"
        elif self.income<15000:
            self.flat="C Type"

    def Showdata(self):
        print("Society: ", self.society_name)
        print("House Number: ", self.house_no)
        print("Number of Members: ", self.no_of_members)
        print("Income: ", self.income)
        print("Flat: ", self.flat)

if __name__=='__main__':
    society1=SOCIETY()
    society1.Inputdata()
    society1.Showdata()
