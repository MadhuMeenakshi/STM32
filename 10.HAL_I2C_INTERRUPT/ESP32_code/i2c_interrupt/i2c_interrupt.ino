#include <Wire.h>

#define SLAVE_ADDR 0x08

String received = "";

// void receiveEvent(int howMany)
// {
//     received = "";

//     while (Wire.available())
//     {
//         received += (char)Wire.read();
//     }

//     Serial.print("Received: ");
//     Serial.println(received);
// }

void receiveEvent(int howMany)
{
    received = "";

    while (howMany--)
    {
        received += (char)Wire.read();
    }

    Serial.println(received);
}

void setup()
{
    Serial.begin(115200);

    Wire.begin(SLAVE_ADDR);

    Wire.onReceive(receiveEvent);
}

void loop()
{
}