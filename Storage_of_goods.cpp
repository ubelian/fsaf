#include "Storage_of_goods.h"

//Добавление нового товара
void Storage_of_goods::pushGoods(std::string _articul, std::string _vendor, std::string _name_of_goods, int _price) {
	Goods newGoods = {};
	newGoods.articul = _articul;
	newGoods.vendor = _vendor;
	newGoods.name_of_goods = _name_of_goods;
	newGoods.price = _price;
	goods_storage.push_back(newGoods);
}
//Получить товар по артикулу
Goods *Storage_of_goods::getGoodsArticul(const std::string &_articul) {
	//Поиск в контейнере товара по артикулу. В случае успеха вернуть указатель на Goods
	for (size_t i = 0; i < goods_storage.size(); i++) {
		if (goods_storage.at(i).articul == _articul)
			return &goods_storage.at(i);
	}
	//Если требуемого товара нет, вернуть nullptr
	return nullptr;
}
//Получить набор товаров по производителю
//Если в контейнере нет товаров, то контейнер вернется пустым
std::vector<Goods> Storage_of_goods::getGoodsSet(const std::string &_vendor) {
	//Поиск в контейнере товаров по производителю(vendor)
	std::vector<Goods> returnedVector;
	for (size_t i = 0; i < goods_storage.size(); i++) {
		if (goods_storage.at(i).vendor == _vendor) {
			returnedVector.push_back(goods_storage.at(i));
		}
	}
	return returnedVector;
}

/*Конструкторы и деструкторы по умолчанию*/
Storage_of_goods::Storage_of_goods(){
	
}
Storage_of_goods::~Storage_of_goods(){
}
/*****************************************/
