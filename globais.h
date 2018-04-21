#define SENS_ROT 5.0
#define SENS_OBS 20.0
#define SENS_TRANSL 30.0


bool eixos = true,
     wire = !true;

float rotX = 0.0,
      rotY = 0.0,
      rotX_ini, rotY_ini;

float obsX = 10.0,
      obsY = 50.0,
      obsZ = 150.0,
      obsX_ini, obsY_ini, obsZ_ini;


int incrementaX =0;
int incrementaY =0;


GLfloat fAspect;
GLUquadricObj *cepo;
int impacto = 5;
int explosion = 2;
int passoExp = 1;
bool batida = false;
float fade = 1;
int x_ini, y_ini, bot;
float angMartelo =45 ;
int clique=-1;
int passo = 10;
int passoAux = 25;
bool bateu = false, ldifusa=false,ambiente=false,som=false;

void drawCircle(float r);
void drawCylinder(float raio, float altura, float angulo);
void desenhaCenarioSolid();
void display(void);
void projecao(void);
void reshape( GLsizei w, GLsizei h );
void keyboard( unsigned char key, int x, int y );
void init (void);
void motion( int x, int y );
void mouse( int button, int state, int x, int y );
void Timer(int value);
void explosaoSolid();
void explosaoWire();