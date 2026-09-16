#ifndef HPGeDETECTORCONSTRUCTION_HH
#define HPGeDETECTORCONSTRUCTION_HH

#include "G4VUserDetectorConstruction.hh"

#include "G4Box.hh"
#include "G4Sphere.hh"
#include "G4Tubs.hh"

#include "G4LogicalVolume.hh"
#include "G4VPhysicalVolume.hh"
#include "G4PVPlacement.hh"
#include "G4Material.hh"

#include "G4NistManager.hh"
#include "G4SystemOfUnits.hh"
#include "G4UnitsTable.hh"

#include "G4VisAttributes.hh"
#include "G4Color.hh"
#include "G4SDManager.hh"

#include "HPGeSensitiveDetector.hh"
#include "CADMesh.hh"


class HPGeDetectorConstruction : public G4VUserDetectorConstruction
{
public:
	HPGeDetectorConstruction();
	virtual ~HPGeDetectorConstruction();

	virtual G4VPhysicalVolume *Construct();

private:
	G4LogicalVolume *logicDetector;

	virtual void ConstructSDandField();
};


#endif
