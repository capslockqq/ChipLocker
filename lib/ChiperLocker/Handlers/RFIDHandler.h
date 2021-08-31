#pragma once
#include <iRFID.h>
#include <thread>
class RFIDHandler {
public:
    RFIDHandler(iRFID *RFID);
     ~RFIDHandler();
     void Init();
     void update();

private:
    iRFID *mRFID;
};