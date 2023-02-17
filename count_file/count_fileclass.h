#ifndef COUNT_FILECLASS_H
#define COUNT_FILECLASS_H
#include <iostream>
#include <map>
#include <cctype>
#include <fstream>
#include <set>
#include <iomanip>


using namespace std;


class Count_FileClass
{
private:
    string word;
    multiset<string>words;
    multiset<string>::iterator its;
    map<string, int>table;
    map<string, int >::iterator it;


public:
    Count_FileClass();
    string get_text();

    void copy_file_to_text(string& text, string filename);
    void copy_text_to_file(string text, string filename);
    string cleanFile(string filename);
    void search_print_file(string filename) ;
    void print_map(string filename);
    void clear_file(string filename);
};

#endif // COUNT_FILECLASS_H
