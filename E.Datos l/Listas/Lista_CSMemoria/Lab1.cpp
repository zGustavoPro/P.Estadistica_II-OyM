//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Lab1.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
//PtrLista ptrlista;
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button2Click(TObject *Sender)
{
 m->new_espacio(InputBox("Pedir Espacio","",""));
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
  m=new CSMemoria();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button3Click(TObject *Sender)
{
 m->Delete_espacio(StrToInt(InputBox("escriba la direcci�n que desea eliminar","","")));
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button6Click(TObject *Sender)
{
Form2->Close();

}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button5Click(TObject *Sender)
{
m->Mostrar(700,80,Canvas);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button8Click(TObject *Sender)
{
	lista=new Lista(m);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button12Click(TObject *Sender)
{
	 lista->Mostrar_Lista(300,80,Canvas);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button10Click(TObject *Sender)
{
   lista->Inserta_primero(StrToInt(InputBox("Dato","","")));
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button11Click(TObject *Sender)
{
 lista->Inserta_ultimo(StrToInt(InputBox("Dato","","")));
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------

