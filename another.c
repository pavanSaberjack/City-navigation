





#include <GL/glut.h> 



GLfloat X = 0.0f; 
GLfloat Y = 0.0f; 
GLfloat Z = 0.0f; 
GLfloat rotX = 0.0f; 
GLfloat rotY = 0.0f; 
GLfloat rotZ = 0.0f;
GLfloat rotLx = 0.0f; 
GLfloat rotLy = 0.0f; 
GLfloat rotLz = 0.0f; 
GLfloat movr = 0.0f; 
GLfloat movl = 0.0f;

void init(void)
{
    glClearColor (0, 0, 0.0, 0.0); 
   glShadeModel (GL_FLAT); 
    glEnable (GL_LINE_SMOOTH);
    glHint(GL_LINE_SMOOTH_HINT, GL_NICEST); 
    glOrtho(-100.0,100,-10.0, 50.0, 50.0 , -100);
}

// function for building with st stripes 
void building(float x,float y,float z)
{
  glPushMatrix();   
   glTranslatef(X, Y, Z);
   
       //back wall
    glColor3f(x,y,z);
    glBegin(GL_POLYGON);
    glVertex3f(0,-6,-5);
    glVertex3f(5,-6,-5);
    glVertex3f(5,10,-5);
    glVertex3f(0,10,-5);
    glEnd();
   
   
   
   //front wall 	  
    glColor3f(x,y,z);
    glBegin(GL_POLYGON);
    glVertex3f(0,-6,0);
    glVertex3f(5,-6,0);
    glVertex3f(5,10,0);
    glVertex3f(0,10,0);
    glEnd();
   //right wall 
    glColor3f(x,y,z);
    glBegin(GL_POLYGON);
    glVertex3f(5,-6,0);
    glVertex3f(5,-6,-5);
    glVertex3f(5,10,-5);
    glVertex3f(5,10,0);
    glEnd();
   //left wall 
    glColor3f(x,y,z);
    glBegin(GL_POLYGON);
    glVertex3f(0,-6,0);
    glVertex3f(0,-6,-5);
    glVertex3f(0,10,-5);
    glVertex3f(0,10,0);
    glEnd();

    //top
    glColor3f(x,y,z);
    glBegin(GL_POLYGON);
    glVertex3f(0,10,0);
    glVertex3f(5,10,0);
    glVertex3f(5,10,-5);
    glVertex3f(0,10,-5);
    glEnd();

    glColor3f(0.5,0.5,0.5);
    glLineWidth(0.2);
    int i=27;
    GLfloat x1=0;
    while(i>=0)
    {
        if(x1<5)
        {        
        glBegin(GL_LINES);
        glVertex2f(x1,10);
        glVertex2f(x1,-6);
        glEnd();
        i--;
        x1+=0.2;
        }
        else
        break;
    }
   
    glColor3f(0.5,0.5,0.5);
    glLineWidth(0.2);
    i=27;
    x1=0;
    while(i>=0)
    {
        if(x1>-5)
        {        
        glBegin(GL_LINES);
        glVertex3f(5,-6,x1);
        glVertex3f(5,10,x1);
        glEnd();
        i--;
        x1-=0.2;
        }
        else
        break;
    }
    
    glColor3f(0.5,0.5,0.5);
    glLineWidth(0.2);
    i=27;
    x1=0;
    while(i>=0)
    {
        if(x1>-5)
        {        
        glBegin(GL_LINES);
        glVertex3f(x1,-6,-5);
        glVertex3f(x1,10,-5);
        glEnd();
        i--;
        x1+=0.2;
        }
        else
        break;
    }
    
    
       glColor3f(0.5,0.5,0.5);
    glLineWidth(0.2);
    i=27;
    x1=0;
    while(i>=0)
    {
        if(x1>-5)
        {        
        glBegin(GL_LINES);
        glVertex3f(0,-6,x1);
        glVertex3f(0,10,x1);
        glEnd();
        i--;
        x1-=0.2;
        }
        else
        break;
    } 
  
  glPopMatrix(); 	  
    
 
 }

