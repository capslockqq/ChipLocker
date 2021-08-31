#include <RFID_RC522.hpp>
#include <MFRC522.h>
RFID_RC522::RFID_RC522() 
{
    mfrc522 = new MFRC522(21, 22);
}

RFID_RC522::~RFID_RC522() 
{
    
}


void RFID_RC522::Init() 
{
    mfrc522->PCD_Init();
}

bool RFID_RC522::NewCardPresented() 
{
    if (!mfrc522->PICC_IsNewCardPresent()) return false;
    if (!mfrc522->PICC_ReadCardSerial()) return false;
    mfrc522->PICC_HaltA();
    return true;
}

