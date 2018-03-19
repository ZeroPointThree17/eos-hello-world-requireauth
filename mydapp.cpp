/**
 *  @file
 *  @copyright defined in eos/LICENSE.txt
 */
#include "mydapp.hpp"
#include "mydapp.gen.hpp"
#include <eoslib/db.hpp>

extern "C" {
   void init()  {

   }

   void apply( uint64_t code, uint64_t action ) {
      if( code == N(hellowrld3) ) {
         if( action == N(change) ) {
            
            auto kv1 = eosio::current_message<key_value>();
            eosio::require_auth( kv1.from );
            bytes b = eosio::raw::pack(kv1.value);
            uint32_t err = store_str( N(hellowrld3), N(keyvalue), (char *)kv1.key.get_data(), kv1.key.get_size(), (char*)b.data, b.len);

         } else {
            assert(0, "unknown message");
         }
      }
   }
}
