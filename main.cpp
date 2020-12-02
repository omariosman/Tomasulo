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
	int setName(int nam){
		name = nam;
	}
	bool setBusy(bool bus){
		busy = bus;
	}
	string setOp(string Op){
		op = Op;
	}
	string setVj(string vj){
		Vj = vj;
	}
	string setVk(string vk){
		Vk = vk;
	}
	string setQj(string qj){
		Qj = qj;
	}
	string setQk(string qk){
		Qk = qk;
	}
	long setAddr(string add){
		addr = add;
	}
	void getName(){return name;}
	void getBusy(){return busy;}
	void getOp(){return op;}
	void getVj(){return Vj;}
	void getVk(){return Vk;}
	void getQj(){return Qj;}
	void getQk(){return Qk;}
	void getAddr(){return addr;}

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
        int setClk(int c){
            clk = c;
        }
        void getClk(){return clk;}
}

class InstructionStore{
    private:
        int numberOfInstructions;
        int clk;
    public:
        int setClk(int c){
            clk = c;
        }
        void getClk(){return clk;}
}

class InstructionAdd{
    private:
        int numberOfInstructions;
        int clk;#include<iostream>
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
	int setName(int nam){
		name = nam;
	}
	bool setBusy(bool bus){
		busy = bus;
	}
	string setOp(string Op){
		op = Op;
	}
	string setVj(string vj){
		Vj = vj;
	}
	string setVk(string vk){
		Vk = vk;
	}
	string setQj(string qj){
		Qj = qj;
	}
	string setQk(string qk){
		Qk = qk;
	}
	long setAddr(string add){
		addr = add;
	}
	void getName(){return name;}
	void getBusy(){return busy;}
	void getOp(){return op;}
	void getVj(){return Vj;}
	void getVk(){return Vk;}
	void getQj(){return Qj;}
	void getQk(){return Qk;}
	void getAddr(){return addr;}

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
        int setClk(int c){
            clk = c;
        }
        void getClk(){return clk;}
}

class InstructionStore{
    private:
        int numberOfInstructions;
        int clk;
    public:
        int setClk(int c){
            clk = c;
        }
        void getClk(){return clk;}
}

class InstructionAdd{
    private:
        int numberOfInstructions;
        int clk;
        string name;
        int rs1;
        int rs2;
        int rd; 
    public:
        int setClk(int c){
            clk = c;
        }
        void getClk(){return clk;}
}

class InstructionDiv{
    private:
        int numberOfInstructions;
        int clk;
    public:
        int setClk(int c){
            clk = c;
        }
        void getClk(){return clk;}
}

class InstructionJal{
    private:
        int numberOfInstructions;
        int clk;
    public:
        int setClk(int c){
            clk = c;
        }
        void getClk(){return clk;}
}

class InstructionBeq{
    private:
        int numberOfInstructions;
        int clk;
    public:
        int setClk(int c){
            clk = c;
        }
        void getClk(){return clk;}
}

int issue(ReservationStation object){
    if()
    //comdition for FP
    if(){

    }
    //condition for Lw
    if(){

    }
    //condition for Sw
    if(){

    }
    //at the end return clk
}


int execute(){
    //condition for FP
    if(){
        
    }
    //condition for Lw
    if(){

    }
    //condition for Sw
    if(){

    }
    //return clk
}

int writeBack(){
    //condition for FP and lw
    if(){

    }
    //condition for Sw 
    if(){

    }
    //return clk
}
int main(int argC, char **argv) {
    ResStatHandler object;
    ReservationStation load1;
    ReservationStation load2;
    ReservationStation store1;
    ReservationStation store2;
    ReservationStation branch;
    ReservationStation jal;
    ReservationStation add1;
    ReservationStation add2;
    ReservationStation div;

    map<string, int> inst_type;     //map for the instruction types to a number
    int arrayRegs[16];

	vector<string> inst_arr;        //vector of instructions read from the file
	ifstream infile;
	infile.open(argv[1], ios::in);
	
	int i = 0;
       string instruction;
        while (!infile.eof()){
            getline(infile, instruction);
            inst_arr.push_back(instruction);
            i++;
        }
       
       for (int i = 0; i < inst_arr.size(); i++){
       		cout << inst_arr[i] << endl;
       } 
 
 
}#include<iostream>
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
	int setName(int nam){
		name = nam;
	}
	bool setBusy(bool bus){
		busy = bus;
	}
	string setOp(string Op){
		op = Op;
	}
	string setVj(string vj){
		Vj = vj;
	}
	string setVk(string vk){
		Vk = vk;
	}
	string setQj(string qj){
		Qj = qj;
	}
	string setQk(string qk){
		Qk = qk;
	}
	long setAddr(string add){
		addr = add;
	}
	void getName(){return name;}
	void getBusy(){return busy;}
	void getOp(){return op;}
	void getVj(){return Vj;}
	void getVk(){return Vk;}
	void getQj(){return Qj;}
	void getQk(){return Qk;}
	void getAddr(){return addr;}

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
        int setClk(int c){
            clk = c;
        }
        void getClk(){return clk;}
}

