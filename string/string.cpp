// Eddie Lampert
// CS 23001 Project 2
// string.cpp
// November 1 2021

#include "string.hpp"
#include <cassert>
#include <vector>

String::String(){
    stringSize = 1;
    str = new char[1];
    str[0] = '\0';
}

String::String(char ch){
    if(ch == '\0'){
        stringSize = 1;
        str = new char[1];
        str[0] = '\0';
    }
    else{
        str = new char[2];
        str[0] = ch;
        str[1] = '\0';
        stringSize = 2;
    }
}

String::String(const char s[]){
    int i = 0;

    while(s[i] != '\0')
        ++i;
        str = new char[i + 1];
        stringSize = i + 1;

        i = 0;

    while(s[i] != '\0'){
        str[i] = s[i];
        ++i;
    }

    str[i] = '\0';
}

String::String(const String& rhs){
    stringSize = rhs.stringSize;
    str = new char[stringSize];

    for (int i = 0; i < stringSize - 1; ++i){
        str[i] = rhs.str[i];
    }
    str[stringSize-1] = '\0';
}

String::~String(){
    delete[] str;
}

void String::swap(String& rhs){
    char *temp = str;
    str = rhs.str;
    rhs.str = temp;

    int tempSize = stringSize;
    stringSize = rhs.stringSize;
    rhs.stringSize = tempSize;
}

String& String::operator=(String rhs){
    swap(rhs);
    return *this;
}

int String::capacity() const{
    return stringSize - 1;
}

int String::length() const {
    int result = 0;
    while (str[result] != '\0') ++result;
    return result;
}

char& String::operator[](int i) {
    return str[i];
}

char String::operator[](int i) const {
    return str[i];
}

String& String::operator+=(const String& rhs){
  char *c = new char [length() + rhs.stringSize];
  int i = 0;
  while( str[i] != 0) {
    c[i] = str[i];
    ++i;
  }
  int j = 0;
  while( rhs.str[j] != 0) {
      c[i++] = rhs.str[j++];
    }
    c[i] = '\0';
    String *k = new String(c);
    *this = *k;
    return *this;

    
}

bool String::operator==(const String& rhs) const {
    if (length() == rhs.length()) {
        for (int i=0; str[i] != '\0' && rhs[i] != '\0'; ++i) {
            if (str[i] != rhs[i])
                return false;
        }
        return true;
    }
    return false;
}

bool String::operator<(const String& rhs) const {
    int i=0;
    while ((str[i] != 0) && (str[i] == rhs.str[i])) ++i;
    return str[i] < rhs.str[i];
}

String String::substr(int start, int end) const{  //returns the sub-string from start to end position (inclusive)
    String result;

    for (int i=start; i<=end; ++i){
        result.str[i-start]=str[i];
        result.str[end-start+1]=0;

  }
  return result;
}

int String::findch(int start, char ch) const {
    int i = start;
    if((start < 0) || (start >= length())) return -1;

    while(str[i] != 0){
        if(str[i] == ch) return i;
        ++i;
    }
    return -1;
}

int String::findstr(int start, const String& rhs) const {
    int foundAt = -1;
    if(start == 0 && str[0] == rhs[0]){
        foundAt = 0;
        for(int j = 0; j < rhs.length(); ++j){
            if(str[foundAt + j] != rhs[j])
                foundAt = -1;
            else
                 foundAt = 0;
        }
        return foundAt;

    }

    for(int i = start; i <= length(); ++i){
        if(str[i] == rhs[0]){
            foundAt = i;
        }
        for(int j = 0; j < rhs.length(); ++j){
            if(str[foundAt + j] != rhs[j])
                foundAt = -1;
        }
        
    }
    return foundAt;
}

std::vector<String> String::split(char ch)const{
  std::vector<String> result;
  String str1;

  for(int i = 0; str[i] != 0; ++i){
    if(str[i] != ch){
      str1 = str1 + str[i];
    }
    else{
      result.push_back(str1);
      if(str[i+1]!=ch)
        str1 = str[++i];
      else{
        str1="";
        result.push_back(str1);
        i++;
      }
    }
  }
  result.push_back(str1);
  return result;
}

// read one word
std::istream& operator>>(std::istream& in, String& rhs){
    in >> rhs.str;
    return in;
}

std::ostream& operator<<(std::ostream& out, const String& rhs){
    out << rhs.str;
    return out;
}

String operator+(String lhs, const String & rhs )
{
    String result(lhs);
    result += rhs;                                                                                                                           
    return result;
}

bool operator==(const char lhs[], const String& rhs){
    return String(lhs) == rhs;
}

bool operator==(char lhs, const String& rhs){
    return String(lhs) == rhs;
}

bool operator<(const char lhs[], const String& rhs){
    return String(lhs) < rhs;
}

bool operator<(char lhs, const String& rhs){
    return String(lhs) < rhs;
}

bool operator<=(const String& lhs, const String& rhs) {
    return (lhs < rhs) || (lhs == rhs);
}

bool operator!=(const String& lhs, const String& rhs) {
    if((lhs > rhs) || (lhs < rhs))
        return true;
    else
        return false;
}

bool operator>=(const String& lhs, const String& rhs) {
    return !(lhs < rhs);
}

bool operator>(const String& lhs, const String& rhs) {
    return rhs < lhs;
}