//function for building with horizontal stripes
void building1(float x,float y,float z)
{
  glPushMatrix();   
   glTranslatef(X, Y, Z);
   
       //back wall
    glColor3f(x,y,z);
    glBegin(GL_POLYGON);
    glVertex3f(0,-6,-5);
    glVertex3f(5,-6,-5);
    glVertex3f(5,10,-5);
    glVertex3f(0,10,-5);
    glEnd();
   
   
   
   //front wall 	  
    glColor3f(x,y,z);
    glBegin(GL_POLYGON);
    glVertex3f(0,-6,0);
    glVertex3f(5,-6,0);
    glVertex3f(5,10,0);
    glVertex3f(0,10,0);
    glEnd();
   //right wall 
    glColor3f(x,y,z);
    glBegin(GL_POLYGON);
    glVertex3f(5,-6,0);
    glVertex3f(5,-6,-5);
    glVertex3f(5,10,-5);
    glVertex3f(5,10,0);
    glEnd();
   //left wall 
    glColor3f(x,y,z);
    glBegin(GL_POLYGON);
    glVertex3f(0,-6,0);
    glVertex3f(0,-6,-5);
    glVertex3f(0,10,-5);
    glVertex3f(0,10,0);
    glEnd();

    //top
    glColor3f(x,y,z);
    glBegin(GL_POLYGON);
    glVertex3f(0,10,0);
    glVertex3f(5,10,0);
    glVertex3f(5,10,-5);
    glVertex3f(0,10,-5);
    glEnd();

    glColor3f(0.5,0.5,0.5);
    glLineWidth(0.4);
    float j1=-6;
    while(j1<=10)
    {       
        glBegin(GL_POLYGON);
        glVertex3f(0,j1,0);
        glVertex3f(5,j1,0);
        glVertex3f(5,j1,-5);
        glVertex3f(0,j1,-5);
        glEnd();
        j1+=0.5;
        
    }
  glPopMatrix(); 	  
    
 
 }


// function for windows on building front side 
void window(void)
{
  glPushMatrix();   
     glLineWidth(0.4);
        glBegin(GL_QUADS);
        glVertex3f(0,0,0);
        glVertex3f(1,0,0);
        glVertex3f(1,1,0);
        glVertex3f(0,1,0);
        glEnd();
  glPopMatrix();
     }
     
// function for windows on building left or right side 
void window1(void)
{
  glPushMatrix();   
     glLineWidth(0.4);
        glBegin(GL_QUADS);
        glVertex3f(0,0,0);
        glVertex3f(0,1,0);
        glVertex3f(0,1,-1);
        glVertex3f(0,0,-1);
        glEnd();
  glPopMatrix();
     }     

