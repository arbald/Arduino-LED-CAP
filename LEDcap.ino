#include <Adafruit_NeoPixel.h>

int LEDPIN = 10;
int LEDCOUNT = 200;

int button = 5;
int state;
int value = 0;




Adafruit_NeoPixel strip = Adafruit_NeoPixel(LEDCOUNT, LEDPIN, NEO_GRB + NEO_KHZ800);

uint32_t yellow = strip.Color(255,255,0);
uint32_t red = strip.Color(255,0,0);



void general(){

    strip.fill(yellow,0,13); //yellow
    strip.fill(yellow,28,9);
    strip.fill(yellow,143,9);
    strip.fill(yellow,167,13);

    strip.setPixelColor(13, 255, 255, 0);
    strip.setPixelColor(38, 255, 255, 0);
    strip.setPixelColor(39, 255, 255, 0);
    strip.setPixelColor(64, 255, 255, 0);
    strip.setPixelColor(65, 255, 255, 0);
    strip.setPixelColor(89, 255, 255, 0);
    strip.setPixelColor(90, 255, 255, 0);
    strip.setPixelColor(114, 255, 255, 0);
    strip.setPixelColor(115, 255, 255, 0);
    strip.setPixelColor(140, 255, 255, 0);
    strip.setPixelColor(141, 255, 255, 0);
    strip.setPixelColor(166, 255, 255, 0);

    strip.setPixelColor(41, 255, 255, 0);
    strip.setPixelColor(62, 255, 255, 0);
    strip.setPixelColor(67, 255, 255, 0);
    strip.setPixelColor(87, 255, 255, 0);
    strip.setPixelColor(92, 255, 255, 0);
    strip.setPixelColor(112, 255, 255, 0);
    strip.setPixelColor(117, 255, 255, 0);
    strip.setPixelColor(138, 255, 255, 0);



    strip.setPixelColor(25, 255, 255, 0);
    strip.setPixelColor(26, 255, 255, 0);
    strip.setPixelColor(51, 255, 255, 0);
    strip.setPixelColor(52, 255, 255, 0);
    strip.setPixelColor(77, 255, 255, 0);
    strip.setPixelColor(78, 255, 255, 0);
    strip.setPixelColor(101, 255, 255, 0);
    strip.setPixelColor(102, 255, 255, 0);
    strip.setPixelColor(127, 255, 255, 0);
    strip.setPixelColor(128, 255, 255, 0);
    strip.setPixelColor(153, 255, 255, 0);
    strip.setPixelColor(154, 255, 255, 0);

    strip.setPixelColor(49, 255, 255, 0);
    strip.setPixelColor(54, 255, 255, 0);
    strip.setPixelColor(75, 255, 255, 0);
    strip.setPixelColor(80, 255, 255, 0);
    strip.setPixelColor(99, 255, 255, 0);
    strip.setPixelColor(104, 255, 255, 0);
    strip.setPixelColor(125, 255, 255, 0);
    strip.setPixelColor(130, 255, 255, 0);


    strip.fill(red,14,11); //red
    strip.fill(red,155,11);

    strip.setPixelColor(37, 255, 0, 0);
    strip.setPixelColor(40, 255, 0, 0);
    strip.setPixelColor(63, 255, 0, 0);
    strip.setPixelColor(66, 255, 0, 0);
    strip.setPixelColor(88, 255, 0, 0);
    strip.setPixelColor(91, 255, 0, 0);
    strip.setPixelColor(113, 255, 0, 0);
    strip.setPixelColor(116, 255, 0, 0);
    strip.setPixelColor(139, 255, 0, 0);
    strip.setPixelColor(142, 255, 0, 0);

    strip.setPixelColor(27, 255, 0, 0);
    strip.setPixelColor(50, 255, 0, 0);
    strip.setPixelColor(53, 255, 0, 0);
    strip.setPixelColor(76, 255, 0, 0);
    strip.setPixelColor(79, 255, 0, 0);
    strip.setPixelColor(100, 255, 0, 0);
    strip.setPixelColor(103, 255, 0, 0);
    strip.setPixelColor(126, 255, 0, 0);
    strip.setPixelColor(129, 255, 0, 0);
    strip.setPixelColor(152, 255, 0, 0);

    strip.show();

}

