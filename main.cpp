#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
#include<vector>
#include<map>
#include "InstructionAdd.h"
#include "InstructionDiv.h"
#include "InstructionBeq.h"
#include "InstructionJal.h"
#include "InstructionLoad.h"
#include "ResStatHandler.h"
#include "ReservationStation.h"
using namespace std;


class RegisterStat{
private:
	vector<pair<string, string> > regStat;
public:

};









// int issue(ReservationStation object){
//     if()
//     //comdition for FP
//     if(){

//     }
//     //condition for Lw
//     if(){

//     }
//     //condition for Sw
//     if(){

//     }
//     //at the end return clk
// };


// int execute(){
//     //condition for FP
//     if(){
        
//     }
//     //condition for Lw
//     if(){

//     }
//     //condition for Sw
//     if(){

//     }
//     //return clk
// };

// int writeBack(){
//     //condition for FP and lw
//     if(){

//     }
//     //condition for Sw 
//     if(){

//     }
//     //return clk
// };



int main(int argC, char **argv) {
    ResStatHandler object();
    ReservationStation load1;
    ReservationStation load2;
    ReservationStation store1;
    ReservationStation store2;
    ReservationStation branch;
    ReservationStation jal;
    ReservationStation add1;
    ReservationStation add2;
    ReservationStation div;

    map<string, int> RegFile;
    map<string, int> inst_type;     //map for the instruction types to a number
    RegFile["r0"] = 0;
    RegFile["r1"] = 0;
    RegFile["r2"] = 0;
    RegFile["r3"] = 0;
    RegFile["r4"] = 0;
    RegFile["r5"] = 0;
    RegFile["r6"] = 0;
    RegFile["r7"] = 0;
    RegFile["r8"] = 0;
    RegFile["r9"] = 0;
    RegFile["r10"] = 0;
    RegFile["r11"] = 0;
    RegFile["r12"] = 0;
    RegFile["r13"] = 0;
    RegFile["r14"] = 0;
    RegFile["r15"] = 0;
    
    int arrayRegs[16];

	vector <vector <string> > my_inst;
  		 ifstream instruction_file; //keywords
			instruction_file.open(argv[1]);
		  while (instruction_file)
		  {
			string s;
			if (!getline( instruction_file, s )) break;

			stringstream ss(s);
			vector <string> inst_params;

			while (ss)
			{
			  string s;
			  if (!getline( ss, s, ' ' )) break;
			  inst_params.push_back(s);
			}

			my_inst.push_back(inst_params);
		  }
		  if (!instruction_file.eof())
		  {
			cerr << "\n";
		  }
		  
		//   for (int i = 0; i < my_inst.size(); i++){
		//   	for (int j = 0; j < my_inst[i].size(); j++) {
		//   		cout << my_inst[i][j] << " ";
		//   	}
		//   	cout << endl;
		//   }
        cout << my_inst[0][0] << endl;
 
 
}