// fun for buildin with windows     
void building2(float x,float y,float z)
{
  glPushMatrix();   
   glTranslatef(X, Y, Z);
   
   //front wall 	  
    glColor3f(x,y,z);
    glBegin(GL_POLYGON);
    glVertex3f(0,-6,0);
    glVertex3f(5,-6,0);
    glVertex3f(5,10,0);
    glVertex3f(0,10,0);
    glEnd();
   //right wall 
    glColor3f(x,y,z);
    glBegin(GL_POLYGON);
    glVertex3f(5,-6,0);
    glVertex3f(5,-6,-5);
    glVertex3f(5,10,-5);
    glVertex3f(5,10,0);
    glEnd();
   //left wall 
    glColor3f(x,y,z);
    glBegin(GL_POLYGON);
    glVertex3f(0,-6,0);
    glVertex3f(0,-6,-5);
    glVertex3f(0,10,-5);
    glVertex3f(0,10,0);
    glEnd();
    //back wall
    glColor3f(x,y,z);
    glBegin(GL_POLYGON);
    glVertex3f(0,-6,-5);
    glVertex3f(5,-6,-5);
    glVertex3f(5,10,-5);
    glVertex3f(0,10,-5);
    glEnd();
    //top
    glColor3f(x,y,z);
    glBegin(GL_POLYGON);
    glVertex3f(0,10,0);
    glVertex3f(5,10,0);
    glVertex3f(5,10,-5);
    glVertex3f(0,10,-5);
    glEnd();

  glPopMatrix();

     int j1=-5;
     while(j1<10){
        glPushMatrix();  
     glColor3f(0.5,0.5,0.5);          
        glTranslatef(1,j1,0);
        window();
        j1+=2;
       glPopMatrix();  
        
        } 

    j1=-5;
     while(j1<10){
        glPushMatrix();  
     glColor3f(0.5,0.5,0.5);          
        glTranslatef(3,j1,0);
        window();
        j1+=2;
       glPopMatrix();  
        
        } 

 j1=-5;
     while(j1<10){
        glPushMatrix();  
     glColor3f(0.5,0.5,0.5);          
        glTranslatef(0,j1,-1);
        window1();
        j1+=2;
       glPopMatrix();  
        
        } 

j1=-5;
     while(j1<10){
        glPushMatrix();  
     glColor3f(0.5,0.5,0.5);          
        glTranslatef(0,j1,-3);
        window1();
        j1+=2;
       glPopMatrix();  
        
        } 
        
 j1=-5;
     while(j1<10){
        glPushMatrix();  
     glColor3f(0.5,0.5,0.5);          
        glTranslatef(5,j1,-1);
        window1();
        j1+=2;
       glPopMatrix();  
        
        } 

j1=-5;
     while(j1<10){
        glPushMatrix();  
     glColor3f(0.5,0.5,0.5);          
        glTranslatef(5,j1,-3);
        window1();
        j1+=2;
       glPopMatrix();  
        
        }         
        
 }


// horizontall road 
void road(void)
{
  glPushMatrix();
  glTranslatef(X,Y,Z);
   glColor3f(0.158,0.158,0.158);
   glBegin(GL_QUADS);
        glVertex3f(-20,-6,-1);
        glVertex3f(-20,-6,5);
        glVertex3f(20,-6,5);
        glVertex3f(20,-6,-1);  
        glEnd();
                     
  glPopMatrix(); 
 int i;
 
 for(i=-18;i<20;i+=4)
 { 
   glPushMatrix();
   glColor3f(1,1,1);
   glTranslatef(i,-6,2);
   glScalef(30,0.1,1);
   glutSolidCube(0.1);   
   glPopMatrix(); 
 } 
   
}


//vertical road 
void road1(void)
{
  glPushMatrix();
  glTranslatef(X,Y,Z);
   glColor3f(0.158,0.158,0.158);
   glBegin(GL_QUADS);
        glVertex3f(6,-6,1);
        glVertex3f(13,-6,1);
        glVertex3f(13,-6,-100);
        glVertex3f(6,-6,-100);  
        glEnd();             
  glPopMatrix();
  
   int i;
 
 for(i=1;i>-80;i-=4)
 { 
   glPushMatrix();
   glColor3f(1,1,1);
   glTranslatef(9,-6,i);
   glScalef(0.4,0.1,20);
   glutSolidCube(0.1);   
   glPopMatrix(); 
 }
   
}

