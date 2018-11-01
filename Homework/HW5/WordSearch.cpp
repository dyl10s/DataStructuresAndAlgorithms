//
//  WordSearch.cpp
//  CS263-HW4
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>  // needed for transform()
#include <exception>
#include <regex>
#include "WordSearch.h"

WordSearch::WordSearch() {
    /* default constructor requires no additional code */
}

WordSearch::WordSearch(const string& topdir, const string& ignore_file) {
    load_ignored_words(ignore_file);
    /* filter the directory only for files ending with "txt" */
    gvsu::FileSystem dir (topdir, regex{"txt$"});

    for (auto entry : dir) {
        cout << "Reading words from " << entry.second << endl;
        read_words (entry.first + "/" + entry.second);
    }
}

void WordSearch::load_ignored_words(const string& fname) {
    ifstream ign_file (fname);
    if (!ign_file.is_open()) {
        throw ios_base::failure {"Unable to load ignored.txt"};

    }
    string word;
    while (getline(ign_file, word))
        ignored_words.insert(word);
    ign_file.close();
}

void WordSearch::read_words(const string &file_name)
{
    /* a word is THREE OR MORE alphabetical characters (lowercase) */
    const regex word_re {"[a-z]{3,}"};

    /* Alternate declaration of the above regular expr
     const regex word_re {"[[:alpha:]]{3,}"};
     */
    ifstream txt (file_name); /* file is aumatically open */

    string one_line;

    int line = 1;
    string prev = "";
    while (getline(txt, one_line)) {
        /* change to lowercase */
        transform(one_line.begin(), one_line.end(), one_line.begin(), ::tolower);
        /* iterate over the string using a regular expression */
        auto re_begin = sregex_iterator {one_line.begin(),one_line.end(), word_re};
        auto re_end = sregex_iterator{};
        for (auto word = re_begin; word != re_end; ++word) {
            /* if the word is in the ignored list, don't print it */
            if (ignored_words.find(word->str()) == ignored_words.end()) {
                words[word->str()] = words[word->str()] + 1;

                if (prev != "") {
                    wordsAfter[prev][word->str()] = wordsAfter[prev][word->str()] + 1;
                }

                prev = word->str();
            }
        }
        line++;
    }
    wordsAfter[prev][""] = wordsAfter[prev][""] + 1;
    txt.close(); /* close the file */
}


unsigned long WordSearch::word_count() const {
    /* TODO complete this function */
    int count = 0;
    for(auto w : words){
        count += w.second;
    }
    return count;
}

set<string> WordSearch::words_of_length (int L) const {
    /* TODO complete this function */
    set<string> wordsOfLength;
    for(auto w : words){
        if(w.first.length() == L)
            wordsOfLength.insert(w.first);
    }
    return wordsOfLength;   /* return an empty set */
}

pair<unsigned int,set<string>> WordSearch::most_frequent_words() const
#ifndef _WIN32
throw (length_error)
#endif
{
    if(words.size() == 0)
        throw length_error{"There are no words"};

    set<string> freqWords;
    int highScore = 0;

    /* TODO complete this function */
    for(auto w : words){
        if(w.second > highScore){
            highScore = w.second;
            freqWords.clear();
            freqWords.insert(w.first);
        }else if(w.second == highScore){
            freqWords.insert(w.first);
        }
    }

    return make_pair(highScore, freqWords);
}

set<string> WordSearch::least_frequent_words(int count) const {

    if(words.size() == 0)
        throw length_error{"There are no words"};

    set<string> freqWords;


    for(auto w : words){
        if(w.second <= count){
            freqWords.insert(w.first);
        }
    }

    return freqWords;
}

string WordSearch::most_probable_word_after(const string& word) const {


    if(words.size() == 0)
        throw length_error{"There are no words"};

    int highScore = 0;
    string data;

    for(auto const &n : wordsAfter.at(word)){
        if(n.second >= highScore){
            highScore = n.second;
            data = n.first;
        }
    }

    return data;
}