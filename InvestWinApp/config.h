#pragma once

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <fstream>
#include <string>
#include <iomanip>
#include <map>
#include <set>

using namespace RSREU::IO;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;


[Serializable]
ref struct Applicant {
	String^ surname;
	String^ name;
	String^ patro;

	String^ address;

	String^ benefit;
	UInt32 score_UGE;
	String^ trend;
};

void writeInFile(List<Applicant^>^ list);
void MarshalString(String^ s, std::string& os);