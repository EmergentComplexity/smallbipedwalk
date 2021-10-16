



#include <Servo.h>
Servo RightAnkle;
Servo LeftAnkle;
Servo RightKnee;
Servo LeftKnee;
Servo RightHip;
Servo LeftHip;
void StepFWD(int numSteps);
void StepREV(int numSteps);


// initial servo positions for neutral standing position
int RightAnklePos = 90;
int LeftAnklePos = 90;
int RightKneePos = 80 ;
int LeftKneePos = 100 ;
int RightHipPos = 40;
int LeftHipPos = 120 ;

void setup() {
  // put your setup code here, to run once:
RightHip.attach(3);
LeftHip.attach(5);
RightKnee.attach(6);
LeftKnee.attach(9);
RightAnkle.attach(10);
LeftAnkle.attach(11);
}

void loop() {
  // StepREV(5);

   delay(1000);
   StepFWD(5);
}


void StepFWD(int numSteps){
  for( int i = 0; i < numSteps; i++) {
    // initial standing position
     RightAnkle.write(RightAnklePos);
     LeftAnkle.write(LeftAnklePos);
     RightKnee.write(RightKneePos);
     LeftKnee.write(LeftKneePos);
     RightHip.write(RightHipPos);
     LeftHip.write(LeftHipPos);
     delay(500); //1000 //500

     // move right leg backward
     RightHip.write(RightHipPos - 0); //80
     RightKnee.write(RightKneePos - 0); //90
     delay(100); //500 //300

     // lean right
     RightAnkle.write(RightAnklePos - 10);//90
     LeftAnkle.write(LeftAnklePos - 10); //90
     delay(100); //500 //200

     // move left leg forward
     LeftHip.write(LeftHipPos - 10); //110
     LeftKnee.write(LeftKneePos );//90
     delay(500); //1000 //500

     // lean back to neutral position
     RightAnkle.write(RightAnklePos);
     LeftAnkle.write(LeftAnklePos);
     delay(100); //500 //200

     // move left leg neutral
     LeftHip.write(LeftHipPos);
     LeftKnee.write(LeftKneePos );
     delay(100); //500 //200

    RightAnkle.write(RightAnklePos);
     LeftAnkle.write(LeftAnklePos);
     RightKnee.write(RightKneePos);
     LeftKnee.write(LeftKneePos);
     RightHip.write(RightHipPos);
     LeftHip.write(LeftHipPos);
     delay(500); //1000 //500


     // move left leg backward
     LeftHip.write(LeftHipPos +10 ); //110
     LeftKnee.write(LeftKneePos - 10);//90
     delay(100); //500 //200

     // lean
     RightAnkle.write(RightAnklePos + 10); //90
     LeftAnkle.write(LeftAnklePos + 10);  //90  
     delay(100); //500 //200

     // move right leg forward
     RightHip.write(RightHipPos + 30); //80
     RightKnee.write(RightKneePos + 20); //90
     delay(500); //1000 //500

     // lean back to neutral position
     RightAnkle.write(RightAnklePos);//85
     LeftAnkle.write(LeftAnklePos);
     delay(500); //1000 //500


     // move right leg backward
     RightHip.write(RightHipPos);
     RightKnee.write(RightKneePos);
     delay(100); //500 //200
  }
   
}



void StepREV(int numSteps){
  int hipOffset = 15; // lean hips to maintain balence when walking backward
  for (int i = 0; i < numSteps; i++) {
    // initial standing position
    RightAnkle.write(RightAnklePos);
    LeftAnkle.write(LeftAnklePos);
    RightKnee.write(RightKneePos);
    LeftKnee.write(LeftKneePos);
    RightHip.write(RightHipPos + hipOffset);
    LeftHip.write(LeftHipPos - hipOffset);
    delay(500); //1000 //500

 

    // move right leg forward
    RightHip.write(RightHipPos + 20 + hipOffset); //80
    RightKnee.write(RightKneePos + 20); //90
    delay(500); //1000 //500

    // lean right
    RightAnkle.write(RightAnklePos - 10);//90
    LeftAnkle.write(LeftAnklePos - 10); //90
    delay(100); //500 //200

    // move left leg backward
    LeftHip.write(LeftHipPos + 10 - hipOffset); //110
    LeftKnee.write(LeftKneePos + 10);//90
    delay(100); //500 //200

    // lean back to neutral position
    RightAnkle.write(RightAnklePos);
    LeftAnkle.write(LeftAnklePos);
    delay(100); //500 //200

    // move left leg neutral
    LeftHip.write(LeftHipPos - hipOffset);
    LeftKnee.write(LeftKneePos);
    delay(100); //500 //200
 
    // go back to standing
    RightAnkle.write(90);
    LeftAnkle.write(90);
    RightKnee.write(90);
    LeftKnee.write(90);
    RightHip.write(80 + hipOffset);
    LeftHip.write(110 - hipOffset);
    delay(500); //1000 //500


  

    // move left leg forward
    LeftHip.write(LeftHipPos - 20 - hipOffset); //110
    LeftKnee.write(LeftKneePos - 20);//90
    delay(500); //1000 //500

    // lean
    RightAnkle.write(RightAnklePos + 10); //90
    LeftAnkle.write(LeftAnklePos + 10);  //90  
    delay(100); //500 //200


    // move right leg backward
    RightHip.write(RightHipPos - 10 + hipOffset); //80
    RightKnee.write(RightKneePos - 10); //90
    delay(100); //500 //300

    // lean back to neutral position
    RightAnkle.write(RightAnklePos);
    LeftAnkle.write(LeftAnklePos);
    delay(500); //1000 //500


    // move right leg neutral
    RightHip.write(RightHipPos + hipOffset);
    RightKnee.write(RightKneePos);
    delay(100); //500 //200
  }  
}
