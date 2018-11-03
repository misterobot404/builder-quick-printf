//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
int i = 1;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
	Form2->Color = RGB (26,30,36);
	Form2->StaticText1->Color = RGB (26,30,36);
	Form2->StaticText2->Color = RGB (26,30,36);
	Form2->StaticText3->Color = RGB (26,30,36);

	Form2->StaticText1->Font->Color = RGB (205,211,222);
	Form2->StaticText2->Font->Color = RGB (205,211,222);
	Form2->StaticText3->Font->Color = RGB (205,211,222);

	Timer1->Enabled = true;
	Timer1->Interval = 600;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	long SC_DRAGMOVE = 0xF012;
  if(Button == mbLeft) {
    ReleaseCapture();
	SendMessage(Handle, WM_SYSCOMMAND, SC_DRAGMOVE, 0);
  }
}
//---------------------------------------------------------------------------



void __fastcall TForm2::Timer1Timer(TObject *Sender)
{
   if (i == 1)
{
  Image1->Picture->LoadFromFile("C:\\Users\\miste\\Source\\quickPrintf\\Win32\\Debug\\Ingress_Logo.png");
  i = 2;
}
else
{
  Image1->Picture->LoadFromFile("C:\\Users\\miste\\Source\\quickPrintf\\Win32\\Debug\\Ingress_LogoInv.png");
  i = 1;
}
}
//---------------------------------------------------------------------------

