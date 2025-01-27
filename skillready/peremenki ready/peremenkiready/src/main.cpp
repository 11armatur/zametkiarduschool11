#include <Arduino.h>

//ready skill project - is plase there i can see that i leran and remind all that i leran


//peremenki - eto mesto gde hranitsya znachenie
// sozdanie i ispolzovanie peremennih
int dvabyte; //znachenie po umolchaniyu 0
byte odinbyte = 255; //znachenie ot -128 do 127
int dvabaita = 32767; //znachenie ot -16384 do 16383
long chetirebaita = 2147483647; //znachenie ot -1073741824 do 1073741823
char odinbait = 'A'; //znachenie ot -128 do 127 v vide simvola (ASCII)
/*(ASCII - eto standart kodirovaniya simvolov, v kotorom kazhdomu simvolu sootvetstvuet svoe chislo)
*zanimaet 8 bit gde 0 desyati4noy sistemi 00000000 i 255 desyati4noy sistemi 11111111
*/
String stroka = "Hello, World!"; //znachenie v vide stroki simvolov
float chetirebaita = 3.14159; //znachenie ot -3.4028235E+38 do 3.4028235E+38
double vosembait = 3.1415926535897932384626433832795; //dlya arduino ne rekomenduetsya ispolzovat
bool odinbait = true; //znachenie true ili false ispolzuyetsya dlya logicheskih operaciy
//pristavka unsigned oznachaet chto peremennaya ne mozhet prinimat otricatelnie znacheniya
unsigned int dvabaita = 65535; //znachenie ot 0 do 65535
const int dvabaita = 32767; //konstanta znachenie ne mojno izmenit
//sozdanie peremennih srazu s prisvoeniem znacheniya
//prisvoenie tipa dannih
typedef int chislo; //sozdanie tipa dannih chislo s tipom int
/*teper*/ chislo a = 5; //peremennaya a tipa chislo s znacheniem 5 (int a = 5)
//peremennie mogu menyat znachenie
int a = 5; //peremennaya a s znacheniem 5
a = 10; //peremennaya a bila 5 i sledushee deystvie "a=10" izmenit znachenie peremennoy a na 10
//peremennaya mozhet prinimat znachenie drugoy peremennoy
int a = 5; //peremennaya a s znacheniem 5
int b = a; //peremennaya b s znacheniem peremennoy a
int c = a + b; //peremennaya c s znacheniem summi peremennih a i b (5+5=10)
//peremennie nujni dlya hraneniya znacheniya upravleniya funkciyami i operaciyami


//int, char, float, double, bool, byte, long, short, unsigned, const opredelyaet tip peremennoy

//v zavisimosti ot tipa peremennoy zavisit kolichestvo pamyati kotoroe zanimaet peremennaya

//i tak je zavisit oblast' primeneniya peremennoy


//est'globalnie i lokalnie peremennie

//globalnie peremennie obychno sozdayutsya v nachale programmi 
//i mogut ispolzovatsya v lyubom meste programmi

// lokalnie peremennie sozdayutsya vnutri bloka koda i mogut ispolzovatsya tolko v etom bloke
//

