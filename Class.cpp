#include <iostream>
#include <string>
using namespace std;

class Bacteries{
 public:
  float size;
  string type;

  Bacteries(float f_size, string s_type){
   size=f_size;
   type=s_type;
   cout<<"Bacteries have "<<size<<" nano meters "<<"Type"<<type<<endl;
  }
  void Decompose(){
   cout<<"Bacteries decompose"<<endl;
  }
};
class Squirrel{
 public:
  string color;
  int age;
  string sex;
  Squirrel(string color_s,int age_i,string sex_s){
   color=color_s;
   age=age_i;
   sex=sex_s;
   cout<<"Squirrel is "<<color<<" "<<age<<" year "<<"Sex:"<<sex<<endl;
  }
  void Eat(){
   cout<<"Squirrel eat  nuts"<<endl;
  }
};
class Deer{
 public:
  int age;
  string color;
  string sex;
  Deer(string color_s,int age_i,string sex_s){
   color=color_s;
   age=age_i;
   sex=sex_s;
   cout<<"Deer is "<<color<<" "<<age<<" year "<<"Sex:"<<sex<<endl;
  }
  void Graze(){
   cout<<"Deer graze the grass"<<endl;
  }
};
class Marten{
 public:
  string color;
  int age;
  string sex;
  Marten(string color_s,int age_i,string sex_s){
   color=color_s;
   age=age_i;
   sex=sex_s;
   cout<<"Marten is "<<color<<" "<<age<<" year "<<"Sex:"<<sex<<endl;
  }
  void Hunt(){
   cout<<"The marten hunts"<<endl;
  }
};
class Butterfly{
 public:
  string color;
  Butterfly(string color_s){
   color=color_s;
   cout<<"The butterfly is "<<color<<endl;
  }
  void Pollinate(){
   cout<<"Butterflie pollinate"<<endl;
  }
};
class Lizard{
 public:
  string color;
  string sex;
  Lizard(string color_s,string sex_s){
   color=color_s;
   sex=sex_s;
   cout<<"The lizard is "<<color<<" Sex:"<<sex<<endl;
  }
  void Hunt(){
   cout<<"The lizard hunts"<<endl;
  }
};
class Rabbit{
 public:
  string color;
  int age;
  string sex;
  Rabbit(string color_s,int age_i,string sex_s){ 
   color=color_s;
   age=age_i;
   sex=sex_s;
   cout<<"Rabbit is "<<color<<" "<<age<<" year "<<"Sex:"<<sex<<endl;
  }
  void Home(){
   cout<<"Rabbit make the burrow"<<endl;
  }
};
class Wolf{
 public:
  string color;
  int age;
  string sex;
  Wolf(string color_s,int age_i,string sex_s){
   color=color_s;
   age=age_i;
   sex=sex_s;
   cout<<"Wolf is "<<color<<" "<<age<<" year "<<"Sex:"<<sex<<endl;
  }
  void Protect(){
   cout<<"Wolf defend the tribe"<<endl;
  }
};
class Fox{
 public:
  string color;
  int age;
  string sex;
  Fox(string color_s,int age_i,string sex_s){
   color=color_s;
   age=age_i;
   sex=sex_s;
   cout<<"Fox is "<<color<<" "<<age<<" year "<<"Sex:"<<sex<<endl;
  }
  void Hunt(){
   cout<<"Fox hunt"<<endl;
  }
};
class Bear{
 public:
  string color;
  int age;
  string sex;
  Bear(string color_s,int age_i,string sex_s){
   color=color_s;
   age=age_i;
   sex=sex_s;
   cout<<"Bear is "<<color<<" "<<age<<" year "<<"Sex:"<<sex<<endl;
  }
  void Eat(){
   cout<<"Bear eat honey"<<endl;
  }
};
int main(){
Bacteries bact(0.4,"heterotroph");
Squirrel squir("brown",5,"female");
Deer deer("mottled brown",3,"female");
Marten mar("black",8,"male");
Lizard  liza("green","male");
Butterfly bfly("orange");
Rabbit rabb("grey",2,"female");
Wolf auf("grey",6,"male");
Fox fire("orange",4,"female");
Bear griz("brown",7,"male");
 int yourchoice;
 do{
  cout<<" 1.Bacteries\n";
  cout<<" 2.Squirrel\n";
  cout<<" 3.Deer\n";
  cout<<" 4.Marten\n";
  cout<<" 5.Lizard\n";
  cout<<" 6.Butterfly\n";
  cout<<" 7.Rabbit\n";
  cout<<" 8.Wolf\n";
  cout<<" 9.Fox\n";
  cout<<" 10.Bear\n";
  cin>>yourchoice;
  switch (yourchoice){
   case 1:
    bact.Decompose();
    break;
   case 2:
    squir.Eat();
    break;
   case 3:
    deer.Graze();
    break;
   case 4:
    mar.Hunt();
    break;
   case 5:
    liza.Hunt();
    break;
   case 6:
    bfly.Pollinate();
    break;
   case 7:
    rabb.Home();
    break;
   case 8:
    auf.Protect();
    break;
   case 9:
    fire.Hunt();
    break;
   case 10:
    griz.Eat();
    break;
   default: cout<<"invalid"; break;
  }
 } while (yourchoice!=11);
 return 0;
}

