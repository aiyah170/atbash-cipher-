#include <iostream>

using namespace std;

void cipherEncryption() {
    string message;
    cout << "Enter Message: ";
    getline(cin, message);
    cin.ignore();

    //message to upper case
    for(int i = 0; i <message.length(); i++) {
       message[i] = toupper(message[i]);
    }

    string aple ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string reverseAple = "";
    for (int i = aple.length()-1; i > -1; i--) {
        reverseAple += aple[i];
    }

   string encrytext ="";
   for(int i = 0; i< message.length(); i++) {
       if(message[i == 32]){
           encrytext += "";
       } else {
           for(int j = 0; j < aple.length(); j++){
               if(message[i] == aple[j]) {
                   encrytext = reverseAple[j];
                   break;
               }
           } // inner for
       } // if-else
     } // for

    cout << "Encrypetd Text: " << encrytext;
}

void cipherDecryption() {
    string message;
    cout << "Enter Encrypted Message: ";
    getline(cin, message);
    cin.ignore();

    //message to upper case
    for(int i = 0; i <message.length(); i++) {
       message[i] = toupper(message[i]);
    }

    string aple ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string reverseAple = "";
    for (int i = aple.length()-1; i > -1; i--) {
        reverseAple += aple[i];
    }

   string dencryText ="";
   for(int i = 0; i< message.length(); i++) {
       if(message[i] == 32){
           dencryText += " ";
       } else {
           for(int j = 0; j < reverseAple.length(); j++){
               if(message[i] == reverseAple[j]) {
                   dencryText = aple[j];
                   break;
               }
           } // inner for
       } // if-else
     } // for

    cout << "Dencrypted: " << dencryText;

}



int main()
{
    int choine;
    cout << "1.Encryption. Decryption\nChoose(1,2): ";
    cin >> choine;
    cin.ignore();

    if(choine == 1) {
        cout << "Encryption" << endl;
        cipherDecryption();
    } else if (choine == 2) {
        cout << " Decryption" << endl;
        cipherDecryption();
    } else {
        cout << "Wrong Choice" << endl;string message;
    cout << "Enter Message: ";
    getline(cin, message);
    cin.ignore();

    //message to upper case
    for(int i = 0; i <message.length(); i++) {
       message[i] = toupper(message[i]);
    }

    string aple ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string reverseAple = "";
    for (int i = aple.length()-1; i > -1; i--) {
        reverseAple += aple[i];
    }

   string encrytext ="";
   for(int i = 0; i< message.length(); i++) {
       if(message[i == 32]){
           encrytext += "";
       } else {
           for(int j = 0; j < aple.length(); j++){
               if(message[i] == aple[j]) {
                   encrytext = reverseAple[j];
                   break;
               }
           } // inner for
       } // if-else
     } // for

    cout << "Encrypetd Text: " << encrytext;string message;
    cout << "Enter Message: ";
    getline(cin, message);
    cin.ignore();

    //message to upper case
    for(int i = 0; i <message.length(); i++) {
       message[i] = toupper(message[i]);
    }

    string aple ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string reverseAple = "";
    for (int i = aple.length()-1; i > -1; i--) {
        reverseAple += aple[i];
    }

   string encrytext ="";
   for(int i = 0; i< message.length(); i++) {
       if(message[i == 32]){
           encrytext += "";
       } else {
           for(int j = 0; j < aple.length(); j++){
               if(message[i] == aple[j]) {
                   encrytext = reverseAple[j];
                   break;
               }
           } // inner for
       } // if-else
     } // for

    cout << "Encrypetd Text: " << encrytext;string message;
    cout << "Enter Message: ";
    getline(cin, message);
    cin.ignore();

    //message to upper case
    for(int i = 0; i <message.length(); i++) {
       message[i] = toupper(message[i]);
    }

    string aple ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string reverseAple = "";
    for (int i = aple.length()-1; i > -1; i--) {
        reverseAple += aple[i];
    }

   string encrytext ="";
   for(int i = 0; i< message.length(); i++) {
       if(message[i == 32]){
           encrytext += "";
       } else {
           for(int j = 0; j < aple.length(); j++){
               if(message[i] == aple[j]) {
                   encrytext = reverseAple[j];
                   break;
               }
           } // inner for
       } // if-else
     } // for

    cout << "Encrypetd Text: " << encrytext;
    }
    return 0;
}
