#include "Serialization.hpp"

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#include "Serialization.hpp"
#include <iostream>

int main(void)
{
    Data data = {10, 3.14f};

    uintptr_t u = serialize(&data);
    Data *d = deserialize(u);

    std::cout << "Original" << std::endl;
    std::cout << "X is ->" << data.x << std::endl;
    std::cout << "Y is ->" << data.y << std::endl;

    //メモリ
    std::cout << "=========================="<< std::endl;
    std::cout << "serialize result" << std::endl;
    std::cout << "serialize " << u << std::endl;

    std::cout << "=========================="<< std::endl;
    std::cout << "Deserialize data" << std::endl;
    std::cout << "X is ->" << d->x << std::endl;
    std::cout << "Y is ->" << d->y << std::endl;

    delete d;
    /* deserialize 関数は、動的に割り当てられたメモリを返すため、
    メモリリークを防ぐために、 delete 演算子を使用して d が指すメモリを解放しました。 */
    return 0;
}

/* デシリアライズ（deserialize）とは、シリアライズ（serialize）されたデータを元のオブジェクトに戻すことを指します。
シリアライズは、オブジェクトをバイト列などの形式に変換して永続化するプロセスであり、
データの交換やストレージへの保存に使用されます。
一方、デシリアライズは、シリアライズされたデータを読み取り、
元のオブジェクトに戻すプロセスであり、オブジェクトの復元やデータの復旧に使用されます。 */