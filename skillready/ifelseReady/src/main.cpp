  #include <Arduino.h>
  //ready skill project - is plase there i can see that i leran and remind all that i leran

  
  //if(){}- условный оператор, проверяет условие в ()и выполняет код в {}если условие верно
  //else{}- если условие в if() не верно, выполняется код в else{}
  // для проверки условий используются операторы сравнения: 
  /*пример:*/
  int a=5; b=10;//объявление переменных a и b и присвоение им значений
    if(a>b){//компилятор хранит значение переменных и сравнивает их.если a больше b
      b=b+a;//vipolnit etot kod в {}
      Serial.print("folse") //выводит folse
    }else{//если a не больше b
      a=a+b;//vipolnit etot kod в {}
      Serial.print("true")//выводит true
    } 
  if(a<b)  //меньше<
  if (a==b)//==равно 
  //!=не равно
  //>=больше или равно
  //<=меньше или равно

  //&&-логическое И 
  int tut=5;
  if(tut>0 && tut<10){//если tut больше 0 и tut меньше 10
    Serial.print("true")//выводит true
  //||-логическое ИЛИ
  if(tut>0 || tut<10){//если tut больше 0 или tut меньше 10
    Serial.print("true")//выводит true
  }
  // !-логическое НЕ
  if(!(tut>0)){//если tut не больше 0
    Serial.print("true")//выводит true
  }
  //bool-логический тип данных
  if(true){//если true
    Serial.print("true")//выводит true
  }
  //true-истина
  //false-ложь
  if(false){//если false
    Serial.print("true")//выводит true
  }
  //
  //else if()-если первое условие не верно, проверяет второе условие
  int a=2; b=-1; c=3; //переменные a,b,c
  if(a>b && a!=0){ //первое условие
    if (a>b&&a<c){//если первое условие верно, проверяет первое условие блока выполнения
      a=a+b;//если условие первого блока выполнения верно
      Serial.print("true")
      }else{//если условие первого блока выполнения не верно
        Serial.print("folse")//выводит folse
      }
    else if(a==b){//если первое условие не верно, проверяет второе условие
      a=a-b-b-b;
      Serial.println("true""minus")
    }else{
      Serial.println("folse")
    }
  }


  //пример:

  //
  int a=5; b=10;
  if(a>b && a!=0){
    if (a>b<c){
      a=a+b;
      Serial.print("true")
      }else{
  }
  }

  float x = 15.0;
  float y = 12.0;
  float vis = x; // переменная для хранения значения dleni object
  float shr = y; // переменная для хранения значения shirini object
  long plast = (max-placecut); // переменная для хранения значения prostranstva
  long time = millis(); // переменная для хранения значения времени
  void setup() {
    Serial.begin(9600);
    Serial.println("Start");
  }


  void loop() {
    if (millis() - time > 100) {
      time = millis();
    }
  }
  long placecut = object


  float move = object/2;
  float object = x*y;
//NAPOMINALKA variki.
  void setup(){
  Serial.begin(9600);
  int tut=5;
  if(tut>0 && tut<10){//если tut больше 0 и tut меньше 10
    Serial.print("true");//выводит true
  }
  if(tut>0 || tut<10){//если tut больше 0 или tut меньше 10
    Serial.print("true");//выводит true
  }
  if(!(tut>0)){//если tut не больше 0
    Serial.print("true");//выводит true
  }
  if(true){//если true
    Serial.print("true");//выводит true
  }
  if(false){//если false
    Serial.print("true");//выводит true
  }
  int a=2; int b=-1; int c=3; //переменные a,b,c
  if(a>b && a!=0){ //первое условие
    if (a>b&&a<c){//если первое условие верно, проверяет первое условие блока выполнения
      a=a+b;//если условие первого блока выполнения верно
      Serial.print("true");
    }else{//если условие первого блока выполнения не верно
      Serial.print("folse");//выводит folse
    }
  }else if(a==b){//если первое условие не верно, проверяет второе условие
    a=a-b-b-b;
    Serial.println("true""minus");
  }else{
    Serial.println("folse");
  }
  int a=5; int b=10;
  if(a>b && a!=0){
    if (a>b<c){
      a=a+b;
      Serial.print("true");
    }else{
    }
  }
  float x = 15.0;
  float y = 12.0;
  float vis = x; // переменная для хранения значения dleni object
  float shr = y; // переменная для хранения значения shirini object
  long plast = (max-placecut); // переменная для хранения значения prostranstva
  long time = millis(); // переменная для хранения
}