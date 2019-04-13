#pragma once
#ifndef __beast_atd__
#define __beast_atd__
// ��������� �������� ������ animal
#include "animal_atd.h"
namespace simple_animals {
	// ��������
	class beast : public animal {
		
		int eat; // ������ - 0 ���������� - 1 ������������� -2
	public:
		// �������������� ��������� ������
		void InData(ifstream &ifst);  // ����
		void Out(ofstream &ofst);
		void MultiMethod(animal *other, ofstream &ofst);
		void MMFish(ofstream &ofst);
		void MMBird(ofstream &ofst);
		void MMBeast(ofstream &ofst);// ����� 
		int LenghtName();
		beast() {} // �������� ��� �������������.
	};
} // end simple_animals namespace
#endif
