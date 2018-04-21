/*********************************************

PROGRAMA CEPO DE MADEIRA EM 3D


PARA O SOM FUNCIONAR:
sudo apt-get install libalut0 libalut-dev


***********************************************/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>
#include <AL/al.h>
#include <AL/alc.h>
#include <AL/alut.h>
#include "OpenAL.h"
#include "globais.h"

void desenhaQuad(float x, float y){

    glBegin(GL_POLYGON);
        glVertex3f(x, y, 100);
        glVertex3f(x*2, y, 100);
        glVertex3f(x*2, y*2, 100);
        glVertex3f(x, y*2, 100);
    glEnd();

}

void explosaoWire(){
     //cabeca martelo
    glPushMatrix();
        glColor3f( 1.0, 0.0, 0.0 );
        
        glTranslatef( 0.0, -2.0, 22.0 );
        glScalef( 0.03, 0.03, 0.03 );
        glutWireCube( 50 );
    glPopMatrix();

     glPushMatrix();
        glColor3f( 1.0, 0.0, 0.0 );
        
        glTranslatef( 2.0, -5.0, 22.0 );
        glScalef( 0.02, 0.02, 0.02 );
        glutWireCube( 50 );
    glPopMatrix();

     glPushMatrix();
        glColor3f( 1.0, 0.0, 0.0 );
        
        glTranslatef( -10.0, -5.0, 22.0 );
        glScalef( 0.02, 0.02, 0.02 );
        glutWireCube( 50 );
    glPopMatrix();

     glPushMatrix();
        glColor3f( 1.0, 0.0, 0.0 );
       
        glTranslatef( -5.0, 7.0, 22.0 );
        glScalef( 0.02, 0.02, 0.02 );
        glutWireCube( 50 );
    glPopMatrix();

     glPushMatrix();
        glColor3f( 1.0, 0.0, 0.0 );
        
        glTranslatef( 4.0, 2.0, 22.0 );
        glScalef( 0.02, 0.02, 0.02 );
        glutWireCube( 50 );
    glPopMatrix();

    glPushMatrix();
        glColor3f( 1.0, 0.0, 0.0 );
        
        glTranslatef( -4.0, 0.0, 22.0 );
        glScalef( 0.02, 0.02, 0.02 );
        glutWireCube( 50 );
    glPopMatrix();

    glPushMatrix();
        glColor3f( 1.0, 0.0, 0.0 );
       
        glTranslatef( 3.6, 1.0, 22.0 );
        glScalef( 0.02, 0.02, 0.02 );
        glutWireCube( 50 );
    glPopMatrix();

    glPushMatrix();
        glColor3f( 1.0, 0.0, 0.0 );
        
        glTranslatef( 2.0, 3.0, 22.0 );
        glScalef( 0.02, 0.02, 0.02 );
        glutWireCube( 50 );
    glPopMatrix();

    glPushMatrix();
        glColor3f( 1.0, 0.0, 0.0 );
        
        glTranslatef( -10.0, -5.0, 27.0 );
        glScalef( 0.02, 0.02, 0.02 );
        glutWireCube( 50 );
    glPopMatrix();

     glPushMatrix();
        glColor3f( 1.0, 0.0, 0.0 );
        
        glTranslatef( -5.0, 7.0, 20.0 );
        glScalef( 0.02, 0.02, 0.02 );
        glutWireCube( 50 );
    glPopMatrix();

     glPushMatrix();
        glColor3f( 1.0, 0.0, 0.0 );
        
        glTranslatef( 4.0, 2.0, 15.0 );
        glScalef( 0.02, 0.02, 0.02 );
        glutWireCube( 50 );
    glPopMatrix();

    glPushMatrix();
        glColor3f( 1.0, 0.0, 0.0 );
        
        glTranslatef( -4.0, 0.0, 25.0 );
        glScalef( 0.02, 0.02, 0.02 );
        glutWireCube( 50 );
    glPopMatrix();

    glPushMatrix();
        glColor3f( 1.0, 0.0, 0.0 );
        
        glTranslatef( 3.6, 1.0, 17.0 );
        glScalef( 0.02, 0.02, 0.02 );
        glutWireCube( 50 );
    glPopMatrix();

    glPushMatrix();
        glColor3f( 1.0, 0.0, 0.0 );
        
        glTranslatef( 2.0, 3.0, 25.0 );
        glScalef( 0.02, 0.02, 0.02 );
        glutWireCube( 50 );
    glPopMatrix();


}

