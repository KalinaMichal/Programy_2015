//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
char p1,p2,p3,p4,p5,p6,p7,p8,p9;  //pole
char kto;




 void resetu()
{
   p1='n' ; p4='n'; p7='n';
   p2='n' ; p5='n'; p8='n';
   p3='n' ; p6='n'; p9='n';

   kto='o';

}


//---------------------------------------------------------------------------
 void sprawdz()
 {
  if ((p1==p2 && p2==p3 && p1!='n')  ||
      (p4==p5 && p5==p6 && p4!='n')  ||
      (p7==p8 && p8==p9 && p7!='n')  ||
      (p1==p4 && p4==p7 && p1!='n')  ||
      (p2==p5 && p5==p8 && p2!='n')  ||
      (p3==p6 && p6==p9 && p3!='n')  ||
      (p1==p5 && p5==p9 && p1!='n')  ||
      (p3==p5 && p5==p7 && p3!='n'))
           {
           char * w;

           if (kto=='x') w="Wygrywa kó³ko!";
           else w="Wygrywa krzy¿yk!";

           Application->MessageBox(w, "Koniec gry",MB_OK);
           }

 }
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
   Image10->Picture->LoadFromFile("img/tlo.bmp");
   Image1->Picture->LoadFromFile("img/nic.bmp");
   Image2->Picture->LoadFromFile("img/nic.bmp");
   Image3->Picture->LoadFromFile("img/nic.bmp");
   Image4->Picture->LoadFromFile("img/nic.bmp");
   Image5->Picture->LoadFromFile("img/nic.bmp");
   Image6->Picture->LoadFromFile("img/nic.bmp");
   Image7->Picture->LoadFromFile("img/nic.bmp");
   Image8->Picture->LoadFromFile("img/nic.bmp");
   Image9->Picture->LoadFromFile("img/nic.bmp");
   tura->Picture->LoadFromFile("img/osmall.bmp");
   
   

   p1='n' ; p4='n'; p7='n';
   p2='n' ; p5='n'; p8='n';
   p3='n' ; p6='n'; p9='n';

   kto='o';

    Image1->Enabled = true;
    Image2->Enabled = true;
    Image3->Enabled = true;
    Image4->Enabled = true;
    Image5->Enabled = true;
    Image6->Enabled = true;
    Image7->Enabled = true;
    Image8->Enabled = true;
    Image9->Enabled = true;


    Plan1->Visible=false;
    Plan2->Visible=false;
    Plan3->Visible=false;
    Plan4->Visible=false;
    Plan5->Visible=false;
    Plan6->Visible=false;

    redo2->Visible=false;
    redo3->Visible=false;
    redo4->Visible=false;
    redo5->Visible=false;
    redo6->Visible=false;


}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image2Click(TObject *Sender)
{
 if (p2=='n')
  {
    if(kto=='o')
    {
    Image2->Picture->LoadFromFile("img/o.bmp");
    p2='o';
    kto='x';
    tura->Picture->LoadFromFile("img/xsmall.bmp");

    }
     else
     {
        Image2->Picture->LoadFromFile("img/x.bmp");
    p2='x';
    kto='o';
    tura->Picture->LoadFromFile("img/osmall.bmp");

     }
      Image2->Enabled=False;
      sprawdz();
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image3Click(TObject *Sender)
{
 if (p3=='n')
  {
    if(kto=='o')
    {
    Image3->Picture->LoadFromFile("img/o.bmp");
    p3='o';
    kto='x';
    tura->Picture->LoadFromFile("img/xsmall.bmp");

    }
     else
     {
        Image3->Picture->LoadFromFile("img/x.bmp");
    p3='x';
    kto='o';
    tura->Picture->LoadFromFile("img/osmall.bmp");

     }
      Image3->Enabled=False;
      sprawdz();
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image4Click(TObject *Sender)
{
 if (p4=='n')
  {
    if(kto=='o')
    {
    Image4->Picture->LoadFromFile("img/o.bmp");
    p4='o';
    kto='x';
    tura->Picture->LoadFromFile("img/xsmall.bmp");

    }
     else
     {
        Image4->Picture->LoadFromFile("img/x.bmp");
    p4='x';
    kto='o';
    tura->Picture->LoadFromFile("img/osmall.bmp");

     }
      Image4->Enabled=False;
      sprawdz();
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image5Click(TObject *Sender)
{
 if (p5=='n')
  {
    if(kto=='o')
    {
    Image5->Picture->LoadFromFile("img/o.bmp");
    p5='o';
    kto='x';
    tura->Picture->LoadFromFile("img/xsmall.bmp");

    }
     else
     {
        Image5->Picture->LoadFromFile("img/x.bmp");
    p5='x';
    kto='o';
    tura->Picture->LoadFromFile("img/osmall.bmp");

     }
      Image5->Enabled=False;
      sprawdz();
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image6Click(TObject *Sender)
{
 if (p6=='n')
  {
    if(kto=='o')
    {
    Image6->Picture->LoadFromFile("img/o.bmp");
    p6='o';
    kto='x';
    tura->Picture->LoadFromFile("img/xsmall.bmp");

    }
     else
     {
        Image6->Picture->LoadFromFile("img/x.bmp");
    p6='x';
    kto='o';
    tura->Picture->LoadFromFile("img/osmall.bmp");

     }
      Image6->Enabled=False;
      sprawdz();
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image7Click(TObject *Sender)
{
 if (p7=='n')
  {
    if(kto=='o')
    {
    Image7->Picture->LoadFromFile("img/o.bmp");
    p7='o';
    kto='x';
    tura->Picture->LoadFromFile("img/xsmall.bmp");

    }
     else
     {
        Image7->Picture->LoadFromFile("img/x.bmp");
    p7='x';
    kto='o';
    tura->Picture->LoadFromFile("img/osmall.bmp");

     }
      Image7->Enabled=False;
      sprawdz();
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image8Click(TObject *Sender)
{
 if (p8=='n')
  {
    if(kto=='o')
    {
    Image8->Picture->LoadFromFile("img/o.bmp");
    p8='o';
    kto='x';
    tura->Picture->LoadFromFile("img/xsmall.bmp");

    }
     else
     {
        Image8->Picture->LoadFromFile("img/x.bmp");
    p8='x';
    kto='o';
    tura->Picture->LoadFromFile("img/osmall.bmp");

     }
      Image8->Enabled=False;
      sprawdz();
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image9Click(TObject *Sender)
{
 if (p9=='n')
  {
    if(kto=='o')
    {
    Image9->Picture->LoadFromFile("img/o.bmp");
    p9='o';
    kto='x';
    tura->Picture->LoadFromFile("img/xsmall.bmp");

    }
     else
     {
        Image9->Picture->LoadFromFile("img/x.bmp");
    p9='x';
    kto='o';
    tura->Picture->LoadFromFile("img/osmall.bmp");

     }
      Image9->Enabled=False;
      sprawdz();
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::planszaClick(TObject *Sender)
{
   p1='n' ; p4='n'; p7='n';
   p2='n' ; p5='n'; p8='n';
   p3='n' ; p6='n'; p9='n';

   kto='o';

Plan1->Visible=true;
  Plan2->Visible=true;
    Plan3->Visible=true;
    Plan4->Visible=true;
    Plan5->Visible=true;
    Plan6->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Plan1Click(TObject *Sender)
{
redo2->Visible=false;
redo3->Visible=false;
redo4->Visible=false;
redo5->Visible=false;
redo6->Visible=false;
Button1->Visible=true;

 Image9->Picture->LoadFromFile("img/1.bmp");
 Image1->Picture->LoadFromFile("img/1.bmp");
 Image2->Picture->LoadFromFile("img/1.bmp");
 Image3->Picture->LoadFromFile("img/1.bmp");
 Image4->Picture->LoadFromFile("img/1.bmp");
 Image5->Picture->LoadFromFile("img/1.bmp");
 Image6->Picture->LoadFromFile("img/1.bmp");
 Image7->Picture->LoadFromFile("img/1.bmp");
 Image8->Picture->LoadFromFile("img/1.bmp");
 Plan2->Visible=false;
 Plan3->Visible=false;
 Plan4->Visible=false;
 Plan5->Visible=false;
 Plan1->Visible=false;
 Plan6->Visible=false;

  Image1->Picture->LoadFromFile("img/nic.bmp");
   Image2->Picture->LoadFromFile("img/nic.bmp");
   Image3->Picture->LoadFromFile("img/nic.bmp");
   Image4->Picture->LoadFromFile("img/nic.bmp");
   Image5->Picture->LoadFromFile("img/nic.bmp");
   Image6->Picture->LoadFromFile("img/nic.bmp");
   Image7->Picture->LoadFromFile("img/nic.bmp");
   Image8->Picture->LoadFromFile("img/nic.bmp");
   Image9->Picture->LoadFromFile("img/nic.bmp");
   tura->Picture->LoadFromFile("img/osmall.bmp");

   p1='n' ; p4='n'; p7='n';
   p2='n' ; p5='n'; p8='n';
   p3='n' ; p6='n'; p9='n';

   kto='o';

    Image1->Enabled = true;
    Image2->Enabled = true;
    Image3->Enabled = true;
    Image4->Enabled = true;
    Image5->Enabled = true;
    Image6->Enabled = true;
    Image7->Enabled = true;
    Image8->Enabled = true;
    Image9->Enabled = true;


    Plan1->Visible=false;
    Plan2->Visible=false;
    Plan3->Visible=false;
    Plan4->Visible=false;
    Plan5->Visible=false;
    Plan6->Visible=false;

    redo2->Visible=false;
    redo3->Visible=false;
    redo4->Visible=false;
    redo5->Visible=false;
    redo6->Visible=false;


}
//---------------------------------------------------------------------------



void __fastcall TForm1::Plan2Click(TObject *Sender)
{
redo2->Visible=true;
redo3->Visible=false;
Button1->Visible=false;
redo4->Visible=false;
redo5->Visible=false;
redo6->Visible=false;

 Image9->Picture->LoadFromFile("img/2.bmp");
 Image1->Picture->LoadFromFile("img/2.bmp");
 Image2->Picture->LoadFromFile("img/2.bmp");
 Image3->Picture->LoadFromFile("img/2.bmp");
 Image4->Picture->LoadFromFile("img/2.bmp");
 Image5->Picture->LoadFromFile("img/2.bmp");
 Image6->Picture->LoadFromFile("img/2.bmp");
 Image7->Picture->LoadFromFile("img/2.bmp");
 Image8->Picture->LoadFromFile("img/2.bmp");
 Plan2->Visible=false;
 Plan3->Visible=false;
 Plan4->Visible=false;
 Plan5->Visible=false;
 Plan1->Visible=false;
 Plan6->Visible=false;


     Image1->Picture->LoadFromFile("img/2.bmp");
   Image2->Picture->LoadFromFile("img/2.bmp");
   Image3->Picture->LoadFromFile("img/2.bmp");
   Image4->Picture->LoadFromFile("img/2.bmp");
   Image5->Picture->LoadFromFile("img/2.bmp");
   Image6->Picture->LoadFromFile("img/2.bmp");
   Image7->Picture->LoadFromFile("img/2.bmp");
   Image8->Picture->LoadFromFile("img/2.bmp");
   Image9->Picture->LoadFromFile("img/2.bmp");
   tura->Picture->LoadFromFile("img/osmall.bmp");

   p1='n' ; p4='n'; p7='n';
   p2='n' ; p5='n'; p8='n';
   p3='n' ; p6='n'; p9='n';

   kto='o';

    Image1->Enabled = true;
    Image2->Enabled = true;
    Image3->Enabled = true;
    Image4->Enabled = true;
    Image5->Enabled = true;
    Image6->Enabled = true;
    Image7->Enabled = true;
    Image8->Enabled = true;
    Image9->Enabled = true;


    Plan1->Visible=false;
    Plan2->Visible=false;
    Plan3->Visible=false;
    Plan4->Visible=false;
    Plan5->Visible=false;
    Plan6->Visible=false;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Plan3Click(TObject *Sender)
{
 redo2->Visible=false;
redo3->Visible=true;
Button1->Visible=false;
redo4->Visible=false;
redo5->Visible=false;
redo6->Visible=false;

 Image9->Picture->LoadFromFile("img/3.bmp");
 Image1->Picture->LoadFromFile("img/3.bmp");
 Image2->Picture->LoadFromFile("img/3.bmp");
 Image3->Picture->LoadFromFile("img/3.bmp");
 Image4->Picture->LoadFromFile("img/3.bmp");
 Image5->Picture->LoadFromFile("img/3.bmp");
 Image6->Picture->LoadFromFile("img/3.bmp");
 Image7->Picture->LoadFromFile("img/3.bmp");
 Image8->Picture->LoadFromFile("img/3.bmp");
 Plan2->Visible=false;
 Plan3->Visible=false;
 Plan4->Visible=false;
 Plan5->Visible=false;
 Plan1->Visible=false;
 Plan6->Visible=false;


    Image1->Picture->LoadFromFile("img/3.bmp");
   Image2->Picture->LoadFromFile("img/3.bmp");
   Image3->Picture->LoadFromFile("img/3.bmp");
   Image4->Picture->LoadFromFile("img/3.bmp");
   Image5->Picture->LoadFromFile("img/3.bmp");
   Image6->Picture->LoadFromFile("img/3.bmp");
   Image7->Picture->LoadFromFile("img/3.bmp");
   Image8->Picture->LoadFromFile("img/3.bmp");
   Image9->Picture->LoadFromFile("img/3.bmp");
   tura->Picture->LoadFromFile("img/osmall.bmp");

   p1='n' ; p4='n'; p7='n';
   p2='n' ; p5='n'; p8='n';
   p3='n' ; p6='n'; p9='n';

   kto='o';

    Image1->Enabled = true;
    Image2->Enabled = true;
    Image3->Enabled = true;
    Image4->Enabled = true;
    Image5->Enabled = true;
    Image6->Enabled = true;
    Image7->Enabled = true;
    Image8->Enabled = true;
    Image9->Enabled = true;


    Plan1->Visible=false;
    Plan2->Visible=false;
    Plan3->Visible=false;
    Plan4->Visible=false;
    Plan5->Visible=false;
    Plan6->Visible=false;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Plan4Click(TObject *Sender)
{

 redo2->Visible=false;
redo3->Visible=false;
Button1->Visible=false;
redo4->Visible=true;
redo5->Visible=false;
redo6->Visible=false;

 Image9->Picture->LoadFromFile("img/4.bmp");
 Image1->Picture->LoadFromFile("img/4.bmp");
 Image2->Picture->LoadFromFile("img/4.bmp");
 Image3->Picture->LoadFromFile("img/4.bmp");
 Image4->Picture->LoadFromFile("img/4.bmp");
 Image5->Picture->LoadFromFile("img/4.bmp");
 Image6->Picture->LoadFromFile("img/4.bmp");
 Image7->Picture->LoadFromFile("img/4.bmp");
 Image8->Picture->LoadFromFile("img/4.bmp");
 Plan2->Visible=false;
 Plan3->Visible=false;
 Plan4->Visible=false;
 Plan5->Visible=false;
 Plan1->Visible=false;
 Plan6->Visible=false;

   Image1->Picture->LoadFromFile("img/4.bmp");
   Image2->Picture->LoadFromFile("img/4.bmp");
   Image3->Picture->LoadFromFile("img/4.bmp");
   Image4->Picture->LoadFromFile("img/4.bmp");
   Image5->Picture->LoadFromFile("img/4.bmp");
   Image6->Picture->LoadFromFile("img/4.bmp");
   Image7->Picture->LoadFromFile("img/4.bmp");
   Image8->Picture->LoadFromFile("img/4.bmp");
   Image9->Picture->LoadFromFile("img/4.bmp");
   tura->Picture->LoadFromFile("img/osmall.bmp");

   p1='n' ; p4='n'; p7='n';
   p2='n' ; p5='n'; p8='n';
   p3='n' ; p6='n'; p9='n';

   kto='o';

    Image1->Enabled = true;
    Image2->Enabled = true;
    Image3->Enabled = true;
    Image4->Enabled = true;
    Image5->Enabled = true;
    Image6->Enabled = true;
    Image7->Enabled = true;
    Image8->Enabled = true;
    Image9->Enabled = true;


    Plan1->Visible=false;
    Plan2->Visible=false;
    Plan3->Visible=false;
    Plan4->Visible=false;
    Plan5->Visible=false;
    Plan6->Visible=false;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Plan6Click(TObject *Sender)
{
 redo2->Visible=false;
redo3->Visible=false;
Button1->Visible=false;
redo4->Visible=false;
redo5->Visible=false;
redo6->Visible=true;

 Image9->Picture->LoadFromFile("img/69.bmp");
 Image1->Picture->LoadFromFile("img/61.bmp");
 Image2->Picture->LoadFromFile("img/62.bmp");
 Image3->Picture->LoadFromFile("img/63.bmp");
 Image4->Picture->LoadFromFile("img/64.bmp");
 Image5->Picture->LoadFromFile("img/65.bmp");
 Image6->Picture->LoadFromFile("img/66.bmp");
 Image7->Picture->LoadFromFile("img/67.bmp");
 Image8->Picture->LoadFromFile("img/68.bmp");
 Plan2->Visible=false;
 Plan3->Visible=false;
 Plan4->Visible=false;
 Plan5->Visible=false;
 Plan1->Visible=false;
 Plan6->Visible=false;

   Image1->Picture->LoadFromFile("img/61.bmp");
   Image2->Picture->LoadFromFile("img/62.bmp");
   Image3->Picture->LoadFromFile("img/63.bmp");
   Image4->Picture->LoadFromFile("img/64.bmp");
   Image5->Picture->LoadFromFile("img/65.bmp");
   Image6->Picture->LoadFromFile("img/66.bmp");
   Image7->Picture->LoadFromFile("img/67.bmp");
   Image8->Picture->LoadFromFile("img/68.bmp");
   Image9->Picture->LoadFromFile("img/69.bmp");
   tura->Picture->LoadFromFile("img/osmall.bmp");

   p1='n' ; p4='n'; p7='n';
   p2='n' ; p5='n'; p8='n';
   p3='n' ; p6='n'; p9='n';

   kto='o';

    Image1->Enabled = true;
    Image2->Enabled = true;
    Image3->Enabled = true;
    Image4->Enabled = true;
    Image5->Enabled = true;
    Image6->Enabled = true;
    Image7->Enabled = true;
    Image8->Enabled = true;
    Image9->Enabled = true;


    Plan1->Visible=false;
    Plan2->Visible=false;
    Plan3->Visible=false;
    Plan4->Visible=false;
    Plan5->Visible=false;
    Plan6->Visible=false;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Plan5Click(TObject *Sender)
{
 redo2->Visible=false;
redo3->Visible=false;
Button1->Visible=true;
redo4->Visible=false;
redo5->Visible=true;
redo6->Visible=false;




 Image9->Picture->LoadFromFile("img/5.bmp");
 Image1->Picture->LoadFromFile("img/5.bmp");
 Image2->Picture->LoadFromFile("img/5.bmp");
 Image3->Picture->LoadFromFile("img/5.bmp");
 Image4->Picture->LoadFromFile("img/5.bmp");
 Image5->Picture->LoadFromFile("img/5.bmp");
 Image6->Picture->LoadFromFile("img/5.bmp");
 Image7->Picture->LoadFromFile("img/5.bmp");
 Image8->Picture->LoadFromFile("img/5.bmp");
 Plan2->Visible=false;
 Plan3->Visible=false;
 Plan4->Visible=false;
 Plan5->Visible=false;
 Plan1->Visible=false;
 Plan6->Visible=false;

   Image1->Picture->LoadFromFile("img/5.bmp");
   Image2->Picture->LoadFromFile("img/5.bmp");
   Image3->Picture->LoadFromFile("img/5.bmp");
   Image4->Picture->LoadFromFile("img/5.bmp");
   Image5->Picture->LoadFromFile("img/5.bmp");
   Image6->Picture->LoadFromFile("img/5.bmp");
   Image7->Picture->LoadFromFile("img/5.bmp");
   Image8->Picture->LoadFromFile("img/5.bmp");
   Image9->Picture->LoadFromFile("img/5.bmp");
   tura->Picture->LoadFromFile("img/osmall.bmp");

   p1='n' ; p4='n'; p7='n';
   p2='n' ; p5='n'; p8='n';
   p3='n' ; p6='n'; p9='n';

   kto='o';

    Image1->Enabled = true;
    Image2->Enabled = true;
    Image3->Enabled = true;
    Image4->Enabled = true;
    Image5->Enabled = true;
    Image6->Enabled = true;
    Image7->Enabled = true;
    Image8->Enabled = true;
    Image9->Enabled = true;


    Plan1->Visible=false;
    Plan2->Visible=false;
    Plan3->Visible=false;
    Plan4->Visible=false;
    Plan5->Visible=false;
    Plan6->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::redo2Click(TObject *Sender)
{


   Image1->Picture->LoadFromFile("img/2.bmp");
   Image2->Picture->LoadFromFile("img/2.bmp");
   Image3->Picture->LoadFromFile("img/2.bmp");
   Image4->Picture->LoadFromFile("img/2.bmp");
   Image5->Picture->LoadFromFile("img/2.bmp");
   Image6->Picture->LoadFromFile("img/2.bmp");
   Image7->Picture->LoadFromFile("img/2.bmp");
   Image8->Picture->LoadFromFile("img/2.bmp");
   Image9->Picture->LoadFromFile("img/2.bmp");
   tura->Picture->LoadFromFile("img/osmall.bmp");

resetu();

    Image1->Enabled = true;
    Image2->Enabled = true;
    Image3->Enabled = true;
    Image4->Enabled = true;
    Image5->Enabled = true;
    Image6->Enabled = true;
    Image7->Enabled = true;
    Image8->Enabled = true;
    Image9->Enabled = true;


    Plan1->Visible=false;
    Plan2->Visible=false;
    Plan3->Visible=false;
    Plan4->Visible=false;
    Plan5->Visible=false;
    Plan6->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::redo3Click(TObject *Sender)
{



   Image1->Picture->LoadFromFile("img/3.bmp");
   Image2->Picture->LoadFromFile("img/3.bmp");
   Image3->Picture->LoadFromFile("img/3.bmp");
   Image4->Picture->LoadFromFile("img/3.bmp");
   Image5->Picture->LoadFromFile("img/3.bmp");
   Image6->Picture->LoadFromFile("img/3.bmp");
   Image7->Picture->LoadFromFile("img/3.bmp");
   Image8->Picture->LoadFromFile("img/3.bmp");
   Image9->Picture->LoadFromFile("img/3.bmp");
   tura->Picture->LoadFromFile("img/osmall.bmp");

    resetu();
 
    Image1->Enabled = true;
    Image2->Enabled = true;
    Image3->Enabled = true;
    Image4->Enabled = true;
    Image5->Enabled = true;
    Image6->Enabled = true;
    Image7->Enabled = true;
    Image8->Enabled = true;
    Image9->Enabled = true;


    Plan1->Visible=false;
    Plan2->Visible=false;
    Plan3->Visible=false;
    Plan4->Visible=false;
    Plan5->Visible=false;
    Plan6->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::redo4Click(TObject *Sender)
{
   Image1->Picture->LoadFromFile("img/4.bmp");
   Image2->Picture->LoadFromFile("img/4.bmp");
   Image3->Picture->LoadFromFile("img/4.bmp");
   Image4->Picture->LoadFromFile("img/4.bmp");
   Image5->Picture->LoadFromFile("img/4.bmp");
   Image6->Picture->LoadFromFile("img/4.bmp");
   Image7->Picture->LoadFromFile("img/4.bmp");
   Image8->Picture->LoadFromFile("img/4.bmp");
   Image9->Picture->LoadFromFile("img/4.bmp");
   tura->Picture->LoadFromFile("img/osmall.bmp");

       Image1->Enabled = true;
    Image2->Enabled = true;
    Image3->Enabled = true;
    Image4->Enabled = true;
    Image5->Enabled = true;
    Image6->Enabled = true;
    Image7->Enabled = true;
    Image8->Enabled = true;
    Image9->Enabled = true;


    Plan1->Visible=false;
    Plan2->Visible=false;
    Plan3->Visible=false;
    Plan4->Visible=false;
    Plan5->Visible=false;
    Plan6->Visible=false;

   resetu();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::redo5Click(TObject *Sender)
{
   Image1->Picture->LoadFromFile("img/5.bmp");
   Image2->Picture->LoadFromFile("img/5.bmp");
   Image3->Picture->LoadFromFile("img/5.bmp");
   Image4->Picture->LoadFromFile("img/5.bmp");
   Image5->Picture->LoadFromFile("img/5.bmp");
   Image6->Picture->LoadFromFile("img/5.bmp");
   Image7->Picture->LoadFromFile("img/5.bmp");
   Image8->Picture->LoadFromFile("img/5.bmp");
   Image9->Picture->LoadFromFile("img/5.bmp");
   tura->Picture->LoadFromFile("img/osmall.bmp");

resetu();

    Image1->Enabled = true;
    Image2->Enabled = true;
    Image3->Enabled = true;
    Image4->Enabled = true;
    Image5->Enabled = true;
    Image6->Enabled = true;
    Image7->Enabled = true;
    Image8->Enabled = true;
    Image9->Enabled = true;


    Plan1->Visible=false;
    Plan2->Visible=false;
    Plan3->Visible=false;
    Plan4->Visible=false;
    Plan5->Visible=false;
    Plan6->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::redo6Click(TObject *Sender)
{
   Image1->Picture->LoadFromFile("img/61.bmp");
   Image2->Picture->LoadFromFile("img/62.bmp");
   Image3->Picture->LoadFromFile("img/63.bmp");
   Image4->Picture->LoadFromFile("img/64.bmp");
   Image5->Picture->LoadFromFile("img/65.bmp");
   Image6->Picture->LoadFromFile("img/66.bmp");
   Image7->Picture->LoadFromFile("img/67.bmp");
   Image8->Picture->LoadFromFile("img/68.bmp");
   Image9->Picture->LoadFromFile("img/69.bmp");
   tura->Picture->LoadFromFile("img/osmall.bmp");

    resetu();

    Image1->Enabled = true;
    Image2->Enabled = true;
    Image3->Enabled = true;
    Image4->Enabled = true;
    Image5->Enabled = true;
    Image6->Enabled = true;
    Image7->Enabled = true;
    Image8->Enabled = true;
    Image9->Enabled = true;


    Plan1->Visible=false;
    Plan2->Visible=false;
    Plan3->Visible=false;
    Plan4->Visible=false;
    Plan5->Visible=false;
    Plan6->Visible=false;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Image1Click(TObject *Sender)
{
     if (p1=='n')
  {
    if(kto=='o')
    {
    Image1->Picture->LoadFromFile("img/o.bmp");
    p1='o';
    kto='x';
    tura->Picture->LoadFromFile("img/xsmall.bmp");

    }
     else
     {
        Image1->Picture->LoadFromFile("img/x.bmp");
    p1='x';
    kto='o';
    tura->Picture->LoadFromFile("img/osmall.bmp");

     }
      Image1->Enabled=False;
      sprawdz();
  }
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Image11Click(TObject *Sender)
{
     if (p1=='n')
  {
    if(kto=='o')
    {
    Image1->Picture->LoadFromFile("img/o.bmp");
    p1='o';
    kto='x';
    tura->Picture->LoadFromFile("img/xsmall.bmp");

    }
     else
     {
        Image1->Picture->LoadFromFile("img/x.bmp");
    p1='x';
    kto='o';
    tura->Picture->LoadFromFile("img/osmall.bmp");

     }
      Image1->Enabled=False;
      sprawdz();
  }        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image12Click(TObject *Sender)
{
 if (p2=='n')
  {
    if(kto=='o')
    {
    Image2->Picture->LoadFromFile("img/o.bmp");
    p2='o';
    kto='x';
    tura->Picture->LoadFromFile("img/xsmall.bmp");

    }
     else
     {
        Image2->Picture->LoadFromFile("img/x.bmp");
    p2='x';
    kto='o';
    tura->Picture->LoadFromFile("img/osmall.bmp");

     }
      Image2->Enabled=False;
      sprawdz();
  }        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image13Click(TObject *Sender)
{
 if (p3=='n')
  {
    if(kto=='o')
    {
    Image3->Picture->LoadFromFile("img/o.bmp");
    p3='o';
    kto='x';
    tura->Picture->LoadFromFile("img/xsmall.bmp");

    }
     else
     {
        Image3->Picture->LoadFromFile("img/x.bmp");
    p3='x';
    kto='o';
    tura->Picture->LoadFromFile("img/osmall.bmp");

     }
      Image3->Enabled=False;
      sprawdz();
  }        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image14Click(TObject *Sender)
{
  if (p4=='n')
  {
    if(kto=='o')
    {
    Image4->Picture->LoadFromFile("img/o.bmp");
    p4='o';
    kto='x';
    tura->Picture->LoadFromFile("img/xsmall.bmp");

    }
     else
     {
        Image4->Picture->LoadFromFile("img/x.bmp");
    p4='x';
    kto='o';
    tura->Picture->LoadFromFile("img/osmall.bmp");

     }
      Image4->Enabled=False;
      sprawdz();
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image15Click(TObject *Sender)
{
 if (p5=='n')
  {
    if(kto=='o')
    {
    Image5->Picture->LoadFromFile("img/o.bmp");
    p5='o';
    kto='x';
    tura->Picture->LoadFromFile("img/xsmall.bmp");

    }
     else
     {
        Image5->Picture->LoadFromFile("img/x.bmp");
    p5='x';
    kto='o';
    tura->Picture->LoadFromFile("img/osmall.bmp");

     }
      Image5->Enabled=False;
      sprawdz();
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image16Click(TObject *Sender)
{
 if (p6=='n')
  {
    if(kto=='o')
    {
    Image6->Picture->LoadFromFile("img/o.bmp");
    p6='o';
    kto='x';
    tura->Picture->LoadFromFile("img/xsmall.bmp");

    }
     else
     {
        Image6->Picture->LoadFromFile("img/x.bmp");
    p6='x';
    kto='o';
    tura->Picture->LoadFromFile("img/osmall.bmp");

     }
      Image6->Enabled=False;
      sprawdz();
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image17Click(TObject *Sender)
{
 if (p7=='n')
  {
    if(kto=='o')
    {
    Image7->Picture->LoadFromFile("img/o.bmp");
    p7='o';
    kto='x';
    tura->Picture->LoadFromFile("img/xsmall.bmp");

    }
     else
     {
        Image7->Picture->LoadFromFile("img/x.bmp");
    p7='x';
    kto='o';
    tura->Picture->LoadFromFile("img/osmall.bmp");

     }
      Image7->Enabled=False;
      sprawdz();
  }        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image18Click(TObject *Sender)
{
 if (p8=='n')
  {
    if(kto=='o')
    {
    Image8->Picture->LoadFromFile("img/o.bmp");
    p8='o';
    kto='x';
    tura->Picture->LoadFromFile("img/xsmall.bmp");

    }
     else
     {
        Image8->Picture->LoadFromFile("img/x.bmp");
    p8='x';
    kto='o';
    tura->Picture->LoadFromFile("img/osmall.bmp");

     }
      Image8->Enabled=False;
      sprawdz();
  }        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image19Click(TObject *Sender)
{
 if (p9=='n')
  {
    if(kto=='o')
    {
    Image9->Picture->LoadFromFile("img/o.bmp");
    p9='o';
    kto='x';
    tura->Picture->LoadFromFile("img/xsmall.bmp");

    }
     else
     {
        Image9->Picture->LoadFromFile("img/x.bmp");
    p9='x';
    kto='o';
    tura->Picture->LoadFromFile("img/osmall.bmp");

     }
      Image9->Enabled=False;
      sprawdz();
  }        
}
//---------------------------------------------------------------------------



