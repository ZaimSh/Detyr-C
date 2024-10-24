#include <iostream>

using namespace std;

int main() {
  cout << "Miresevini \n\n";

  int a;
  float b,sum;

  cout<<"\n--------DETYRA 1--------\n" <<"\nShenoni nje numer te plote dhe nje numer dhjetor: \n";

  cin>>a>>b;
  sum = a + b;

  cout<<"Shuma e numrave qe keni shenuar eshte: " <<sum <<"\n\n\n";


  // --------------------------------------------------------------------------------------
  
  
  cout << "--------DETYRA 2--------\n" << "\nShenoni Emrin dhe Mbiemrin tuaj: \n";

  string emri, mbiemri;
  int vitiLindjes;
  double gjatesia, pesha, bmi;

  cin >> emri >> mbiemri;


  if (emri[0] >= 'a' && emri[0] <= 'z') {
    emri[0] = (char)(emri[0] - 'a' + 'A');
    cout << "\nPershendetje " << emri << ", tani sheno vitin e lindjes, gjatesine dhe peshen, per te kalkuluar indexin e BMI: \n";

  } else {
    cout << "\nPershendetje " << emri << ", tani sheno vitin e lindjes, gjatesine dhe peshen, per te kalkuluar indexin e BMI: \n";
  }

  cin >> vitiLindjes >> gjatesia >> pesha;

  double gjatesia_m = gjatesia / 100.0;
  bmi = pesha / (gjatesia_m * gjatesia_m);


  cout<<emri <<" indeksi juaj i BMI eshte: " <<bmi <<"\n\n\n";

  return 0;
}