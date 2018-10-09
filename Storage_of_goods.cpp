#include "Storage_of_goods.h"

//���������� ������ ������
void Storage_of_goods::pushGoods(std::string _articul, std::string _vendor, std::string _name_of_goods, int _price) {
	Goods newGoods = {};
	newGoods.articul = _articul;
	newGoods.vendor = _vendor;
	newGoods.name_of_goods = _name_of_goods;
	newGoods.price = _price;
	goods_storage.push_back(newGoods);
}
//�������� ����� �� ��������
Goods *Storage_of_goods::getGoodsArticul(const std::string &_articul) {
	//����� � ���������� ������ �� ��������. � ������ ������ ������� ��������� �� Goods
	for (size_t i = 0; i < goods_storage.size(); i++) {
		if (goods_storage.at(i).articul == _articul)
			return &goods_storage.at(i);
	}
	//���� ���������� ������ ���, ������� nullptr
	return nullptr;
}
//�������� ����� ������� �� �������������
//���� � ���������� ��� �������, �� ��������� �������� ������
std::vector<Goods> Storage_of_goods::getGoodsSet(const std::string &_vendor) {
	//����� � ���������� ������� �� �������������(vendor)
	std::vector<Goods> returnedVector;
	for (size_t i = 0; i < goods_storage.size(); i++) {
		if (goods_storage.at(i).vendor == _vendor) {
			returnedVector.push_back(goods_storage.at(i));
		}
	}
	return returnedVector;
}

/*������������ � ����������� �� ���������*/
Storage_of_goods::Storage_of_goods(){
	
}
Storage_of_goods::~Storage_of_goods(){
}
/*****************************************/
