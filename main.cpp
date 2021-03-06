﻿#include "Storage_of_goods.h"
#include <iostream>

int main(){
    
	Storage_of_goods storage_of_goods;

	/*Добавляем товары*/
	storage_of_goods.pushGoods("1", "Sony", "Camera", 100);
	storage_of_goods.pushGoods("10", "Sony", "Camera", 100);
	storage_of_goods.pushGoods("2", "Samsung", "telephone", 200);
	storage_of_goods.pushGoods("3", "Nokia", "Telephone", 400);
	storage_of_goods.pushGoods("4", "Xiaomi", "Book", 100);
	storage_of_goods.pushGoods("5", "Sony", "Photo", 100);
	storage_of_goods.pushGoods("6", "Xiaomi", "Magazine", 800);
        /******************/

	/*Тест метода getGoodsArticul()*/
	std::cout << "TEST OF METHOD getGoodsArticul\n";
	Goods *goods = storage_of_goods.getGoodsArticul("10");
	//Если товара по артикулу не существует, то storage_of_goods.getGoodsArticul("10") вернет nullptr
	if (goods != nullptr) {
		std::cout << "Articul: " << goods->articul       << " Vendor: " << goods->vendor
			      << "\nName: "  << goods->name_of_goods << " price: "  << goods->price << std::endl << std::endl;
	}
	else {
		std::cout << "No existing good!\n\n";
	}
	
	/*******************************/

	/*Тест метода getGoodSet*/
	std::cout << "TEST OF METHOD getGoodSet\n";
	std::vector<Goods> v_goods = storage_of_goods.getGoodsSet("Sony");
	if (v_goods.size() == 0) {
		std::cout << "No existing goods for good set\n";
	}
	else {
		for (size_t i = 0; i < v_goods.size(); i++) {
			std::cout << "Articul: " << v_goods.at(i).articul << " Vendor: " << v_goods.at(i).vendor
				<< "\nName: " << v_goods.at(i).name_of_goods << " price: " << v_goods.at(i).price << std::endl;
		}
	}
	
	/************************/
	

}

