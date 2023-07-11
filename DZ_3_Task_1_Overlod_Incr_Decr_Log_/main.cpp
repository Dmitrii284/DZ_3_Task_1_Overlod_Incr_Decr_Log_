#include"Sourse.h"

int main() {

	// Создаем объекты класса Overcoat
	
	Overcoat jeans("Casual","Jeans","Japan", 2500.520);
	jeans.Print();
	Overcoat trousers("Casual","Trousers","Russ", 1500.90);
	trousers.Print();

	Overcoat underpants("Underwear","Underpants","Izrail");
	underpants.Print();
	Overcoat thongs("Underwear","Thongs","Itale", 8500.20);
	thongs.Print();

	Overcoat coat("Tights", "Coat", "Indoneziy", 2888.850);
	coat.Print();
	Overcoat fur_coat("Tights","Fur_coat","Japan", 555500.550);
	fur_coat.Print();

	Overcoat bathrobe("Home clothing","Bathrobe","Itale", 1700.82);
	bathrobe.Print();
	Overcoat tights("Home clothing","Tights","Itale", 800.4);
	tights.Print();



	return 0;
}