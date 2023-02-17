#include "count_fileclass.h"
#include <QTextStream>
#include <QString>
#include <QMessageBox>



Count_FileClass::Count_FileClass()
{

}

string Count_FileClass::get_text(){
    return word;
}

void Count_FileClass::copy_file_to_text(string& text, string filename)
{
    fstream File;
    File.open(filename, ios::in);

    while (!File.fail() && !File.eof())
    {
        text += File.get();
    }

    File.close();

}


void Count_FileClass::copy_text_to_file(string text, string filename)
{
    ofstream File;
    File.open(filename, ios::out);
    if (!File)
    {
        // QMessageBox
    }

    File << text;
    File.close();
}




string Count_FileClass::cleanFile(string filename) {
    string txt;
    copy_file_to_text(txt, filename);
    for (int i = 0; i < txt.size(); i++) {
        if ((ispunct(txt[i]) && txt[i] != '-')) {
            txt.erase(i, 1);
            i--;
        }
        else if (isalnum(txt[i])) {
            txt[i] = tolower(txt[i]);
        }

    }
    return txt;
    copy_text_to_file(txt, filename);
}



void Count_FileClass::search_print_file(string filename) {
    int sumChar = 0;
    string txt;
    cleanFile(filename);
    copy_file_to_text(txt, filename);
    for (int i = 0; i < txt.size(); i++) {
        if (txt[i] == ' ' || txt[i] == '\n') {
            string word = txt.substr(i-sumChar, sumChar);
            words.insert(word);
            sumChar = 0;
        }
        else {
            sumChar++;
        }
    }

    for (its = words.begin(); its != words.end(); its++) {
        int sum = words.count(*its);
        if (table.find(*its) == table.end()) {
            table.insert({ *its , sum });
        }
    }

}


void Count_FileClass::print_map(string filename){
    search_print_file(filename);
    fstream file ;
    file.open("print.txt" , ios::out);
    if(file){
        file <<setfill('-')<<setw(50) <<"-" << endl;
        file << "|"<<setfill(' ')<<setw(15)<<"word"<<setfill(' ')<<setw(15)<<"|" << setfill(' ') << setw(12) << " frequency" << setfill(' ') << setw(9) << "|" << endl;
        file << setfill('-') << setw(50) << "-" << endl;
        for (it = table.begin(); it != table.end(); it++) {
            file <<"|         "<<left<< setfill(' ') << setw(15) << it->first << setfill(' ') << setw(10-((it->first).size()))<<" " << " |    " << setfill(' ') << setw(10) <<" "<< it->second << setfill(' ') << setw(12)<<" " << "|" << endl;
        }
        file << setfill('-') << setw(50) << "-" << endl;

    }

    copy_file_to_text(word , "print.txt");

}



void Count_FileClass::clear_file(string filename){
    string str = "";
    fstream file;
    file.open(filename , ios::out);
    file<<str;
    file.close();
}
