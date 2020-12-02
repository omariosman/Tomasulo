#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
#include<vector>
using namespace std;

class ReservationStation{
private:
	string name;
	bool busy;
	string op;
	string Vj;
	string Vk;
	string Qj;
	string Qk;
	long addr;
public:
	string setName(string nam){
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

class Instruction{
    private:
        int clk;
    public:
        int setClk(int c){
            clk = c;
        }
        void getClk(){return clk;}
}

int issue(){
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
/*
	vector<string> inst_arr;
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
 
 
 2D vector
 {
 {lw, r1, 0(r0)},
