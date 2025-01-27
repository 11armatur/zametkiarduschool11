#include <Arduino.h>
//ready skill project - is plase there i can see that i leran and remind all that i leran
float pi = 3.14159;
//com port using
void setup() {
  Serial.begin(9600);//устанавливаем скорость обмена данными    comporta
    Serial.println("Start");//выводим на монитор порта Start
    //цифры и имена переменных выводятся без кавычек
    //строки выводятся в кавычках
    String mystr = "Hello, World!";//присваиваем переменной stroka значение "Hello, World!"   
    Serial.println(stroka);//выводим на монитор порта значение переменной stroka
    Serial.println(pi, 3);//выводим на монитор порта значение переменной pi с количеством знаков указано  после запятой
}

void loop() {
    Serial.available();//проверяем наличие данных в буфере
    //для использования данных в буфере

    if (Serial.available() > 0) {//если в буфере есть данные(размер буфера 64 килобайта)
        int data = Serial.read()-"0";//считываем данные из буфера и преобразуем их в число
        Serial.print("Data: ");//выводим на монитор порта то что в кавичках "Data:""
        Serial.println(data);//выводим на монитор порта данные
    }   Serial.parseInt();//преобразование данных в число mnogoznachnoe
    Serial.parseFloat();//преобразование данных в число s plavayushey tochkoy
    Serial.readString();//считывание строки


//пример использования=======================

    if (Serial.available() > 0) {
    int datain = Serial.parseInt();
    int boom = datain * 2;
    Serial.print(datain);
    Serial.print(boom);
  }

}
