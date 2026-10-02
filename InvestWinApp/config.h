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

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;


// Сохранение и загрузка списка в файл (двоичная сериализация .NET).
// Раньше бралось из вузовской библиотеки RSREU.IO, которой нет в репозитории.
ref class ReadWrite abstract sealed {
public:
	template<class T>
	static T Load(String^ path) {
		if (!System::IO::File::Exists(path)) return nullptr;
		System::IO::FileStream^ fs = System::IO::File::OpenRead(path);
		try {
			auto formatter = gcnew System::Runtime::Serialization::Formatters::Binary::BinaryFormatter();
			return safe_cast<T>(formatter->Deserialize(fs));
		}
		finally {
			fs->Close();
		}
	}

	template<class T>
	static void Save(T obj, String^ path) {
		System::IO::FileStream^ fs = System::IO::File::Create(path);
		try {
			auto formatter = gcnew System::Runtime::Serialization::Formatters::Binary::BinaryFormatter();
			formatter->Serialize(fs, obj);
		}
		finally {
			fs->Close();
		}
	}
};

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