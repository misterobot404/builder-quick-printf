//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TMemo *Memo1;
	TMenuItem *N1;
	TMenuItem *N2;
	TMenuItem *N3;
	TMenuItem *N4;
	TMenuItem *N5;
	TMenuItem *N6;
	TMenuItem *N7;
	TMenuItem *N8;
	TMenuItem *N9;
	TMenuItem *N10;
	TMenuItem *N11;
	TMenuItem *N12;
	TOpenDialog *OpenDialog1;
	TSaveDialog *SaveDialog1;
	TFontDialog *FontDialog1;
	TStatusBar *StatusBar1;
	TMenuItem *N13;
	TMenuItem *N14;
	TPrintDialog *PrintDialog1;
	TPrinterSetupDialog *PrinterSetupDialog1;
	TMenuItem *N15;
	TMenuItem *Help1;
	TMenuItem *Style1;
	TMenuItem *Classic1;
	TMenuItem *Black1;
	TMenuItem *AboutquickPrintf1;
	TMenuItem *Saveas1;
	void __fastcall N3Click(TObject *Sender);
	void __fastcall N4Click(TObject *Sender);
	void __fastcall N8Click(TObject *Sender);
	void __fastcall N9Click(TObject *Sender);
	void __fastcall N10Click(TObject *Sender);
	void __fastcall N11Click(TObject *Sender);
	void __fastcall N12Click(TObject *Sender);
	void __fastcall N14Click(TObject *Sender);
	void __fastcall N15Click(TObject *Sender);
	void __fastcall N6Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Memo1Change(TObject *Sender);
	void __fastcall Saveas1Click(TObject *Sender);
	void __fastcall Classic1Click(TObject *Sender);
	void __fastcall Black1Click(TObject *Sender);
	void __fastcall AboutquickPrintf1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
