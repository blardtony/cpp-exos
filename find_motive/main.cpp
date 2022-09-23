#include <iostream>
#include <fstream>
#include <string>
#include <regex>

using namespace std;

bool is_valid_pattern(const string& rgx)
{
    bool result = true;
    try
    {
        std::regex tmp(rgx);
    }
    catch (const std::regex_error& e)
    {
        (e);
        result = false;
    }
    return result;
}

int main()
{
    string path, pattern;
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
    }
    return 0;
}