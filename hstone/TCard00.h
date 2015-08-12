//
// card object definition
// GN, JMU, 2015

#ifndef TCard00_h
#define TCard00_h

#include <TROOT.h>
#include <TChain.h>
#include <TObject.h>
#include <TFile.h>

class TCard00 : public TObject {

public :
    TCard00();
	TCard00(char *aName,Int_t aCost, Int_t aDamage, Int_t aHealth);
	virtual ~TCard00();
	Int_t GetBaseCost() {return BaseCost;};
	Int_t GetCurrentCost() {return CurrentCost;};
	Int_t GetBaseDamage() {return BaseDamage;};
	Int_t GetCurrentDamage() {return CurrentDamage;};
	Int_t GetBaseHealth() {return BaseHealth;};
	Int_t GetCurrentHealth() {return CurrentHealth;};
    const char *GetName() {return Name;};
//   virtual Int_t    Cut(Long64_t entry);
 //  virtual Bool_t   Notify();
 
private:
   Int_t BaseCost;
   Int_t BaseDamage;
   Int_t BaseHealth;
   Int_t CurrentCost;
   Int_t CurrentDamage;
   Int_t CurrentHealth;
   char *Name;
   
};

#endif

#ifdef TCard00_cxx
TCard00::TCard00()
{
	BaseCost=0;
	BaseDamage=0;
	BaseHealth=0;
	CurrentDamage=BaseDamage;
	CurrentHealth=BaseHealth;
	CurrentCost=BaseCost;
	Name="Default";
}

TCard00::TCard00(char *aName,Int_t aCost, Int_t aDamage, Int_t aHealth)
{
    Name=aName;
	BaseCost=aCost;
	BaseDamage=aDamage;
	BaseHealth=aHealth;
	CurrentDamage=BaseDamage;
	CurrentHealth=BaseHealth;
	CurrentCost=BaseCost;
}
TCard00::~TCard00()
{
//   if (!fChain) return;
//   delete fChain->GetCurrentFile();
}

#endif // #ifdef TCard00_cxx
