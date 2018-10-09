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
	//Контейнер для хранения товаров.
	//Использую вектор, 
	//так как поиск постоянная О(1)
	//Вставка в конец амортизированная постоянная О(1)
	//Произвольный доступ О(1)
	std::vector<Goods> goods_storage;
public:
	//Добавление нового товара
	void pushGoods(std::string _articul, std::string _vendor, std::string _name_of_goods, int _price);
	
	/*Геттеры*/
	//Получить набор товаров по производителю
	std::vector<Goods> getGoodsSet( const std::string &_vendor);
	//Получить товар по артикулу
	Goods *getGoodsArticul(const std::string &_articul);
	/********/

	/*Конструкторы и деструкторы*/
	Storage_of_goods();
	~Storage_of_goods();
	/******************************/
};