class InstructionStore{
    private:
        int numberOfInstructions;
        int clk;
    public:
        int setClk(int c){
            clk = c;
        }
        void getClk(){return clk;}
}

class InstructionAdd{
    private:
        int numberOfInstructions;
        int clk;
        string name;
        int rs1;
        int rs2;
        int rd; 
    public:
        int setClk(int c){
            clk = c;
        }
        void getClk(){return clk;}
}

class InstructionDiv{
    private:
        int numberOfInstructions;
        int clk;
    public:
        int setClk(int c){
            clk = c;
        }
        void getClk(){return clk;}
}

class InstructionJal{
    private:
        int numberOfInstructions;
        int clk;
    public:
        int setClk(int c){
            clk = c;
        }
        void getClk(){return clk;}
}

class InstructionBeq{
    private:
        int numberOfInstructions;
        int clk;
    public:
        int setClk(int c){
            clk = c;
        }
        void getClk(){return clk;}
}

int issue(ReservationStation object){
    if()
    //comdition for FP
    if(){

    }
    //condition for Lw
    if(){

    }
    //condition for Sw
    if(){

    }
    //at the end return clk
}


int execute(){
    //condition for FP
    if(){
        
    }
    //condition for Lw
    if(){

    }
    //condition for Sw
    if(){

    }
    //return clk
}

int writeBack(){
    //condition for FP and lw
    if(){

    }
    //condition for Sw 
    if(){

    }
    //return clk
}
int main(int argC, char **argv) {
    ResStatHandler object;
    ReservationStation load1;
    ReservationStation load2;
    ReservationStation store1;
    ReservationStation store2;
    ReservationStation branch;
    ReservationStation jal;
    ReservationStation add1;
    ReservationStation add2;
    ReservationStation div;

    map<string, int> inst_type;     //map for the instruction types to a number
    int arrayRegs[16];

	vector<string> inst_arr;        //vector of instructions read from the file
	ifstream infile;
	infile.open(argv[1], ios::in);
	
	int i = 0;
       string instruction;
        while (!infile.eof()){
            getline(infile, instruction);
            inst_arr.push_back(instruction);
            i++;
        }
       
       for (int i = 0; i < inst_arr.size(); i++){
       		cout << inst_arr[i] << endl;
       } 
 
 
}
    public:
        int setClk(int c){
            clk = c;
        }
        void getClk(){return clk;}
}

class InstructionDiv{
    private:
        int numberOfInstructions;
        int clk;
    public:
        int setClk(int c){
            clk = c;
        }
        void getClk(){return clk;}
}

class InstructionJal{
    private:
        int numberOfInstructions;
        int clk;
    public:
        int setClk(int c){
            clk = c;
        }
        void getClk(){return clk;}
}

class InstructionBeq{
    private:
        int numberOfInstructions;
        int clk;
    public:
        int setClk(int c){
            clk = c;
        }
        void getClk(){return clk;}
}

int issue(ReservationStation object){
    if()
    //comdition for FP
    if(){

    }
    //condition for Lw
    if(){

    }
    //condition for Sw
    if(){

    }
    //at the end return clk
}


int execute(){
    //condition for FP
    if(){
        
    }
    //condition for Lw
    if(){

    }
    //condition for Sw
    if(){

    }
    //return clk
}

int writeBack(){
    //condition for FP and lw
    if(){

    }
    //condition for Sw 
    if(){

    }
    //return clk
}
int main(int argC, char **argv) {
    ResStatHandler object;
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

	vector<string> inst_arr;        //vector of instructions read from the file
	ifstream infile;
	infile.open(argv[1], ios::in);
	
	int i = 0;
       string instruction;
        while (!infile.eof()){
            getline(infile, instruction);
            inst_arr.push_back(instruction);
            i++;
        }
       
       for (int i = 0; i < inst_arr.size(); i++){
       		cout << inst_arr[i] << endl;
       } 
 
 
}
