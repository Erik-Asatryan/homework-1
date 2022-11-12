#include <iostream>
#include<string>
using namespace std;

int main(){
   int lenght_sInput,lenght_sUserInput,i=0;
   string sUserInput ,sInput = "ABCDEFGHIJKLMNOPQRSTUVWXYZ",aut="";

   getline(cin ,sUserInput);
   lenght_sInput = sInput.length();
   lenght_sUserInput= sUserInput.length();
   for (;i < lenght_sUserInput; i++){
        for (int j =0; j < lenght_sInput ;j++)
            if (sUserInput[i]== sInput[j] && sUserInput[i] == sInput[27]){
                aut += sInput[4];
            }
            else  if (sUserInput[i]== sInput[j] && sUserInput[i] == sInput[26]){
                aut += sInput[3];
            }
            else  if (sUserInput[i]== sInput[j] && sUserInput[i] == sInput[25]){
                aut += sInput[2];
            }
            else if (sUserInput[i]== sInput[j]){
                aut +=sInput[j+3];
            }
            else if (sUserInput[i] == ' ' && i == j) {
                aut += ' ';
            }
    }
    cout << aut;
    return 0;
}
