#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
	
	SetConsoleTitle("Mraveniste");
	
	float vaha, vyslednymravenec, vahamravenec, kolikze, mraveniste;
	
	vahamravenec = 0.00015; //pocitame nejakeho prumerneho mravence ktery neni moc ani malo
	mraveniste = 1000000;  //bereme v uvahu prumerne ceske vyspele mraveniste se stabilnim vladnim systemem
	
	printf("Zadej svou vahu v Kg: ");
	scanf("%f", &vaha);
	
	vyslednymravenec = vaha / vahamravenec;
	kolikze = vyslednymravenec / mraveniste;
	
	printf("Na tvou vahu by bylo potreba okolo %.0f mravencu, coz je %.1f jednoho mraveniste!", vyslednymravenec, kolikze);
}
