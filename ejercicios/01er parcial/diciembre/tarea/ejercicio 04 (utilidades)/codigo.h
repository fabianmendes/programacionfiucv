//---------------------------------------------------------------------------

#ifndef codigoH
#define codigoH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TRadioGroup *RadioGroup1;
	TEdit *Edit1;
	TTrackBar *TrackBar1;
	TLabel *Label1;
	TButton *Button1;
	TEdit *Edit2;
	TButton *Button2;
	TLabel *Label2;
	TEdit *Edit3;
	void __fastcall Edit1Change(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall TrackBar1Change(TObject *Sender);
//	void __fastcall RadioButton1Click(TObject *Sender);
	void __fastcall Edit2Click(TObject *Sender);
	void __fastcall Button2sClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