void fork(){
    
  
    strip.clear();
    
    //Fork

    strip.setPixelColor(6, 128, 0, 0);    //red

    strip.setPixelColor(18, 128, 0, 0);
    strip.setPixelColor(19, 128, 0, 0);
    strip.setPixelColor(20, 128, 0, 0);

    strip.setPixelColor(33, 128, 0, 0);
    strip.setPixelColor(32, 128, 0, 0);
    strip.setPixelColor(31, 128, 0, 0);

    strip.setPixelColor(43, 128, 0, 0);
    strip.setPixelColor(45, 128, 0, 0);
    strip.setPixelColor(47, 128, 0, 0);

    strip.setPixelColor(63, 128, 0, 0);
    strip.setPixelColor(58, 128, 0, 0);
    strip.setPixelColor(53, 128, 0, 0);

    strip.setPixelColor(66, 128, 0, 0);
    strip.setPixelColor(67, 128, 0, 0);
    strip.setPixelColor(71, 128, 0, 0);
    strip.setPixelColor(75, 128, 0, 0);
    strip.setPixelColor(76, 128, 0, 0);

    strip.setPixelColor(87, 128, 0, 0);
    strip.setPixelColor(86, 128, 0, 0);
    strip.setPixelColor(81, 128, 0, 0);
    strip.setPixelColor(80, 128, 0, 0);

    strip.setPixelColor(92, 128, 0, 0);
    strip.setPixelColor(99, 128, 0, 0);

    strip.setPixelColor(112, 128, 0, 0);
    strip.setPixelColor(111, 128, 0, 0);
    strip.setPixelColor(108, 128, 0, 0);
    strip.setPixelColor(105, 128, 0, 0);
    strip.setPixelColor(104, 128, 0, 0);

    strip.setPixelColor(118, 128, 0, 0);
    strip.setPixelColor(119, 128, 0, 0);
    strip.setPixelColor(120, 128, 0, 0);
    strip.setPixelColor(121, 128, 0, 0);
    strip.setPixelColor(122, 128, 0, 0);
    strip.setPixelColor(123, 128, 0, 0);
    strip.setPixelColor(124, 128, 0, 0);

    strip.setPixelColor(134, 128, 0, 0);

    strip.setPixelColor(147, 128, 0, 0)
    ;
    strip.setPixelColor(161, 128, 0, 0);
    strip.setPixelColor(160, 128, 0, 0);
    strip.setPixelColor(159, 128, 0, 0);

    strip.setPixelColor(173, 128, 0, 0);

    strip.setPixelColor(7, 255, 255, 0);    //yellow
    strip.setPixelColor(5, 255, 255, 0);

    strip.setPixelColor(17, 255, 255, 0);
    strip.setPixelColor(21, 255, 255, 0);

    strip.setPixelColor(34, 255, 255, 0);
    strip.setPixelColor(30, 255, 255, 0);

    strip.setPixelColor(40, 255, 255, 0);
    strip.setPixelColor(42, 255, 255, 0);
    strip.setPixelColor(44, 255, 255, 0);    
    strip.setPixelColor(46, 255, 255, 0);
    strip.setPixelColor(48, 255, 255, 0);
    strip.setPixelColor(50, 255, 255, 0);

    strip.setPixelColor(64, 255, 255, 0);
    strip.setPixelColor(62, 255, 255, 0);
    strip.setPixelColor(60, 255, 255, 0);
    strip.setPixelColor(59, 255, 255, 0);
    strip.setPixelColor(57, 255, 255, 0);
    strip.setPixelColor(56, 255, 255, 0); 
    strip.setPixelColor(54, 255, 255, 0);
    strip.setPixelColor(52, 255, 255, 0);

    strip.setPixelColor(65, 255, 255, 0);
    strip.setPixelColor(68, 255, 255, 0);
    strip.setPixelColor(70, 255, 255, 0);
    strip.setPixelColor(72, 255, 255, 0);
    strip.setPixelColor(74, 255, 255, 0);
    strip.setPixelColor(77, 255, 255, 0);

    strip.setPixelColor(88, 255, 255, 0);
    strip.setPixelColor(85, 255, 255, 0);
    strip.setPixelColor(84, 255, 255, 0);
    strip.setPixelColor(83, 255, 255, 0);
    strip.setPixelColor(82, 255, 255, 0);
    strip.setPixelColor(79, 255, 255, 0);

    strip.setPixelColor(91, 255, 255, 0);
    strip.setPixelColor(93, 255, 255, 0);
    strip.setPixelColor(95, 255, 255, 0);
    strip.setPixelColor(96, 255, 255, 0);
    strip.setPixelColor(98, 255, 255, 0);
    strip.setPixelColor(100, 255, 255, 0);

    strip.setPixelColor(113, 255, 255, 0);
    strip.setPixelColor(110, 255, 255, 0);
    strip.setPixelColor(109, 255, 255, 0);
    strip.setPixelColor(107, 255, 255, 0);
    strip.setPixelColor(106, 255, 255, 0);
    strip.setPixelColor(103, 255, 255, 0);

    strip.setPixelColor(117, 255, 255, 0);
    strip.setPixelColor(125, 255, 255, 0);

    strip.setPixelColor(137, 255, 255, 0);
    strip.setPixelColor(136, 255, 255, 0);
    strip.setPixelColor(135, 255, 255, 0);
    strip.setPixelColor(133, 255, 255, 0);
    strip.setPixelColor(132, 255, 255, 0);
    strip.setPixelColor(131, 255, 255, 0);

    strip.setPixelColor(146, 255, 255, 0);
    strip.setPixelColor(148, 255, 255, 0);

    strip.setPixelColor(162, 255, 255, 0);
    strip.setPixelColor(158, 255, 255, 0);

    strip.setPixelColor(172, 255, 255, 0);
    strip.setPixelColor(174, 255, 255, 0);

    strip.show();
    delay(10000); 
    strip.clear();
for(int j = 0; j < 5; j++){
  for(int i = 0; i < 390; i++){
        strip.setPixelColor(i, 255, 0, 0);
        strip.setPixelColor(i-25, 255, 255, 0);
        strip.setPixelColor(i-50, 255, 0, 0);
        strip.setPixelColor(i-75, 255, 255, 0);
        strip.setPixelColor(i-100, 255, 0, 0);
        strip.setPixelColor(i-125, 255, 255, 0);
        strip.setPixelColor(i-150, 255, 0, 0);
        strip.setPixelColor(i-180, 255, 255, 0);
        
        strip.show();
      delay(3);
    }
}

    strip.clear();
    delay(100);

    strip.setPixelColor(15, 128, 0, 0);
    strip.setPixelColor(18, 128, 0, 0);
    strip.setPixelColor(19, 128, 0, 0);
    strip.setPixelColor(20, 128, 0, 0);
    strip.setPixelColor(22, 128, 0, 0);
    strip.setPixelColor(24, 128, 0, 0);

    strip.setPixelColor(37, 128, 0, 0);
    strip.setPixelColor(35, 128, 0, 0);
    strip.setPixelColor(33, 128, 0, 0);
    strip.setPixelColor(29, 128, 0, 0);
    strip.setPixelColor(27, 128, 0, 0);

    strip.setPixelColor(40, 128, 0, 0);
    strip.setPixelColor(41, 128, 0, 0);
    strip.setPixelColor(42, 128, 0, 0);
    strip.setPixelColor(44, 128, 0, 0);
    strip.setPixelColor(45, 128, 0, 0);
    strip.setPixelColor(46, 128, 0, 0);
    strip.setPixelColor(48, 128, 0, 0);
    strip.setPixelColor(50, 128, 0, 0);

    strip.setPixelColor(63, 128, 0, 0);
    strip.setPixelColor(61, 128, 0, 0);
    strip.setPixelColor(57, 128, 0, 0);
    strip.setPixelColor(55, 128, 0, 0);
    strip.setPixelColor(53, 128, 0, 0);

    strip.setPixelColor(66, 128, 0, 0);
    strip.setPixelColor(68, 128, 0, 0);
    strip.setPixelColor(70, 128, 0, 0);
    strip.setPixelColor(71, 128, 0, 0);
    strip.setPixelColor(72, 128, 0, 0);
    strip.setPixelColor(74, 128, 0, 0);
    strip.setPixelColor(75, 128, 0, 0);
    strip.setPixelColor(76, 128, 0, 0);   //end of ASU

    strip.setPixelColor(92, 128, 0, 0);
    strip.setPixelColor(93, 128, 0, 0);
    strip.setPixelColor(97, 128, 0, 0);
    strip.setPixelColor(98, 128, 0, 0);
    strip.setPixelColor(99, 128, 0, 0);

    strip.setPixelColor(113, 128, 0, 0);
    strip.setPixelColor(110, 128, 0, 0);
    strip.setPixelColor(107, 128, 0, 0);
    strip.setPixelColor(103, 128, 0, 0);

    strip.setPixelColor(119, 128, 0, 0);
    strip.setPixelColor(126, 128, 0, 0);

    strip.setPixelColor(137, 128, 0, 0);    
    strip.setPixelColor(130, 128, 0, 0);

    strip.setPixelColor(143, 128, 0, 0);
    strip.setPixelColor(152, 128, 0, 0);

    strip.setPixelColor(165, 128, 0, 0);
    strip.setPixelColor(159, 128, 0, 0);
    strip.setPixelColor(155, 128, 0, 0);

    strip.setPixelColor(168, 128, 0, 0);
    strip.setPixelColor(169, 128, 0, 0);
    strip.setPixelColor(170, 128, 0, 0);
    strip.setPixelColor(171, 128, 0, 0);
    strip.setPixelColor(175, 128, 0, 0);
    strip.setPixelColor(176, 128, 0, 0);
    strip.setPixelColor(177, 128, 0, 0);
    strip.show();
    delay(10000);
    strip.clear();

}
void rainbow(int wait) {
  // Hue of first pixel runs 3 complete loops through the color wheel.
  // Color wheel has a range of 65536 but it's OK if we roll over, so
  // just count from 0 to 3*65536. Adding 256 to firstPixelHue each time
  // means we'll make 3*65536/256 = 768 passes through this outer loop:
  for(long firstPixelHue = 0; firstPixelHue < 3*65536; firstPixelHue += 256) {
    for(int i=0; i<strip.numPixels(); i++) { // For each pixel in strip...
      // Offset pixel hue by an amount to make one full revolution of the
      // color wheel (range of 65536) along the length of the strip
      // (strip.numPixels() steps):
      int pixelHue = firstPixelHue + (i * 65536L / strip.numPixels());
      // strip.ColorHSV() can take 1 or 3 arguments: a hue (0 to 65535) or
      // optionally add saturation and value (brightness) (each 0 to 255).
      // Here we're using just the single-argument hue variant. The result
      // is passed through strip.gamma32() to provide 'truer' colors
      // before assigning to each pixel:
      strip.setPixelColor(i, strip.gamma32(strip.ColorHSV(pixelHue)));
    }
    strip.show(); // Update strip with new contents
    delay(wait);  // Pause for a moment
  }
}

void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);
  
  strip.begin();
  strip.show();

  strip.setBrightness(125);

    Serial.begin(9600); //Serial Setup

}

void loop() {
  // put your main code here, to run repeatedly:

  state = digitalRead(button);
  if(state == HIGH){
    value = value + 1; 
  }

  general();

  if( value == 1){

    fork();
    value = 0;
  //ASU();

  /*for(int i = 0; i< 200; i++){
  strip.setPixelColor(i, 255, 0, 255);
  strip.show();

  }
  strip.clear();
  */
  }



  //Print to Serial Monitor
  Serial.print("button = ");
  Serial.println(value);
  Serial.println("state = ");
  Serial.println(state); 

}