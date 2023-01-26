#pragma once

#include "sha1.h"
#include "HashTable.h"

class Chat {
public:
    Chat() {}
    Chat(HashTableClosed _ht) : ht(_ht) {}
    void reg(Login login, char* pass, int pass_length);
    bool login(Login login, char* pass, int pass_length);

private:
    HashTableClosed ht;
};
