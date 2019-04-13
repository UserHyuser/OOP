
#pragma once
#ifndef __fish_atd__
#define __fish_atd__
// ��������� �������� ������ animal
#include "animal_atd.h"
namespace simple_animals {
	// ���
	class fish : public animal {
		int place; // ��� ����� ���� 0 - ����� 1 - ���� 2 - ����
	public:
		// �������������� ��������� ������
		void InData(ifstream &ifst);  // ����
		void Out(ofstream &ofst);     // ����� 
		int LenghtName();
		void MMFish(ofstream &ofst);
		void MMBird(ofstream &ofst);
		void MMBeast(ofstream &ofst);
		void MultiMethod(animal *other, ofstream &ofst);

    void OnlyFish(ofstream &ofst);
		fish() {} // �������� ��� �������������.
	};
} // end simple_animals namespace
#endif

