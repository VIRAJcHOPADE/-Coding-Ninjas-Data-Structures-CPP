/*Given a string, compute recursively a new string where 
all appearances of "pi" have been replaced by "3.14".
Sample Input 1 :
xpix
Sample Output :
x3.14x
Sample Input 2 :
pipi
Sample Output :
3.143.14
Sample Input 3 :
pip
Sample Output :
3.14p
Constraints:-
1<=|S|<=50 
*/

#include <iostream>
using namespace std;

void replacePi(char input[]) {
	
     int l=0;
    while(input[l]!='\0'){
        
        l++;
    }
    if(input[0] == '\0' || input[1]=='\0'){
        return;
    }
    
    if(input[0]=='p' && input[1]=='i'){
        for(int i=l;i>=2 ;i--){
            input[i+2]=input[i];
        }
       
        input[0] = '3';
        input[1] = '.';
        input[2] = '1';
        input[3] = '4';
        replacePi(input);
    }
    replacePi(input+1);
     
}

int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}