//car facing right side
void rightcar(float x,float y,float z )
{
 

 
   glTranslatef(movr,0,0);
 
   //back wheel 2
    glPushMatrix();
   glTranslatef(-1.5,-1.3,-1.1);
   glColor3f(0, 0, 0);    
   glutSolidTorus(0.2, 0.3, 50, 50);
   glPopMatrix();
   
    //rear wheel 2
     glPushMatrix();
   glTranslatef(1.5,-1.3,-1.1);
   glColor3f(0, 0, 0);    
   glutSolidTorus(0.2, 0.3, 50, 50);
   glPopMatrix();  
     
     
   glPushMatrix();
   glColor3f(x,y,z);  
   glScalef(3,1,1);
   glutSolidCube(1.5);
   glPopMatrix(); 
   
   glPushMatrix();
   glTranslatef(0.3,-0.6,0);
   glColor3f(x,y,z);    
   glScalef(2.5,.5,1);
   glutSolidCube(2);
   glPopMatrix();
  
  //back wheel 1
    glPushMatrix();
   glTranslatef(-1.5,-1.3,1);
   glColor3f(0, 0, 0);    
   glutSolidTorus(0.2, 0.3, 50, 50);
   glPopMatrix();
  
  //rear wheel 1
     glPushMatrix();
   glTranslatef(1.5,-1.3,1);
   glColor3f(0, 0, 0);    
   glutSolidTorus(0.2, 0.3, 50, 50);
   glPopMatrix();
  
    
}


//car facing left side
void leftcar(float x,float y,float z )
{
 glTranslatef(movl,0,0);
   //back wheel 2
    glPushMatrix();
   glTranslatef(-1.5,-1.3,-1);
   glColor3f(0, 0, 0);    
   glutSolidTorus(0.2, 0.3, 50, 50);
   glPopMatrix();
   
    //rear wheel 2
     glPushMatrix();
   glTranslatef(1.5,-1.3,-1);
   glColor3f(0, 0, 0);    
   glutSolidTorus(0.2, 0.3, 50, 50);
   glPopMatrix();  
     
     
   glPushMatrix();
   glColor3f(x,y,z);  
   glScalef(3,1,1);
   glutSolidCube(1.5);
   glPopMatrix(); 
   
   glPushMatrix();
   glTranslatef(-0.22,-0.6,0);
   glColor3f(x,y,z);    
   glScalef(2.5,.5,1);
   glutSolidCube(2);
   glPopMatrix();
  
  //back wheel 1
    glPushMatrix();
   glTranslatef(-1.5,-1.3,1);
   glColor3f(0, 0, 0);    
   glutSolidTorus(0.2, 0.3, 50, 50);
   glPopMatrix();
  
  //rear wheel 1
     glPushMatrix();
   glTranslatef(1.5,-1.3,1);
   glColor3f(0, 0, 0);    
   glutSolidTorus(0.2, 0.3, 50, 50);
   glPopMatrix();
   
    
}
  
//ocean
void pond1(void)
{
   glPushMatrix();
   glTranslatef(0,-12,30);
   glColor3f(.21, .47, .86);  
   glScalef(5000,1,5);
   glutSolidCube(10);
   glPopMatrix();
  
}

//comp
void pond(void)
{
  glPushMatrix();
  glTranslatef(0,-11,6);
   glColor3f(0,.154,.208);  
   glScalef(200,10,1);
   glutSolidCube(1);
  glPopMatrix(); 
  
  
}

