# Създайте система, която управлява автомобили за отдаване под наем.
# Използвайте класове, наследяване, енкапсулация и добра стуктурираност на кода.
# Искаме базов клас Car, който трябва да има:
# id, marka, model, godina, bazova cena na den, probeg, tip gorivo, neobhodima kategoriq shofiorska knijka, dali e nalichen ili ne
# Този клас трябва да има методи за изчисляване на наема на ден, маркиран като наличен или неналичен, представяне на информацията на автомобила
# Подкласове на Car: икономична кола - 10% отстъпка от базовата цена, Premium Car - 50% над базовата цена,sqv - 30% увеличение, електрическа кола - 20% отстъпка
from abc import ABC, abstractmethod


class Car(ABC):
    def __init__(self, id, brand, year, price_per_day, mileage, type_fuel, licence, available):
        self.id = id
        self.brand = brand
        self.year = year
        self.price_per_day = price_per_day
        self.mileage = mileage
        self.type_fuel = type_fuel
        self.licence = licence
        self.available = available

    @abstractmethod
    def rent_per_day(self):
        pass

    def is_available(self):
        return "Yes, the car is available." if self.available else "No, the car is not available."

    def __repr__(self):
        return f"Car info: \nBrand: {self.brand}\nYear: {self.year}\nRent per day: {self.rent_per_day()}\n" \
               f"Mileage: {self.mileage}\nType fuel: {self.type_fuel}\nLicence category: {self.licence}\n" \
               f"Is available: {self.is_available()}"


class EconomyCar(Car):
    def __init__(self, id, brand, year, price_per_day, mileage, type_fuel, licence, available):
        super().__init__(id, brand, year, price_per_day, mileage, type_fuel, licence, available)

    def rent_per_day(self):
        rent_per_day = self.price_per_day - 0.1 * self.price_per_day

        return f"Rent per day: {rent_per_day}"


class PremiumCar(Car):
    def __init__(self, id, brand, year, price_per_day, mileage, type_fuel, licence, available):
        super().__init__(id, brand, year, price_per_day, mileage, type_fuel, licence, available)

    def rent_per_day(self):
        rent_per_day = self.price_per_day + 0.5 * self.price_per_day

        return f"Rent per day: {rent_per_day}"


class SqvCar(Car):
    def __init__(self, id, brand, year, price_per_day, mileage, type_fuel, licence, available):
        super().__init__(id, brand, year, price_per_day, mileage, type_fuel, licence, available)

    def rent_per_day(self):
        rent_per_day = self.price_per_day + 0.3 * self.price_per_day

        return f"Rent per day: {rent_per_day}"


class ElectricCar(Car):
    def __init__(self, id, brand, year, price_per_day, mileage, type_fuel, licence, available):
        super().__init__(id, brand, year, price_per_day, mileage, type_fuel, licence, available)

    def rent_per_day(self):
        rent_per_day = self.price_per_day - 0.2 * self.price_per_day

        return f"Rent per day: {rent_per_day}"


economy_car = EconomyCar(1, 'neshto1', 2007, 40, 10000, 'fuel1', 'licence1', True)
premium_car = EconomyCar(2, 'neshto2', 2010, 50, 20000, 'fuel2', 'licence2', False)
sqv_car = EconomyCar(3, 'neshto3', 2017, 60, 30000, 'fuel3', 'licence3', True)
electric_car = ElectricCar(4, 'neshto4', 2023, 45, 25000, 'fuel4', 'licence4', False)

print(economy_car)
print(premium_car)
print(sqv_car)
print(electric_car)