void explosaoSolid(){
     //cabeca martelo
    glPushMatrix();
        glColor3f( 1.0, 0.0, 0.0 );
        
        glTranslatef( 0.0, -2.0, 22.0 );
        glScalef( 0.03, 0.03, 0.03 );
        glutWireCube( 50 );
    glPopMatrix();

     glPushMatrix();
        glColor3f( 1.0, 0.0, 0.0 );
        
        glTranslatef( 2.0, -5.0, 22.0 );
        glScalef( 0.02, 0.02, 0.02 );
        glutWireCube( 50 );
    glPopMatrix();

     glPushMatrix();
        glColor3f( 1.0, 0.0, 0.0 );
        
        glTranslatef( -10.0, -5.0, 22.0 );
        glScalef( 0.02, 0.02, 0.02 );
        glutWireCube( 50 );
    glPopMatrix();

     glPushMatrix();
        glColor3f( 1.0, 0.0, 0.0 );
        
        glTranslatef( -5.0, 7.0, 22.0 );
        glScalef( 0.02, 0.02, 0.02 );
        glutWireCube( 50 );
    glPopMatrix();

     glPushMatrix();
        glColor3f( 1.0, 0.0, 0.0 );
        
        glTranslatef( 4.0, 2.0, 22.0 );
        glScalef( 0.02, 0.02, 0.02 );
        glutWireCube( 50 );
    glPopMatrix();

    glPushMatrix();
        glColor3f( 1.0, 0.0, 0.0 );
        glRotatef(angMartelo, 1.0, 0.0, 0.0);
        glTranslatef( -4.0, 0.0, 22.0 );
        glScalef( 0.02, 0.02, 0.02 );
        glutWireCube( 50 );
    glPopMatrix();

    glPushMatrix();
        glColor3f( 1.0, 0.0, 0.0 );
        
        glTranslatef( 3.6, 1.0, 22.0 );
        glScalef( 0.02, 0.02, 0.02 );
        glutWireCube( 50 );
    glPopMatrix();

    glPushMatrix();
        glColor3f( 1.0, 0.0, 0.0 );
        
        glTranslatef( 2.0, 3.0, 22.0 );
        glScalef( 0.02, 0.02, 0.02 );
        glutWireCube( 50 );
    glPopMatrix();

    glPushMatrix();
        glColor3f( 1.0, 0.0, 0.0 );
        
        glTranslatef( -10.0, -5.0, 27.0 );
        glScalef( 0.02, 0.02, 0.02 );
        glutWireCube( 50 );
    glPopMatrix();

     glPushMatrix();
        glColor3f( 1.0, 0.0, 0.0 );
        
        glTranslatef( -5.0, 7.0, 20.0 );
        glScalef( 0.02, 0.02, 0.02 );
        glutWireCube( 50 );
    glPopMatrix();

     glPushMatrix();
        glColor3f( 1.0, 0.0, 0.0 );
        
        glTranslatef( 4.0, 2.0, 15.0 );
        glScalef( 0.02, 0.02, 0.02 );
        glutWireCube( 50 );
    glPopMatrix();

    glPushMatrix();
        glColor3f( 1.0, 0.0, 0.0 );
        
        glTranslatef( -4.0, 0.0, 25.0 );
        glScalef( 0.02, 0.02, 0.02 );
        glutWireCube( 50 );
    glPopMatrix();

    glPushMatrix();
        glColor3f( 1.0, 0.0, 0.0 );
       
        glTranslatef( 3.6, 1.0, 17.0 );
        glScalef( 0.02, 0.02, 0.02 );
        glutWireCube( 50 );
    glPopMatrix();

    glPushMatrix();
        glColor3f( 1.0, 0.0, 0.0 );
       
        glTranslatef( 2.0, 3.0, 25.0 );
        glScalef( 0.02, 0.02, 0.02 );
        glutWireCube( 50 );
    glPopMatrix();


}



