//
// Created by diedi on 03/05/2022.
//

#ifndef P06DIEGODIAZMORON_INCLUDE_AB_H_
#define P06DIEGODIAZMORON_INCLUDE_AB_H_

#include "NodeB.h"

template <typename Key>
class AB {
 public:
  virtual bool insert(const Key &k) = 0;
  virtual bool search(const Key &k) const = 0;
  void inorden() const;
  friend std::ostream &operator<<(std::ostream &os, const NodoB<Key> &nodo_b) {
    if (nodo_b == nullptr)
      os << "[.]";
    else
    {
      os << "[";
      os << nodo_b.root->getDato();
      os << "]";
    }
    return os;
  }
 protected:
  NodoB<Key> *root;
};

template<typename Key>
void AB<Key>::inorden() const {
}

#endif //P06DIEGODIAZMORON_INCLUDE_AB_H_
