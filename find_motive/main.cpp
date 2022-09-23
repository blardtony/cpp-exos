#include <iostream>
#include <fstream>
#include <string>
#include <regex>

using namespace std;

int main()
{
    string path;
    string pattern;
    string line;
    string word;

    cin >> path >> pattern;
    
    regex rgx(pattern);
    ifstream myfile(path);

    int word_count = 0;

    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            stringstream ss(line);
            while (ss >> word)
            {
                if (regex_search(word, rgx))
                {
                    ++word_count;
                }
            }
        }
        myfile.close();
        cout << "The file " << path << " contains " << word_count << " words containing the motive " << pattern << "\n";
    }
    else 
    {
        cout << "The file " << path << " could not be opened.\n";
        return 1;
    }
    return 0;
}