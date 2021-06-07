#include "MainForm.h"
#include <Windows.h>
using namespace Practice;
using namespace System;
[STAThread]

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MainForm);
	return 0;
}

//Проверка является ли символ буквой
Boolean isalpha_bukva(wchar_t symb) {
	Boolean result = true;

	if (symb < 'A' || symb > 'Z' && symb < 'a' || symb > 'z' && symb < L'А' && symb != L'Ё' || symb > L'я' && symb != L'ё')
		result = false;
	return result;
}

//Проверка является ли символ цифрой
Boolean isdigit_ziphra(wchar_t symb) {
	Boolean result = true;

	if (symb < '0' || symb > '9')
		result = false;
	return result;
}

//Проверка ячейки (1, 3-5)
Boolean check_value(String^ value, Int16 mode) {
	Boolean good = true;

	switch (mode) {
		//Проверка ячейки 1
	case 0:
		for (Int16 i = 0; i < value->Length && good; i++)
			if (!isalpha_bukva(value[i]) && value[i] != ' ' || value[i] == ' ' && i == 0)
				good = false;
		break;
		//Проверка ячейки 3
	case 2:
		for (Int16 i = 0; i < value->Length && good; i++)
			if (!isdigit_ziphra(value[i]))
				good = false;
		break;
		//Проверка ячейки 4
	case 3:
		for (Int16 i = 0, p = 0; i < value->Length && good; i++) {
			if (value[i] == ',')
				p += 1;

			if (p != 1 && !isdigit_ziphra(value[i]) || p > 1 || p == 1 && value[i] == ',' && value->Length - i != 2 && value->Length - i != 3 && i > 0)
				good = false;
		}

		if (good && Convert::ToDouble(value) == 0)
			good = false;
		break;
		//Проверка ячейки 5
	case 4:
		for (Int16 i = 0; i < value->Length - 1 && good; i++)
			if (!isdigit_ziphra(value[i]))
				good = false;

		if (good && value[value->Length - 1] != '+' && !isdigit_ziphra(value[value->Length - 1]))
			good = false;

		if (good && value_format(value, 4) == "")
			good = false;
		break;
	default:
		good = false;
		break;
	}

	return good;
}

//Проверка ячейки (2)
Boolean check_value(String^ id, String^ name, Int64 row, DataGridView^ table) {
	Boolean good = true;

	if (id->Length != 6 || id[0] != name[0] && id[0] != name[0] - 32 && (id[0] != L'Ё' || id[0] != name[0] - 80) || id[1] != '-')
		good = false;

	for (Int16 i = 0; i < 4 && good; i++)
		if (!isdigit_ziphra(id[2 + i]))
			good = false;

	for (Int64 i = 0; i < table->Rows->Count && good; i++)
		if (table->Rows[i]->Cells[1]->Value != nullptr && table->Rows[i]->Cells[1]->Value->ToString() == id && i != row)
			good = false;

	return good;
}

//Форматирование значения ячейки
String^ value_format(String^ str, Int16 mode) {
	String^ value = "";

	//Для ячейки 4
	if (mode == 3) {
		value = Convert::ToString(Convert::ToDouble(str));
		if (value->Length > 2 && value[value->Length - 2] == ',')
			value += "0";
		else if (value->Length < 3 || value[value->Length - 3] != ',')
			value += ",00";
	}
	//Для ячейки 5
	else if (mode == 4) {
		if (str[str->Length - 1] == '+')
			for (Int16 i = 0; i < str->Length - 1; i++)
				value += str[i];
		else
			value = str;

		if (Convert::ToInt32(value) >= 0 && Convert::ToInt32(value) <= 100)
			value = Convert::ToString(Convert::ToInt32(value)) + "+";
		else
			value = "";
	}

	return value;
}