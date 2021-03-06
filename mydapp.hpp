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
struct dbname {
   eosio::string key;
   time value;
};
