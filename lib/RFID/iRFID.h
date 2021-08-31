#pragma once
struct RFID_Data {
    int UID;
};


class iRFID {
public:
    virtual void Init() = 0;
    virtual bool NewCardPresented() = 0;

};