void desenhaCenarioSolid(){

   /* glPushMatrix();
        //glColor3f( .0, 1.0, 0.0 );
        
        glTranslatef( -90.0, 55.0, -222.0 );
        glScalef( 0.02, 0.02, 0.02 );
        glutWireCube( 5000 );
    glPopMatrix();

    glPushMatrix();
        glColor3f( 1.0, 1.0, 0.3 );
        
        glTranslatef( -90.0, -55.0, -222.0 );
        glScalef( 0.02, 0.02, 0.02 );
        drawCylinder(20,10,90);
    glPopMatrix();*/

   //cepo de madeira
    glPushMatrix();
    	glColor3f( 1, 0.8, 0.5 );
        glTranslatef( 0.0, -10.0, 0.0 );
        glScalef( 0.9, 1.5, 0.90 );
        drawCylinder(20, 20, 90);
    glPopMatrix();
    //prego
    glPushMatrix();
        glColor3f( 0.5, 0.5, 0.5 );
        glTranslatef( 0.0, 5.0, 0.0 );
        glScalef( 0.10, 1.6, 0.10 );
        drawCylinder(5, 10, 90);

    glPopMatrix();
    //cabeca do prego
    glPushMatrix();
        glColor3f( 0.5, 0.5, 0.5 );
        glTranslatef( 0.0, 5.0, 0.0 );
        glScalef( 0.10, 0.2, 0.1 );
        drawCylinder(20, 10, 90);

    glPopMatrix();


    glPushMatrix();
    	glTranslatef(40,24,0.1);
	    glRotatef(angMartelo,0,0,1);
	    glTranslatef(0,15,0);

        //cabo do martelo de thor
        glPushMatrix();
            glColor3f( 1,1, 0 );
            glTranslatef( 0.0, 0.0, 0.10 );
            glScalef( 0.07, 1.3, 0.1 );
            glutSolidCube(50);
        glPopMatrix();

        //cabeca do martelo de thor
	    glPushMatrix();
	    	glColor3f( .7, .7, .7 );
	        glTranslatef( 0.0, 24.0, 0.10 );
	        glScalef( 0.80, 0.5, 0.5 );
	        glutSolidCube(50);
	    glPopMatrix();

        //esfera de explosao
        glPushMatrix();
            glColor3f( .9, .9, .9 );
            glTranslatef( 0.0, 24.0, 0.10 );
            glScalef( 0.80, 0.5, 0.5 );
            glutWireSphere(incrementaX, incrementaY, 10); 
        glPopMatrix();

	    
    glPopMatrix();

    
}
void display(void){


	glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    desenhaCenarioSolid();

	glutSwapBuffers();
}

void drawCircle(float r){

    glBegin(GL_POLYGON);
        for(int i = 0; i < 360; i++)
            glVertex3f(r * cos(i * M_PI / 180.0), r * sin(i * M_PI / 180.0), 0.0);
    glEnd();
}
void drawCylinder(float raio, float altura, float angulo){
    glPushMatrix();
        glRotatef(angulo, 1, 0,0);
        gluCylinder(cepo,raio, raio, altura, 32, 32);
        drawCircle(raio);
    glPopMatrix();
}



void keyboard( unsigned char key, int x, int y ){


    switch( key ){

        case 'w':
        case 'W':
            if(ldifusa==0){
                glEnable(GL_LIGHT0);
                GLfloat difusa[] = {1.0, 1.0, 1.0, 1.0};
                glLightfv(GL_LIGHT0, GL_DIFFUSE, difusa);
                ldifusa = !ldifusa;
            }else{
                 glDisable(GL_LIGHT0);
                 ldifusa = !ldifusa;
             }

        break;

        case 's':
        case 'S':
            if(ambiente==0){
                glEnable(GL_LIGHT1);
                GLfloat ambient[] = {0.5, 0.5, 0.5, 1.0};
                glLightfv(GL_LIGHT1, GL_AMBIENT, ambient);
                ambiente =!ambiente;
            }else{ 
                glDisable(GL_LIGHT1);
                ambiente =!ambiente;
            }
        break;
    }
    glutPostRedisplay();
}

void mouse( int button, int state, int x, int y ){	

	if( button == GLUT_LEFT_BUTTON ){

    	if(angMartelo == 45)
            clique = 0;
        
    	if(angMartelo == 90){
            som=!som;
            clique = 1;
        }
        
    	glutPostRedisplay();
    }
    if( (button == GLUT_RIGHT_BUTTON || button == GLUT_MIDDLE_BUTTON) && state == GLUT_DOWN ){

        x_ini = x;
        y_ini = y;

        obsX_ini = obsX;
        obsY_ini = obsY;
        obsZ_ini = obsZ;

        rotX_ini = rotX;
        rotY_ini = rotY;

        bot = button;
    } else 
        bot = -1;
    
}


