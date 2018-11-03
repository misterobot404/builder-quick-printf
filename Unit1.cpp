// Hello
//---------------------------------------------------------------------------
#include <vcl.h>
#include "Unit1.h"
#include "Unit2.h"
#include <string>
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


void __fastcall TForm1::N3Click(TObject *Sender)
{
	if (OpenDialog1->Execute())
   {
	Memo1->Lines->LoadFromFile(OpenDialog1->FileName);
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N4Click(TObject *Sender)
{
	if (!(ParamCount && FileExists(ParamStr(1))))
 {
	if (SaveDialog1->Execute())
	{
	Memo1->Lines->SaveToFile(SaveDialog1->FileName);
	}
 }
 else
 {
   Memo1->Lines->SaveToFile(ParamStr(1));
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N8Click(TObject *Sender)
{
	Application->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N9Click(TObject *Sender)
{
	 Memo1->CopyToClipboard();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N10Click(TObject *Sender)
{
   Memo1->PasteFromClipboard();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N11Click(TObject *Sender)
{
	Memo1->CutToClipboard();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N12Click(TObject *Sender)
{
	 Memo1->SelText="";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N14Click(TObject *Sender)
{
     if(FontDialog1->Execute())
   {
	 Memo1->Font= FontDialog1->Font;
   };
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N15Click(TObject *Sender)
{
  PrinterSetupDialog1->Execute();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N6Click(TObject *Sender)
{
	if (PrintDialog1->Execute())
	{
		Printer()->BeginDoc();

		for(size_t i = 0; i<Memo1->Lines->Count;++i)
		{
		Printer()->Canvas->TextOutW(300,200,Memo1->Lines->Strings[i]);
        }

		Printer()->EndDoc();
	};
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormCreate(TObject *Sender)
{
if (ParamCount && FileExists(ParamStr(1)))
	Memo1->Lines->LoadFromFile(ParamStr(1));

	Memo1->Color = RGB (26,30,36);
	Memo1->Font->Color = RGB (205,211,222);

 if (ParamCount && FileExists(ParamStr(1)))
 {
	StatusBar1->Panels->Items[0]->Width = StatusBar1->Canvas-> TextWidth(ParamStr(1)) + 80;
	StatusBar1->Panels->Items[0]->Text = "Path: " + ParamStr(1);
 }

 StatusBar1->Panels->Items[1]->Width = 80;
 StatusBar1->Panels->Items[1]->Text = "Characters: " + String(Memo1->Text.Length());

 ShowScrollBar(Form1->Memo1->Handle,SB_VERT,false);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Memo1Change(TObject *Sender)
{
  StatusBar1->Panels->Items[1]->Text = "Characters: " + String(Memo1->Text.Length());

  int a = (Memo1->Height) / (abs(Memo1->Font->Height));

  if((Memo1->Lines->Count)>(a-2))
  {
	ShowScrollBar(Form1->Memo1->Handle,SB_VERT,true);
  }
  else
  {
    ShowScrollBar(Form1->Memo1->Handle,SB_VERT,false);
  }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Saveas1Click(TObject *Sender)
{
   if (SaveDialog1->Execute())
	{
	Memo1->Lines->SaveToFile(SaveDialog1->FileName);
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Classic1Click(TObject *Sender)
{
	Form2->Color = RGB (239,241,245);
	Form2->StaticText1->Color = RGB (239,241,245);
	Form2->StaticText2->Color = RGB (239,241,245);
	Form2->StaticText3->Color = RGB (239,241,245);

	Form2->StaticText1->Font->Color = RGB (29,28,34);
	Form2->StaticText2->Font->Color = RGB (29,28,34);
	Form2->StaticText3->Font->Color = RGB (29,28,34);

	Memo1->Color = RGB (239,241,245);
	Memo1->Font->Color = RGB (29,28,34);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Black1Click(TObject *Sender)
{
	Form2->Color = RGB (26,30,36);
	Form2->StaticText1->Color = RGB (26,30,36);
	Form2->StaticText2->Color = RGB (26,30,36);
	Form2->StaticText3->Color = RGB (26,30,36);

	Form2->StaticText1->Font->Color = RGB (205,211,222);
	Form2->StaticText2->Font->Color = RGB (205,211,222);
	Form2->StaticText3->Font->Color = RGB (205,211,222);

   Memo1->Color = RGB (26,30,36);
   Memo1->Font->Color = RGB (205,211,222);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AboutquickPrintf1Click(TObject *Sender)
{
	Form2->Position=poMainFormCenter;
	Form2->Show();
}
//---------------------------------------------------------------------------
