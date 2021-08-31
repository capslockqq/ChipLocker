#include "RFIDHandler.h"
RFIDHandler::RFIDHandler(iRFID *RFID)
{
    mRFID = RFID;
}

RFIDHandler::~RFIDHandler()
{
}

void RFIDHandler::Init()
{
    mRFID->Init();
}
void RFIDHandler::update()
{
    for (;;)
    {
        if (mRFID->NewCardPresented())
        {
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}
