const unsigned long howLong = 1000;  // Delay in microseconds
const int NUM_LIGHTS = 64;  // Number of lights
int lights[NUM_LIGHTS];  // Array to store the state of each light (1 or 0)

void setup() {
  // Set the corresponding pins as OUTPUT
  DDRC = B11111111;  // Set pins D0 to D7 as OUTPUT
}

void loop() {


lights[60] = 1;
//lights[61] = 1;
//lights[13] = 1;
lights[14] = 1;
//lights[15] = 1;
//lights[60] = 1;

int pinNumber[] = {

(lights[0] << 0) | (lights[1] << 1) | (lights[2] << 2) | (lights[3] << 3) | (0 << 4) | (0 << 5) | (0 << 6) | (0 << 7),
(lights[4] << 0) | (lights[5] << 1) | (lights[6] << 2) | (lights[7] << 3) | (0 << 4) | (0 << 5) | (0 << 6) | (1 << 7),
(lights[8] << 0) | (lights[9] << 1) | (lights[10] << 2) | (lights[11] << 3) | (0 << 4) | (0 << 5) | (1 << 6) | (0 << 7),
(lights[12] << 0) | (lights[13] << 1) | (lights[14] << 2) | (lights[15] << 3) | (0 << 4) | (0 << 5) | (1 << 6) | (1 << 7),
(lights[16] << 0) | (lights[17] << 1) | (lights[18] << 2) | (lights[19] << 3) | (0 << 4) | (1 << 5) | (0 << 6) | (0 << 7),
(lights[20] << 0) | (lights[21] << 1) | (lights[22] << 2) | (lights[23] << 3) | (0 << 4) | (1 << 5) | (0 << 6) | (1 << 7),
(lights[24] << 0) | (lights[25] << 1) | (lights[26] << 2) | (lights[27] << 3) | (0 << 4) | (1 << 5) | (1 << 6) | (0 << 7),
(lights[28] << 0) | (lights[29] << 1) | (lights[30] << 2) | (lights[31] << 3) | (0 << 4) | (1 << 5) | (1 << 6) | (1 << 7),
(lights[32] << 0) | (lights[33] << 1) | (lights[34] << 2) | (lights[35] << 3) | (1 << 4) | (0 << 5) | (0 << 6) | (0 << 7),
(lights[36] << 0) | (lights[37] << 1) | (lights[38] << 2) | (lights[39] << 3) | (1 << 4) | (0 << 5) | (0 << 6) | (1 << 7),
(lights[40] << 0) | (lights[41] << 1) | (lights[42] << 2) | (lights[43] << 3) | (1 << 4) | (0 << 5) | (1 << 6) | (0 << 7),
(lights[44] << 0) | (lights[45] << 1) | (lights[46] << 2) | (lights[47] << 3) | (1 << 4) | (0 << 5) | (1 << 6) | (1 << 7),
(lights[48] << 0) | (lights[49] << 1) | (lights[50] << 2) | (lights[51] << 3) | (1 << 4) | (1 << 5) | (0 << 6) | (0 << 7),
(lights[52] << 0) | (lights[53] << 1) | (lights[54] << 2) | (lights[55] << 3) | (1 << 4) | (1 << 5) | (0 << 6) | (1 << 7),
(lights[56] << 0) | (lights[57] << 1) | (lights[58] << 2) | (lights[59] << 3) | (1 << 4) | (1 << 5) | (1 << 6) | (0 << 7),
(lights[60] << 0) | (lights[61] << 1) | (lights[62] << 2) | (lights[63] << 3) | (1 << 4) | (1 << 5) | (1 << 6) | (1 << 7)

};


  for (int i = 0; i < 16; i++) {
    
    if (lights[i * 4] == 1 || lights[(i * 4) + 1] == 1 || lights[(i * 4) + 2] == 1 || lights[(i * 4) + 3] == 1) {
      // At least one of lights[0], lights[1], or lights[2] equals 1
      PORTC = pinNumber[i];
      delay(howLong);
      PORTC = 0;
      delay(howLong); 
    }
  
  }
  
}