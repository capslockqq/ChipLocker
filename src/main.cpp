
// #include <SPI.h>
// #include <MFRC522.h>
// #include <Handlers/RFIDHandler.h>
// #include <RFID_RC522.hpp>
// #include <FreeRTOS.h>
#include <thread>

// RFIDHandler rfidHandler(new RFID_RC522);

void do_stuff() {
  for (;;) {
    printf("Hello there \n");
    std::this_thread::sleep_for(std::chrono::seconds(10));
  }
}

// std::thread rfidThread([&](){rfidHandler.update();});
// void setup()
// {
//   Serial.begin(9600); // Initialize serial communications with the PC
//   while (!Serial);                                // Do nothing if no serial port is opened (added for Arduinos based on ATMEGA32U4)
//   SPI.begin();                       // Init SPI bus
//   rfidHandler.Init();
  
// }

// void loop()
// {
//   rfidThread.join();
// }

std::thread thread(&do_stuff);
extern "C" {
  void app_main() {
    thread.join();

  }
}

int main() {
  return 0;
}