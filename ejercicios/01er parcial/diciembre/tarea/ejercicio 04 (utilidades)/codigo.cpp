//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "codigo.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

int nn = 0 ; /*para hacer funcionar la
 funcion Edit1Change, click change..
 solo una vez al comienzo del programa. */

void __fastcall TForm1::Edit1Change(TObject *Sender)
{
if (nn ==0) {
	Edit1->Text="" ;
	nn++ ;
	}
// listo. Solo lo hará AL COMENZAR el programa.
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int CE, Posi;
float u;

//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
unsigned select, a;

a = Edit1->Text.ToDouble()  ;
select = RadioGroup1->ItemIndex;  // para CE.

switch(select){
	case 0:
		CE = 3 ;
	case 1:
		CE = 4 ;
	case 2:
		CE = 5 ;
	case 3:
		CE = 6 ;
	case 4:
		CE = 7 ;
	case 5:
		CE = 8 ;
}

u = ((Posi + CE) / 100) * a ;

if (Posi == 1)[
	ShowMessage("Disculpe. Usted aún no opta por utilidades.") ;
	]
if (Posi == 30)[
	ShowMessage("Disculpe. Usted ano opta por utilidades.por estar jubilado") ;
	]
else{
	Label2->Caption = "Sus utilidades son: " + AnsiString(Posi) + " Bs.";
	}

Edit1->Enabled= True;
Button2->Enabled= True;
// Para que el boton 2 y edit se habiliten .
}
//---------------------------------------------------------------------------

unsigned Posi;

void __fastcall TForm1::TrackBar1Change(TObject *Sender)
{
	Posi=TrackBar1->Position;
	Label1->Caption= "Años en la empresa:  " + AnsiString(Posi) + " años." ;
}
//---------------------------------------------------------------------------

// ejercicio 5, continuación de la configuración anterior.

unsigned y, w;
int n = 0 ;

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	y = Edit3->Text.ToDouble();
	if (y >= u){
		w = u
		while(y > w){
			w = u - y ;
			u = w + u ;
			n++
		}
		Label3->Caption= "Dentro de " + AnsiString(n) + " años será la 1ra vez que usted no podrá sacar esa cantidad.";
	}
	else{
		Label3->Caption= "Este será su primer año que  NO podrá sacar esa cantidad de dinero.";
	}

}