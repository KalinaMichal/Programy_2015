//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

AnsiString nazwapliku="";
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------




void __fastcall TForm1::Otwrz1Click(TObject *Sender)
{


      if (Okno->Execute())
      {
      try {
      tresc->Lines->LoadFromFile(Okno->FileName);
      nazwapliku = Okno->FileName;
          }
            catch(...)
            {
             ShowMessage("B��d otwarcia pliku. Upewnij si�, �e plik istnieje na tym dysku  :)");
            }

      }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Zapiszjako1Click(TObject *Sender)
{
    if (Saveplik->Execute())
      {
      try {
      tresc->Lines->SaveToFile(Saveplik->FileName);
      nazwapliku = Saveplik->FileName;
          }
            catch(...)
            {
             ShowMessage("Zapis zako�czy� si� niepowodzeniem!!! :/ niestety");
            }

      }

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Zapisz1Click(TObject *Sender)
{
       if(nazwapliku!="")
       {
       tresc->Lines->SaveToFile(nazwapliku);

       }
       else
       {
      if (Saveplik->Execute())
      {
      try {
      tresc->Lines->SaveToFile(Saveplik->FileName);
      nazwapliku = Saveplik->FileName;
          }
            catch(...)
            {
             ShowMessage("Zapis zako�czy� si� niepowodzeniem!!! :/ niestety");
            }

      }

       }


}
//---------------------------------------------------------------------------
void __fastcall TForm1::Nowy1Click(TObject *Sender)
{
if(Application->MessageBox("Czy napewno chcesz utworzy� nowy plik i zacz�� wszystko od nowa? NAPEWNO!? :O","Potwierd�",
MB_YESNOCANCEL | MB_ICONQUESTION)==IDYES )
{
tresc->Lines->Clear();
nazwapliku="";
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::trescKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
   if (Shift.Contains(ssCtrl))
   {
        if ((Key == 's') || (Key == 'S'))
        {
           Form1->Zapisz1Click(MainMenu1) ;
        }

   }
   if (Shift.Contains(ssCtrl))
   {
        if ((Key == 'n') || (Key == 'N'))
        {
           Form1->Nowy1Click(MainMenu1) ;
        }

   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Zakocz1Click(TObject *Sender)
{
if(Application->MessageBox("Czy napewno chcesz zako�czy� program!? ","Potwierd�",
MB_YESNO | MB_ICONQUESTION)==IDYES )
{
Application->Terminate();
}

   
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
  if(Application->MessageBox("Czy napewno chcesz zako�czy� program!? ","Potwierd�",
MB_YESNO | MB_ICONQUESTION)==IDNO )
 {
 Action=caNone;
 }


}
//---------------------------------------------------------------------------
void __fastcall TForm1::WytnijCtrlX1Click(TObject *Sender)
{
     tresc->CutToClipboard();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::KopiujCtrlC1Click(TObject *Sender)
{
   tresc->CopyToClipboard();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::WklejCtrlV1Click(TObject *Sender)
{
tresc->PasteFromClipboard();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Zawijaniewierszy1Click(TObject *Sender)
{
   if (Zawijaniewierszy1->Checked==true)
   {
     Zawijaniewierszy1->Checked=false;
     tresc->WordWrap = false;
     tresc->ScrollBars= ssBoth;
   }
    else
    {
    Zawijaniewierszy1->Checked=true;
    tresc->WordWrap = true;
    tresc->ScrollBars = ssVertical;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Czcionka1Click(TObject *Sender)
{
   if (Czcionka->Execute())
   {
   //kroj
   tresc->Font->Name = Czcionka->Font->Name;

   //kolor
   tresc->Font->Color = Czcionka->Font->Color;

   //rozmiar
   tresc->Font->Size = Czcionka->Font->Size;

   //styl
   tresc->Font->Style = Czcionka->Font->Style;
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Oprogramie1Click(TObject *Sender)
{
Form2->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Interia1Click(TObject *Sender)
{
   ShellExecute(NULL,"Open","http://www.interia.pl/",NULL,NULL, SW_SHOWNORMAL);           
}
//---------------------------------------------------------------------------

