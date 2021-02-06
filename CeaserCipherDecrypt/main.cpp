#include <iostream>
#include <string>

using namespace std;



// function prototype

string decrypt(string textDecrypt, int sDecrpyt);

int main()
{
   const int PROG_LOOPING_VALUE = 100;
   const int DECRYPT_KEY_CHECK = 25;
   int exit = 0;
         cout << endl;
         cout << endl;

         while (exit != -1 || exit == +1)
         {
            for (int counter = 0; counter < PROG_LOOPING_VALUE; counter++ )
            {
               string textDecrypt;
               cout << "Enter the string without any spaces !" << endl;
               cin >> textDecrypt;
               cout << endl;

               int sDecrypt[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25 };

               cout << "Now we are decrypting:" << endl;
               cout << "Text : " << textDecrypt;
               for (int counter = 0; counter < DECRYPT_KEY_CHECK; counter++)
               {
                  cout << "\nShift : " << sDecrypt[counter];
                  sDecrypt[counter] = sDecrypt[counter] % 26; // ensuring that sDecrypt lies between 0-25
                  cout << "\nCipher: " << decrypt(textDecrypt, 26 - sDecrypt[counter]);
                  cout << endl;
                  cout << endl;
               }

               cout << "To exit the program type value : -1 or enter value : +1 to continue program." << endl;
               cin >> exit;
               break;
            }

            
         }
      


   system("PAUSE");
   return 0;
}


/*
* decrypt
*/


string decrypt(string textDecrypt, int sDecrpyt)
{
   string result = "";

   // traverse text
   for (int counter = 0; counter < textDecrypt.length(); counter++)
   {
      // apply transformation to each character
      // encrypt uppercase letters
      if (isupper(textDecrypt[counter]))
      {

         result += char(int(textDecrypt[counter] + sDecrpyt - 65) % 26 + 65);
      }
      // encrypt lowercase letters
      else
      {

         result += char(int(textDecrypt[counter] + sDecrpyt - 97) % 26 + 97);
      }
   }
   // return the resulting string
   return result;
}


