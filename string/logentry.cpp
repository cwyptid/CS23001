//
//
// File:        logentry.cpp  
//       
// Version:     1.0
// Date:        
// Author:      
//
// Description: Class implementation for a log entry.
//
//

////////////////////////////////////////////////////////////
#include <iostream>
#include <vector> 

#include "string.hpp" 
#include "logentry.hpp"

////////////////////////////////////////////////////////// 
// REQUIRES:  S IS STRING
// ENSURES: S IS INTEGER
//
int LogEntry::to_i(const String& s){
  int sum = 0;
  for(int i = 0; i < s.length(); ++i){
    sum *= 10;
    sum += (s[i]-'0');
  }
  return sum;
}

////////////////////////////////////////////////////////// 
// REQUIRES:  STRING IS FROM LOG FILE
// ENSURES:   LOGENTRY IS GIVEN VALUES FROM LINE IN LOG FILE
//
LogEntry::LogEntry(String s) {
    std::vector<String> vec = s.split(' ');

    if(vec.size() == 10){
      host = vec[0];

      std::vector<String> date_time = vec[3].split(':');

      std::vector<String> date_string = date_time[0].split('/');

      String stringday = date_string[0].substr(1, date_string[0].length());
      date.setday(stringday);

      String stringmonth = date_string[1];
      date.setmonth(stringmonth);
      
      int intyear = to_i(date_string[2]);
      date.setyear(intyear);

      time.sethour(to_i(date_time[1])); //to_i
      time.setminute(to_i(date_time[2])); //to_i
      time.setsecond(to_i(date_time[3])); //to_i

      request = vec[5] + vec[6] + vec[7];
      
      status = vec[8];

      if(vec[9] == '-'){
	      number_of_bytes = 0;
      }
	      number_of_bytes = to_i(vec[9]); 

      } else {
	      host = "";
	      date.setday("");
	      date.setmonth("");
	      date.setyear(0);
	      time.sethour(0);
	      time.setminute(0);
	      time.setsecond(0);
	      request = "";
	      status = "";
	      number_of_bytes = 0;
      }
}    
    


////////////////////////////////////////////////////////// 
// REQUIRES:  IN = FILE IN INPUT STREAM
// ENSURES:  RESULT CONTAINS LOGENTRYS IN VALUES
//
std::vector<LogEntry> parse(std::istream& in) {
    std::vector<LogEntry> result;
    String temp;
    char ch;

    while(in.get(ch)){
      temp = temp + ch;

      if(ch == '\n'){
	      result.push_back(temp);
	      temp[0] = 0;
      }

    }
    return result;
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
void output_all(std::ostream& out, const std::vector<LogEntry> & vec_o_logs) {

    for(unsigned int i = 0; i < vec_o_logs.size(); ++i){
    out << vec_o_logs[i];
  }
    
}

////////////////////////////////////////////////////////// 
// REQUIRES:  OUT = FILE IN OUTPUT STREAM
// ENSURES:  OUTPUTS EACH LOGENTRY VALUE TO THE STREAM 
//
void by_host(std::ostream& out, const std::vector<LogEntry>& logs) {
    for(unsigned int i = 0; i < logs.size(); ++i){
    out << logs[i].gethost() << '\n';
    }

}

////////////////////////////////////////////////////////// 
// REQUIRES:  LOGS HAS BEEN GIVEN VALUES
// ENSURES:  RETURNS THE SUM OF THE NUMBER OF BYTES
//
int byte_count(const std::vector<LogEntry> & logs) {
    int sum = 0;
    
    for (unsigned int i = 0; i < logs.size(); ++i) {
        sum += logs[i].getbytes();
    }
    
    return sum;  
}

////////////////////////////////////////////////////////// 
// REQUIRES:  OUT = CONNECTED TO FILE
// ENSURES: OUTPUTS LOGENTRY OBJECTS TO A SCREEN
//
std::ostream& operator<<(std::ostream& out, const LogEntry& log){
  
  out << "Host: " << log.host << '\n';
  
  out << "Day: " << log.date.getday() << '\n';
  out << "Month: " << log.date.getmonth() << '\n';
  out << "Year: " << log.date.getyear() << '\n';
  
  out << "Hour: " << log.time.gethour() << '\n';
  out << "Minute: " << log.time.getminute() << '\n';
  out << "Second: " << log.time.getsecond() << '\n';

  out << "Request: " << log.request << '\n';
  out << "Status: " << log.status << '\n';
  out << "Bytes: " << log.number_of_bytes << "\n\n";

  return out;
}
