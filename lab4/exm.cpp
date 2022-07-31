#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // char rabbit[16] = {'P', 'e', 't', 'e', 'r'};
    // cout << "String length is " << strlen(rabbit) << endl;
    // for(int i = 0; i < 16; i++)
    //     cout << i << ":" << +rabbit[i] << "(" << rabbit[i] << ")" << endl;

    // char bad_pig[10] = {'P', 'e', 'p', 'p', 'a', ' ', 'P', 'i', 'g'};
    // char good_pig[10] = {'P', 'e', 'p', 'p', 'a', ' ', 'P', 'i', 'g', '\0'};

    // for(int i = 0; i < 16; i++)
    //     cout << i << ":" << +bad_pig[i] << "(" << bad_pig[i] << ")" << endl;

    // cout << "Rabbit is (" << rabbit << ")" << endl;
    // cout << "Pig's bad name is (" << bad_pig << ")" << endl; 
    // cout << "Pig's good name is (" << good_pig << ")" << endl; 

    // char name[10] = {'Y', 'u', '\0', 'S', '.', '0'};
    // cout << strlen(name) << endl;

    // char len_est[] = "liwenqiang";
    // cout << sizeof(len_est) << "    " << strlen(len_est) << endl;


    // char string_src[] = "liw\0enqiang";
    // char string_tar[14];

    // strcpy(string_tar,string_src);
    // cout << string_tar << endl;


    string sss = "liwenqiang";
    string fff = "111111111";
    cout << "sss:" << sss << endl;
    cout << "sss[2]" << sss[2] << endl;
    cout << "ss.at(3)" << sss.at(2) << endl;
    cout << "sss[20]" << sss[20] << endl;
    cout << "sss.at(20)" << sss.at(20) << endl;
    return 0;
}