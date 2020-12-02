#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
#include<vector>
#include<map>
using namespace std;

class ResStatHandler{
private:
    int LoadNum;
    int StoreNum;
    int AddNum;
    int DivNum;
    int JalNum;
    int BeqNum;
public:
    ResStatHandler(){
        LoadNum = 2;
        StoreNum = 2;
        AddNum = 2;
        DivNum = 1;
        JalNum = 1;
        BeqNum = 1;
    }
    void incrementLoad(){
        LoadNum++;
    }
    void incrementStore(){
        StoreNum++;
    }
    void incrementAdd(){
        AddNum++;
    }
    void incrementDiv(){
        DivNum++;
    }
    void incrementJal(){
        JalNum++;
    }
    void incrementBeq(){
        BeqNum++;
    }


    void decrementLoad(){
        LoadNum--;
    }
    void decrementStore(){
        StoreNum--;
    }
    void decrementAdd(){
        AddNum--;
    }
    void decrementDiv(){
        DivNum--;
    }
    void decrementJal(){
        JalNum--;
    }
    void decrementBeq(){
        BeqNum--;
    }

    bool is_load_available(){
        return (LoadNum > 0);
    }

    bool is_store_available(){
        return (StoreNum > 0);
    }

    bool is_add_available(){
        return (AddNum > 0);
    }

    bool is_beq_available(){
        return (BeqNum > 0);
    }

    bool is_div_available(){
        return (DivNum > 0);
    }

    bool is_jal_available(){
        return (JalNum > 0);
    }
};

class ReservationStation{
private:
	int name;
	bool busy;
	string op;
	string Vj;
	string Vk;
	string Qj;
	string Qk;
	long addr;
public:
	void setName(int nam){
		name = nam;
	}
	void setBusy(bool bus){
		busy = bus;
	}
	void setOp(string Op){
		op = Op;
	}
	void setVj(string vj){
		Vj = vj;
	}
	void setVk(string vk){
		Vk = vk;
	}
	void setQj(string qj){
		Qj = qj;
	}
	void setQk(string qk){
		Qk = qk;
	}
	void setAddr(long add){
		addr = add;
	}
	int getName(){return name;}
	bool getBusy(){return busy;}
	string getOp(){return op;}
	string getVj(){return Vj;}
	string getVk(){return Vk;}
	string getQj(){return Qj;}
	string getQk(){return Qk;}
	long getAddr(){return addr;}

};

class RegisterStat{
private:
	vector<pair<string, string> > regStat;
public:

};


class InstructionLoad{
    private:
        int numberOfInstructions;
        int clk;
    public:
        void setClk(int c){
            clk = c;
        }
        int getClk(){return clk;}
};

class InstructionStore{
    private:
        int numberOfInstructions;
        int clk;
    public:
        void setClk(int c){
            clk = c;
        }
        int getClk(){return clk;}
};

class InstructionAdd{
    private:
        int numberOfInstructions;
        int clk;
        string name;
        int rs1;
        int rs2;
        int rd; 
    public:
        void setClk(int c){
            clk = c;
        }
        int getClk(){return clk;}
};

class InstructionDiv{
    private:
        int numberOfInstructions;
        int clk;
    public:
        void setClk(int c){
            clk = c;
        }
        int getClk(){return clk;}
};

class InstructionJal{
    private:
        int numberOfInstructions;
        int clk;
    public:
        void setClk(int c){
            clk = c;
        }
        int getClk(){return clk;}
};

class InstructionBeq{
    private:
        int numberOfInstructions;
        int clk;
    public:
        void setClk(int c){
            clk = c;
        }
        int getClk(){return clk;}
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
