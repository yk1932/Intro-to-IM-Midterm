void setup(){
  size(400,400);
}
 
void draw(){
  background(195, 166, 247);
  translate(200,200);
  noStroke();
  
  //hair
  fill(0);
   ellipse(1,15,400,400);
  
  
  //hair(down)
  fill(0);
   noStroke();
rect(-198, 15, 400, 400);
  
  //face
  fill(235, 192, 129,255);
  ellipse(1,15,300,300);
  fill(0);
  translate(0,20);
  
  //ears
   fill(235, 192, 129,255);
  ellipse(-150,0,60,60);
  ellipse(150,0,60,60);
  
  //mouth
  //arc(0,0,200,200,0,PI);
  
  //eyes
  fill(0);
  ellipse(-80,-80,50,50);
  ellipse(80,-80,50,50);
  
    fill(0);
  ellipse(-80,-80,50,50);
  ellipse(80,-80,50,50);
  
  //pupil
  
  fill(255);
  
   ellipse(-95,-95,20,20);
  ellipse(65,-95,20,20);
  
  fill(123);
    arc(0,0,200,200,PI,0);
    
//Mouth
 fill(0,0,0);
 arc(0,0, 60,50,0, PI, CHORD); //black

 noStroke();
 fill(250,124,168);
 arc(0,14, 50,25,0, PI, CHORD); //tongue
 
 //nose
 
 noFill();
 stroke(0);
 strokeWeight(3);
 arc(0,-50, 25,25, PI, TWO_PI);
 
 //neck
 
   fill(235, 192, 129,255);
   noStroke();
rect(-20, 140, 40, 40);


}
