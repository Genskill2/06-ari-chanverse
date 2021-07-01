#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <cs50.h>

string ari(string str){
int n = strlen(str);

int nc=0,nw=0,ns=0;
float ari1=0,ari2=0,ari3=0;
string c;
for(int i=0;i<n;i++){
    if(isalnum(str[i])){
   nc++;
   }
   else if(str[i]==' '){
    nw++;
    }
   else if(str[i]=='.'||str[i]=='?'||str[i]=='!'){
     ns++;
     } 
}
ari1= 4.71*(float)nc/nw;
ari2= 0.5*(float)nw/ns;
ari3= ari1+ari2-21.43;
int ari=ceil(ari3);
switch(ari){
  case 1:c="Kindergarten";
  break;
  case 2:c="First/Second Grade";
  break;
  case 3:c="Third Grade";
  break;
  case 4:c="Fourth Grade";
  break;
  case 5:c="Fifth Grade";
  break;
  case 6:c="Sixth Grade";
  break;
  case 7:c="Seventh Grade";
  break;
  case 8:c="Eighth Grade";
  break;
  case 9:c="Ninth Grade";
  break;
  case 10:c="Tenth Grade";
  break;
  case 11:c="Eleventh Grade";
  break;
  case 12:c="Twelfth grade";
  break;
  case 13:c="College student";
  break;
  case 14:c="Professor";
  break;
  
  }
  return c;
}
