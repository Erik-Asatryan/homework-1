#include"../inc/encod.h"
#include <iostream>
#include<string>
using namespace std;
string encod(){
   int lenght_sInput,lenght_sUserInput,i=0;
   string sUserInput ,sInput = "ABCDEFGHIJKLMNOPQRSTUVWXYZ",aut="",k=" ";

   getline(cin ,sUserInput);
   lenght_sInput = sInput.length();
   lenght_sUserInput= sUserInput.length();
   for (;i < lenght_sUserInput; i++){
        for (int j =0; j < lenght_sInput ;j++)
            if (sUserInput[i]== sInput[j] && sUserInput[i] == sInput[lenght_sInput-26]){
                aut += sInput[lenght_sInput-3];
            }
            else  if (sUserInput[i]== sInput[j] && sUserInput[i] == sInput[lenght_sInput-25]){
                aut += sInput[lenght_sInput-2];
            }
            else  if (sUserInput[i]== sInput[j] && sUserInput[i] == sInput[lenght_sInput-24]){
                aut += sInput[lenght_sInput-1];
            }
            else if (sUserInput[i]== sInput[j]){
                aut +=sInput[j-3];
            }
            else if (sUserInput[i] == ' ' && i == j) {
                aut += ' ';
            }
    }
    cout << aut;
    return aut;
}