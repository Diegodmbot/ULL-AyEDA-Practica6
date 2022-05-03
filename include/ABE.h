//
// Created by diedi on 03/05/2022.
//

#ifndef P06DIEGODIAZMORON_INCLUDE_ABE_H_
#define P06DIEGODIAZMORON_INCLUDE_ABE_H_

#include "AB.h"

template <class Key>
class ABE : public AB<Key> {
  bool insert(const Key &k);
  bool search(const Key &k) const;
};

template<class Key>
bool ABE<Key>::insert(const Key &k) {
  return false;
}

template<class Key>
bool ABE<Key>::search(const Key &k) const{
  return false;
}
#endif //P06DIEGODIAZMORON_INCLUDE_ABE_H_
// TODO: no insertar valores repetidos