void ship(void) {
     float x,y;
 	//glClearColor(1.0, 1.0, 1.0, 1.0);
 	
     // base
     glColor3f(1.0,0.0,0.0);
   glBegin(GL_QUADS);
   glVertex2f(-0.5,-0.1);
   glVertex2f(0.6,-0.1);
   glVertex2f(0.4,-0.25);
   glVertex2f(-0.45,-0.25);
   glEnd();
     //base end
     
   glColor3f(1.0,1.0,1.0);
   glBegin(GL_POLYGON);
   glVertex2f(-0.6,0.1);
   glVertex2f(-0.3,0.1);
   glVertex2f(-0.25,0.2);
   glVertex2f(-0.2,0.2);
   glVertex2f(-0.15,0.1);
   glVertex2f(0.3,0.1);
    glVertex2f(0.35,0.1);
     glVertex2f(0.4,0.0);
      glVertex2f(0.4,-0.05);
       glVertex2f(0.5,-0.1);
       glVertex2f(-0.5,-0.1);
   glEnd();
   glColor3f(1.0,0.0,0.0);
 	 glBegin(GL_QUADS);
   glVertex2f(0.0,0.2);
   glVertex2f(0.1,0.2);
   glVertex2f(0.18,0.1);
   glVertex2f(0.0,0.1);
   glEnd();
   glColor3f(1.0,0.0,0.0);
 	 glBegin(GL_POLYGON);
   glVertex2f(-0.21,0.2);
   glVertex2f(-0.21,0.4);
   glVertex2f(-0.225,0.45);
   glVertex2f(-0.24,0.4);
   glVertex2f(-0.24,0.2);
   glEnd();
    glColor3f(1.0,0.0,0.0);
   glBegin(GL_QUADS);
   glVertex2f(-0.15,-0.02);
   glVertex2f(-0.15,0.03);
   glVertex2f(-0.1,0.03);
   glVertex2f(-0.1,-0.02);
   glEnd();
   glColor3f(1.0,0.0,0.0);
   glBegin(GL_QUADS);
   glVertex2f(0.0,-0.02);
   glVertex2f(0.0,0.03);
   glVertex2f(-0.05,0.03);
   glVertex2f(-0.05,-0.02);
   glEnd();
   glColor3f(1.0,0.0,0.0);
   glBegin(GL_QUADS);
   glVertex2f(0.05,-0.02);
   glVertex2f(0.05,0.03);
   glVertex2f(0.1,0.03);
   glVertex2f(0.1,-0.02);
   glEnd();
   glColor3f(1.0,0.0,0.0);
   glBegin(GL_QUADS);
   glVertex2f(0.15,-0.02);
   glVertex2f(0.15,0.03);
   glVertex2f(0.2,0.03);
   glVertex2f(0.2,-0.02);
   glEnd();
   glFlush();
   
   }
   
   
void Menu(int id)
{
     int i=0;
   
     switch(id)
     {
               case 1:glClearColor(1,.65,.31,0);
                     
                      break;            
               case 2:glClearColor(0,0,0,0);
                     
                      break;       
               case 3:glClearColor(1,1,1,0);
                      break;
               case 4:exit(0);
                      break;       
     }
     
     
     
}

void cloud(void)
{
     float i,j;
     
     
     for(j=10;j>-10;j-=0.1)        
     {
        for(i=-100;i<100;i+=0.1)
        {
       glColor3f(1,1,1);
       glPushMatrix();
           glScalef(5,3,5);
       glBegin(GL_POINTS);
       glVertex3f(i,-6,j);
       glEnd();
       glPopMatrix();
       }
       }  

     
     }


void building1placing(void)
{
     int a,b=50,c,d;


while(b>0)
{
           d=-200;
for(a=0;a<20;a++)
{
      c=a%3;
      if(c==0)
      {           
      glPushMatrix();
      glTranslatef(b,0,d);
      building1(0.245,0.245,0.220); 
      glPopMatrix();
      }
      else if(c==1)
      {           
      glPushMatrix();
      glTranslatef(b,0,d);
      building2(0.245,0.245,0.220); 
      glPopMatrix();
      }
      else
      {           
      glPushMatrix();
      glTranslatef(b,0,d);
      building(0.245,0.245,0.220); 
      glPopMatrix();
      }
      d=d+10;
}
b=b-6;           
}
     
 }

void building2placing(void)
{
     
     int a,b=190,c,d;
     
     b=-200;
while(b<-150)
{
           d=-200;
for(a=0;a<21;a++)
{
      c=a%3;
      if(c==0)
      {           
      glPushMatrix();
      glTranslatef(b,0,d);
      building1(0.245,0.245,0.220); 
      glPopMatrix();
      }
      else if(c==1)
      {           
      glPushMatrix();
      glTranslatef(b,0,d);
      building2(0.245,0.245,0.220); 
      glPopMatrix();
      }
      else
      {           
      glPushMatrix();
      glTranslatef(b,0,d);
      building(0.245,0.245,0.220); 
      glPopMatrix();
      }
      d=d+10;
}
b=b+6;           
}

 }

