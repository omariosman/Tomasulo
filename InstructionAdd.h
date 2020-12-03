#pragma once
#include<iostream>
using namespace std;

class InstructionAdd{
    private:
        int numberOfInstructions;
        int clk;
        string name;
        int rs1;
        int rs2;
        int rd; 
    public:
    void setClk(int c);
    int getClk();

};
