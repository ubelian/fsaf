#pragma once
#include <string>
#include <vector>

struct Goods{
	std::string articul = "";
	std::string vendor = "";
	std::string name_of_goods = "";
	int price = 0;
};

class Storage_of_goods{
private:
	//��������� ��� �������� �������.
	//��������� ������, 
	//��� ��� ����� ���������� �(1)
	//������� � ����� ���������������� ���������� �(1)
	//������������ ������ �(1)
	std::vector<Goods> goods_storage;
public:
	//���������� ������ ������
	void pushGoods(std::string _articul, std::string _vendor, std::string _name_of_goods, int _price);
	
	/*�������*/
	//�������� ����� ������� �� �������������
	std::vector<Goods> getGoodsSet( const std::string &_vendor);
	//�������� ����� �� ��������
	Goods *getGoodsArticul(const std::string &_articul);
	/********/

	/*������������ � �����������*/
	Storage_of_goods();
	~Storage_of_goods();
	/******************************/
};