void display(void)
{ 
    
     
 //     glOrtho(-500,500,-100,100,50,-1000);
glClear (GL_COLOR_BUFFER_BIT); 
 glColor3f(0,0.255,0.127);

glBegin(GL_QUADS);
        glVertex3f(-200,-6.1,6);
        glVertex3f(200,-6.1,6);
        glVertex3f(200,-6.1,-1000);
        glVertex3f(-200,-6.1,-1000);
glEnd();


pond1();

//ROAD PLANNING

glPushMatrix();
glScalef(7,1,1);
glTranslatef(0,0,-30);
road();    
glPopMatrix();
            
glPushMatrix();
glScalef(4,1,1);
glTranslatef(-15,0,0);
road();    
glPopMatrix();

glPushMatrix();
glScalef(7,1,1);
glTranslatef(0,0,-60);
road();    
glPopMatrix();

glPushMatrix();
glScalef(4,1,1);
glTranslatef(26,0,0);
road();    
glPopMatrix();

glPushMatrix();
glTranslatef(52,0,0);
glScalef(2,1,1);
road();    
glPopMatrix();

glPushMatrix();
glTranslatef(0,0,-240);
glScalef(7,1,3);
road();    
glPopMatrix();

glPushMatrix();
glTranslatef(25,0,-5);
glScalef(2,1,4);
road1();    
glPopMatrix();

glPushMatrix();
glTranslatef(80,0,0);
glScalef(2,1,1);
road1();    
glPopMatrix();

glPushMatrix();
glTranslatef(-35,0,-1.7);
glScalef(1,1,3);
road1();    
glPopMatrix();

glPushMatrix();
glTranslatef(-148,0,-1);
glScalef(1,1,3);
road1();    
glPopMatrix();


glPushMatrix();
glTranslatef(0,0,-3);
glScalef(1,1,3);
road1();    
glPopMatrix();


//ROAD PLANNNG END

glPushMatrix();
glTranslatef(-25,-5,-25);
glRotatef(90,0,1,0);
rightcar(.86, 1.00, .97);
glPopMatrix();

glPushMatrix();
glTranslatef(-25,-5,-50);
glRotatef(90,0,1,0);
rightcar(.55, .10, .10);
glPopMatrix();


glPushMatrix();
glTranslatef(-25,-5,-80);
glRotatef(90,0,1,0);
rightcar(1, .76, .76);
glPopMatrix();

glPushMatrix();
glTranslatef(45,-5,-25);
glRotatef(90,0,1,0);
rightcar(.86, 1.00, .97);
glPopMatrix();

glPushMatrix();
glTranslatef(45,-5,-50);
glRotatef(90,0,1,0);
rightcar(.55, .10, .10);
glPopMatrix();


glPushMatrix();
glTranslatef(45,-5,-80);
glRotatef(90,0,1,0);
rightcar(1, .76, .76);
glPopMatrix();









//BUILDINGS PLANNING

glPushMatrix();
glTranslatef(36,18,-250);
glRotatef(180,0,0,1);
glScalef(1,2.5,1);
building1placing();
glPopMatrix();

glPushMatrix();
glTranslatef(-35,13,-250);
glRotatef(180,0,0,1);
glScalef(1.8,2,0.7);
building1placing();
glPopMatrix();



glPushMatrix();
glTranslatef(140,10,0);
glScalef(1,3,1);
building1placing();
glPopMatrix();



glPushMatrix();
glTranslatef(50,10,-90);
glScalef(1.5,3,1);
building1placing();
glPopMatrix();



glPushMatrix();
glTranslatef(-35,13,-75);
glRotatef(180,0,0,1);
glScalef(1.8,2,0.7);
building1placing();
glPopMatrix();

glPushMatrix();
glTranslatef(0,8,-60);
glRotatef(180,0,0,1);
glScalef(0.3,1.5,0.8);
building1placing();
glPopMatrix();





glPushMatrix();
glTranslatef(-35,33,-32);
glRotatef(180,0,0,1);
glScalef(1.8,4,0.1);
building1placing();
glPopMatrix();

 

glPushMatrix();
building2placing();
glPopMatrix();

glPushMatrix();
glTranslatef(-20,0,-34);
building2(0.255,0.222,0.181); 
glPopMatrix(); 

glPushMatrix();
glTranslatef(-10,0,-34);
glScalef(2,1,2);
building1(.4, .31, .31); 
glPopMatrix();

glPushMatrix();
glTranslatef(20,0,-75);
glScalef(2,1,2);
building1(.4, .31, .31); 
glPopMatrix();


glPushMatrix();
glTranslatef(20,0,-100);
glScalef(2,1,2);
building1(.4, .31, .31); 
glPopMatrix();

// cars placimg behind 
//car placing planning
glPushMatrix();
glTranslatef(0,-6,1);
glScalef(0.5,0.5,0.5);
rightcar(1, .89, .77); 
glPopMatrix();

glPushMatrix();
glTranslatef(20,-5,-30);
rightcar(.85, .53, .10); 
glPopMatrix();

glPushMatrix();
glTranslatef(0,-5,-30);
leftcar(.86, 1.00, .97);
glPopMatrix();

// cars placimg behind end


glPushMatrix();
glTranslatef(20,0,-45);
glScalef(3,1,1);
building2(.18, .31, .31); 
glPopMatrix(); 

 

glPushMatrix();
glTranslatef(14,0,-33);
glScalef(1,1,4);
building(.4, .31, .31); 
glPopMatrix(); 


glPushMatrix();
glTranslatef(14,17.5,-14);
glScalef(4,4,2);
building2(0.238,0.232,0.170); 
glPopMatrix(); 


glPushMatrix();
glTranslatef(8.8,-5,-25);
glRotatef(90,0,1,0);
rightcar(.86, 1.00, .97);
glPopMatrix();

glPushMatrix();
glTranslatef(53,0,-5);
building1(.188, .143, .143); 
glPopMatrix();


glPushMatrix();
glTranslatef(60,3,-5);
glScalef(2,1.5,1);
building2(0.238,0.232,0.170); 
glPopMatrix(); 


glPushMatrix();
glTranslatef(-6,3,-6);
glScalef(1,1.5,1);
building(0.245,0.245,0.220); 
glPopMatrix();

glPushMatrix();
glTranslatef(0,0,-6);
building1(0.238,0.232,0.170); 
glPopMatrix(); 

glPushMatrix();
glTranslatef(-13,0,-5);
building2(0.238,0.232,0.170); 
glPopMatrix(); 

glPushMatrix();
glTranslatef(-20,0,-5);
building(0.2,0.2,0.2);   
glPopMatrix(); 

glPushMatrix();
glTranslatef(20,3,-2);
glScalef(1,1.5,1);
building1(0.255,0.222,0.181);
glPopMatrix(); 

glPushMatrix();
glTranslatef(-37,0,-5);
building1(0.245,0.245,0.220); 
glPopMatrix();

glPushMatrix();
glTranslatef(-130,0,-5);
glScalef(3,1,1);
building2(.18, .31, .31); 
glPopMatrix();

glPushMatrix();
glTranslatef(-110,12,-5);
glScalef(2,3,1);
building2(.48, .25, 0); 
glPopMatrix();

//BUILDING PLANNING END

pond();

//car placing planning
glPushMatrix();
glTranslatef(-13,-6,1);
glScalef(0.5,0.5,0.5);
rightcar(1, .89, .77); 
glPopMatrix();

glPushMatrix();
glTranslatef(20,-5,1.5);
rightcar(.85, .53, .10); 
glPopMatrix();

glPushMatrix();
glTranslatef(-40,-5,1.5);
leftcar(.86, 1.00, .97);
glPopMatrix();


glPushMatrix();
glTranslatef(movl-1,-15,15);
glScalef(10,10,200);
glRotatef(180,0,1,0);
ship();
glPopMatrix();
   movr+=0.5;
    movl-=0.5;
    glutSwapBuffers();

}




