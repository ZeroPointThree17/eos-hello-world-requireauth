#include <eoslib/string.hpp>
#include <eoslib/eos.hpp>

/* @abi action change
 * @abi table
*/
struct key_value {
   account_name from;
   eosio::string key;
   time value;
};