void motion( int x, int y ){    

    
    if( bot == GLUT_RIGHT_BUTTON )
    {
        int deltax = x_ini - x;
        int deltay = y_ini - y;
        rotY = rotY_ini - deltax/SENS_ROT;
        rotX = rotX_ini - deltay/SENS_ROT;

    }else if( bot == GLUT_MIDDLE_BUTTON ){
        int deltaz = y_ini - y;
        obsZ = obsZ_ini + (deltaz/SENS_OBS);
    }
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();

    glTranslatef( -obsX, -obsY, -obsZ );
    glRotatef( rotX, 1, 0, 0 );
    glRotatef( rotY, 0, 1, 0 );

    glutPostRedisplay();
}
void Timer(int value){

	if (value == 0){
		if(clique == 0){
			angMartelo-=passo;
			if(angMartelo <= 10){
				angMartelo = 10;
				bateu = true;	
                   
			}
			if(bateu == true){ 
				if(angMartelo>=10  && angMartelo <90){
					angMartelo+=passoAux;
					passoAux+=passo;
                    
				}
				if(angMartelo > 90){
                    angMartelo = 90;
                    batida = true;
			     }
            }
		}
		else if(clique == 1){
            if(batida == false){
    			if(angMartelo <= 90) angMartelo-=passo;
    			if(angMartelo < 45) angMartelo = 45;
                if(fade<0)
                    fade = 1;
                bateu = false;
    			passoAux = 25;
            }

		}

	glutTimerFunc(100,Timer, 0);
	}
	if(value == 1){
		if(batida == true && fade>0){ 
              if(som==false){
                    alSourcePlay(Sources[EXPLOSAO]);
                    som = !som;
                }
				impacto+=passoExp;
                incrementaX+=20;
                incrementaY+=20;
				passoExp+=2;
				explosion+=passoExp/10;
				fade -=0.05;
		}
	
    	if(explosion >15) explosion = 15;

        //TIRAR OS EFEITOS E VOLTAR AO NORMAL

		if(fade <0){

			batida  = false;

			impacto = 5;
            incrementaX=0;
            incrementaY=0;
			explosion = 2;
			passoExp = 1;
		}

		glutTimerFunc(100,Timer,1);
	}

	glutPostRedisplay();
}


void reshape( GLsizei w, GLsizei h ){


    if ( h == 0 ) h = 1;
    glViewport(0, 0, w, h);
    fAspect = (GLfloat)w/(GLfloat)h;

    projecao();
}


void projecao(void){


    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();

    gluPerspective( 60, fAspect, 0.1, 1000 );

    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();

    gluLookAt( obsX,obsY,obsZ, 10,50,0, 0,1,0 );
}

void init (void)
{   
    printf("\n****************************************\n");
    printf("COMANDOS\n\n");
    printf("W \n");
    printf("S \n");
    printf("mouse\n\n");
    printf("DETALHE: AS VEZES NAO SAI SOM\n");
    printf("*****************************************\n");

    cepo = gluNewQuadric();
    GLfloat posicao[]={0.0,50.0,0.0,0.0};
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glLightfv(GL_LIGHT0,GL_POSITION,posicao);
    glEnable(GL_LIGHTING);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable( GL_BLEND );
    glEnable(GL_COLOR_MATERIAL);
    glEnable( GL_DEPTH_TEST );
}


//------------------------------------------------------------------------------
int main(int argc, char *argv[]){

    alutInit(NULL, 0);
    alGetError();

    if(LoadALData() == AL_FALSE) return 0;
    SetListenerValues();

    glutInit( &argc, argv );
	glutInitDisplayMode( GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize( 500, 500 );
    glutInitWindowPosition(680,75);
	glutCreateWindow("Brincadeira com palitos de fosforos");

	glutDisplayFunc( display );
	glutReshapeFunc( reshape );
	glutKeyboardFunc( keyboard );
    glutMouseFunc( mouse );
    glutMotionFunc( motion );
    glutTimerFunc(150,Timer,0);
	glutTimerFunc(150,Timer,1);
	init();

	glutMainLoop();
	return 0;
}
//------------------------------------------------------------------------------


