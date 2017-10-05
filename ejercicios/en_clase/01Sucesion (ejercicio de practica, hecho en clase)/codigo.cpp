//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "codigo.h"
#include <math.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

int x, y ; // 'y' es nuestro exponente para la tolerancia.
int fact, fact0, suma0, suma ; /* FACTorial acumulativo. FACT0rial = funci�n.
	"suma0" es la funci�n de la sucesi�n; "suma" ser� el acumulador. */

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{

x =Edit1->Text.ToInt() ;
y =Edit2->Text.ToInt() ;

fact = 1 ;
n = 1    ;  // contador.
suma = 0 ;

// ToL = pow(10,y) [es la tolerancia, diez (10) elevado a la 'y'].
while ((fabs(suma) > pow(10,y)) && (n <= 20)) {
	/*
	  Suponemos, o sabemos, que la sucesi�n converge y en cero.. o en un Nro.
	*/
	fact0 = (2n-1) ;  // ecuaci�n (del factorial).
	fact = fact * fact0 ;  // factorial acumulativo para la sucesi�n.

	/* Otra forma de hacerlo:
	"f(x)"= (1-x) ;  // funci�n de equis, x, ..habr�a que definirla primero!
	..entonces,
	suma0 = pow("f(x)",2n)
	*/
	suma0 = pow(1-x,2n)/fact ;  // ecuacion de la sucesi�n o sumatoria.
	suma = suma + suma0*pow(-1,n+1) ;  // lo que determinar� el signo para este caso.
	n++ ;  // nuestro contador.
}

if (n > 20){
	Label3->Caption=" " ;
	Label4->Caption="La sucesi�n diverge." ;
}
else {
	Label3->Caption=" "
	Label4->Caption="La sucesi�n converge y en "+AnsiString(suma)+", con X= "+AnsiString(x) ;
}
}
//---------------------------------------------------------------------------
