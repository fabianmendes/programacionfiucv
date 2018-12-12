//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "codigo.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

/*
La tarifa de la C.A. La electricidad del Sur es la siguiente:
Bs. 720 con derecho a 24 Kwh
Bs. 81 por Kwh por los siguientes 126 Kwh
Bs. 40 por Kwh por los siguientes 150 Kwh
Bs. 30 por Kwh por los siguientes 300 Kwh
Bs. 26 por Kwh por los siguientes 600 Kwh
Bs. 21 por Kwh por los siguientes 800 Kwh
Bs. 17 por Kwh por el resto del consumo

Dicha tarifa se verá afectada por un factor P que dependerá de la zonificación según la
siguiente tabla:
Zona Factor P
Residencial SubUrbana 2/5
Residencial Urbana 4/5
Residencial Lujo 6/5
Turismo 8/5
Industrial 14/5

-> Realice un programa en Builder C que determine el monto a pagar a la compañía de
electricidad si el usuario da el consumo total en Kwh.
Utilice un Edit para el consumo, un RadioGroup para seleccionar la zona, combinado
con un switch para seleccionar el factor P y un ShowMessage para mostrar el
resultado
*/

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

int n = 0, H, PAGAR = 720, BsX, Total, Consumo, Consmf, P;

float Total, P;

//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
Consumo = Edit1->Text.ToDouble();  // dato dado por el user

while(Consumo > 0){

	switch(n){

	CASE 0:
		// PAGAR= 720; // ojo SINO debo definirlo al principio del cod.
		BsX = 0; H = 24;
	CASE 1: 
		BsX = 81; H = 126;
	CASE 2: 
		BsX = 40; H = 150;
	CASE 3: 
		BsX = 30; H = 300;
	CASE 4: 
		BsX = 26; H = 600;
	CASE 5: 
		BsX = 21; H = 80;
	CASE 6: 
		BsX = 17; H = 1;
	}

	if (n == 6){
		n--;
	}
	
	Consmf = Consumo - H ;
	Dif = Consumo - Consmf ;
	
	if (Consmf < 0){
		Dif = Consmf + H ;
	}
	n++ ;
}

PAGAR = PAGAR + (BsX * Dif) ;

switch(RadioGroup1->ItemIndex){

case 0:
	P = 2/5;
case 1:
	P =  4/5;
case 2:
	P = 6/5;
case 3:
	P = 8/5;
case 4:
	P = 14/5;
}

Total = PAGAR*P;
Label#->Caption= "A pagar: " + Ansistring(Total) ;

} // llave para cierre del Button1Click
