#include <eoslib/string.hpp>
#include <eoslib/eos.hpp>

/* @abi action change
*/
struct key_value {
   account_name from;
   eosio::string key;
   time value;
};

/*
 * @abi table
*/
struct to_db {
   eosio::string key;
   time value;
};
