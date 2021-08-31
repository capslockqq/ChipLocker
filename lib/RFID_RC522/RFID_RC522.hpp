#pragma once
#include <iRFID.h>
#ifdef TARGET
#include <MFRC522.h>
#endif 
class RFID_RC522 : public iRFID {
public:
    RFID_RC522();
    ~RFID_RC522();
    void Init() ;
    bool NewCardPresented() ;
private:
    #ifdef TARGET
    MFRC522 *mfrc522;
    #endif
};