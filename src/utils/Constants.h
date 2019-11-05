
#pragma once

#define MUSIC_EEPROM static_cast<uint16_t>(25)
#define IMAGE_EEPROM static_cast<uint16_t>(650)
#define MENU_DELAY 50
#define REST_DELAY 25
#define NUMBER_OF_NOTES 150
#define NOTE_SAMPLE_DURATION 75

const uint16_t PROGMEM tempos[] = { 250, 200, 175, 150, 125, 100, 75, 50 };
const uint8_t PROGMEM yPos[] = { 12, 20, 32, 40, 48 };
const uint8_t PROGMEM yPos_2[] = { 12, 20, 28, 40, 48, 56 };

const uint16_t PROGMEM noteSeq[8][15] = {

  { NOTE_B0, NOTE_C1, NOTE_D1, NOTE_E1, NOTE_F1, NOTE_G1, NOTE_A1, NOTE_B1, NOTE_C2, NOTE_D2, NOTE_E2, NOTE_F2, NOTE_G2, NOTE_A2, NOTE_B2 },
  { NOTE_B1, NOTE_C2, NOTE_D2, NOTE_E2, NOTE_F2, NOTE_G2, NOTE_A2, NOTE_B2, NOTE_C3, NOTE_D3, NOTE_E3, NOTE_F3, NOTE_G3, NOTE_A3, NOTE_B3 },
  { NOTE_B2, NOTE_C3, NOTE_D3, NOTE_E3, NOTE_F3, NOTE_G3, NOTE_A3, NOTE_B3, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_B4 },
  { NOTE_B3, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5 },
  { NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6, NOTE_D6, NOTE_E6, NOTE_F6, NOTE_G6, NOTE_A6, NOTE_B6 },
  { NOTE_B5, NOTE_C6, NOTE_D6, NOTE_E6, NOTE_F6, NOTE_G6, NOTE_A6, NOTE_B6, NOTE_C7, NOTE_D7, NOTE_E7, NOTE_F7, NOTE_G7, NOTE_A7, NOTE_B7 },
  { NOTE_B6, NOTE_C7, NOTE_D7, NOTE_E7, NOTE_F7, NOTE_G7, NOTE_A7, NOTE_B7, NOTE_C8, NOTE_D8, NOTE_E8, NOTE_F8, NOTE_G8, NOTE_A8, NOTE_B8 },
  { NOTE_B7, NOTE_C8, NOTE_D8, NOTE_E8, NOTE_F8, NOTE_G8, NOTE_A8, NOTE_B8, NOTE_C9, NOTE_D9, NOTE_E9, NOTE_F9, NOTE_G9, NOTE_A9, NOTE_B9 },

};
