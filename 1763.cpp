#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main(){
  using namespace regex_constants;

  cmatch m;

  regex_match ( "subject", m, regex("(sub)(.*)") );

  string output = "matches:\n";
  for (unsigned i=0; i<m.size(); ++i) {
    output+= m.str(i) + "\n";
  }

  cout << output << endl;

  return 0;
}