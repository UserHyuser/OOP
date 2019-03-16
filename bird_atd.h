#pragma once
#ifndef __bird_atd__
#define __bird_atd__
// ��������� �������� ������ animal
#include "animal_atd.h"
namespace simple_animals {
	// ��������������
	class bird : public animal {
		char name[20];
		int fly; // ���������� �� ����� 0 - ��� 1 - ��
		int age = 0; //�������
	public:
		// �������������� ��������� ������
		void InData(ifstream &ifst);  // ����
		void Out(ofstream &ofst);    // ����� 
		bird() {} // �������� ��� �������������.
	};
} // end simple_animals namespace
#endif