void display1(void)
{
     glPushMatrix();
     glTranslatef(0,0,0);
   //  glScalef(4,4,4);
     display();
     glPopMatrix();
     

}     


void reshape (int w, int h)
{
    glViewport (0, 0, (GLsizei) w, (GLsizei) h); 
    glMatrixMode (GL_PROJECTION); 	
    glLoadIdentity (); 
    gluPerspective(75, (GLfloat) w /(GLfloat) h , 0.10, 100.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt (rotLx, rotLy, 15.0 + rotLz, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0); 
}


void keyboard (unsigned char key, int x, int y)
{
      float num=0.0,num1=0.0;
switch (key) {   
        
    case 'a':
    rotLx -= 1.5f; 
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt (rotLx, rotLy,15+ rotLz, 0.0, 0.0, -10000.0, 0.0, 1.0, 0.0);

    break;
    
    case 'D':
    rotLx += 1.5f; 
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt (rotLx, rotLy,15+ rotLz, 10000.0, 0.0, 0.0, 0.0, 1.0, 0.0);
    break;
    
    case 'A':
    rotLx -= 1.5f; 
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt (rotLx, rotLy,15+ rotLz, -10000.0, 0.0, 0.0, 0.0, 1.0, 0.0);
    break;
   
    case 'S':
    rotLz += 1.5f; 
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt (rotLx, rotLy,15+ rotLz, 0.0, 0.0, 10000.0, 0.0, 1.0, 0.0);
    break;
    
        
    case 'd':
    rotLx += 1.5f;
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt (rotLx, rotLy, 15.0 + rotLz, 0.0, 0.0, -10000.0, 0.0, 1.0, 0.0);
    break; 
    
           
    case 'k':
    rotLy -= 1.5f;
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt (rotLx, rotLy,15+ rotLz, 0.0, 0.0, -10000.0, 0.0, 1.0, 0.0);
    break;
    
    case 'K':
    rotLy += 1.5f;
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt (rotLx, rotLy, 15.0 + rotLz, 0.0, 0.0, -10000.0, 0.0, 1.0, 0.0);
    break;
    
    
    case 'W':
    case 'w': 	
    if(rotLz + 2000 >= 0)
    rotLz -= 1.5f;  
     
    glMatrixMode(GL_MODELVIEW);    
    glLoadIdentity(); 
   // glRotatef(20,0,0,1); 
    gluLookAt (rotLx, rotLy, 15.0 + rotLz, 0.0, 0.0, -10000.0, 0.0,1.0,0.0);
    break;
    
    case 's':
    rotLz += 1.5f;
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt (rotLx, rotLy, 15.0 + rotLz, 0.0, 0.0,-10000.0, 0.0, 1.0, 0.0);
    break;
    
    case 'o': 
    case 'O': 
    X = Y = 0.0f;
    Z = 0.0f;
    rotX = 0.0f;
    rotY = 0.0f;
    rotZ = 0.0f;
    rotLx = 0.0f;
    rotLy = 0.0f;
    rotLz = 0.0f;
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(rotLx, rotLy, 15.0f + rotLz, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);  
    break;
}
    glutPostRedisplay(); // Redraw the scene
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB); 	
					
    glutInitWindowSize (1000,1000); 
    glutCreateWindow("OpenGL 3D Navigation Program"); 
    init ();
    glutCreateMenu(Menu);
    glutAddMenuEntry("day",1);
    glutAddMenuEntry("night",2);
    glutAddMenuEntry("snow",3);
    glutAddMenuEntry("exit",4);
    glutAttachMenu(GLUT_LEFT_BUTTON);
    glutReshapeFunc(reshape); 
    
    glutDisplayFunc(display1); 
    glutKeyboardFunc(keyboard); 
    glutMainLoop();

    return 0;
}   
