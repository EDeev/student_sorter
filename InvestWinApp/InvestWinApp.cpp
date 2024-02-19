#include "pch.h"

#include "config.h"
#include "AddApplicant.h"
#include "MyForm.h"


void writeInFile(List<Applicant^>^ list) {
	List<Applicant^>^ old_data = ReadWrite::Load<List<Applicant^>^>("applis.dat");

	if (old_data) {
		old_data->AddRange(list);
		ReadWrite::Save(old_data, "applis.dat");
	}
	else ReadWrite::Save(list, "applis.dat");
}

void MarshalString(String^ s, std::string& os) {
	using namespace Runtime::InteropServices;
	const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}


[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	InvestWinApp::MyForm form;
	Application::Run(% form);
}