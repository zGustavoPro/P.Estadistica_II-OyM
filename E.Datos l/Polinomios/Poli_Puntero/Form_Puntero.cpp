//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Form_Puntero.h"
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
void __fastcall TForm1::Button1Click(TObject *Sender)
{
poli = new Poli_Puntero();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
int c=StrToInt(InputBox("Ingrese Coeficiente","",""));
int e=StrToInt(InputBox("Ingrese Exponente","",""));
poli->Poner_Termino(c,e);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
 poli->Mostrar_Puntero(200,80,Canvas);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
  Form1->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
poli->Derivar();
}
//---------------------------------------------------------------------------
