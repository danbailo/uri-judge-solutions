#include <iostream>
#include <map>

using namespace std;

int main(){

  	string line;
	map<string, string> map_countrys;

	map_countrys["brasil"]= "Feliz Natal!";
	map_countrys["alemanha"]= "Frohliche Weihnachten!";
	map_countrys["austria"] = "Frohe Weihnacht!";
	map_countrys["coreia"]= "Chuk Sung Tan!";
	map_countrys["espanha"] = "Feliz Navidad!";
	map_countrys["grecia"]= "Kala Christougena!";
	map_countrys["estados-unidos"]= "Merry Christmas!";
	map_countrys["inglaterra"]= "Merry Christmas!";
	map_countrys["australia"] = "Merry Christmas!";
	map_countrys["portugal"]= "Feliz Natal!";
	map_countrys["suecia"]= "God Jul!";
	map_countrys["turquia"] = "Mutlu Noeller";
	map_countrys["argentina"] = "Feliz Navidad!";
	map_countrys["chile"] = "Feliz Navidad!";
	map_countrys["mexico"]= "Feliz Navidad!";
	map_countrys["antardida"] = "Merry Christmas!";
	map_countrys["canada"]= "Merry Christmas!";
	map_countrys["irlanda"] = "Nollaig Shona Dhuit!";
	map_countrys["belgica"] = "Zalig Kerstfeest!";
	map_countrys["italia"]= "Buon Natale!";
	map_countrys["libia"] = "Buon Natale!";
	map_countrys["siria"] = "Milad Mubarak!";
	map_countrys["marrocos"]= "Milad Mubarak!";
	map_countrys["japao"] = "Merii Kurisumasu!";

	// bool first_ocurrence;
	// while(getline(cin, line)){
	// 	string country = "";		
	// 	string phrase = "";
	// 	first_ocurrence = false;
	// 	for(int i = 0; i < line.size(); i++){
	// 		if(line[i] == ' ' and line[i+1] == ' ') 
	// 			continue;
	// 		else {
	// 			if(line[i] != ' ' and !first_ocurrence){
	// 				country += line[i];
	// 				if(line[i+1] == ' ') first_ocurrence = true;
	// 			}
	// 			if(line[i] == ' '){
	// 				phrase = line.substr(i+1, line.size()-1);
	// 				break;
	// 			}
	// 		}			
	// 	}
	// 	map_countrys[country] = phrase;	
	// }

	string input;
	map<string, string>::iterator it;

	while(cin >> input){
		
		it = map_countrys.find(input);
		if(it == map_countrys.end()){
			cout << "--- NOT FOUND ---" << endl;
		}
		else{
			cout << it->second << endl;
		}
	}

  	return 0;
}