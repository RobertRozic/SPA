#include <iostream>
#include <stdio.h>

using namespace std;

struct Person {
  string name;
  int age;
  
  Person(string name, int age) {
      this->name = name;
      this->age = age;
  }
  
  Person* next;
};


struct lista {
    Person* first;
    
    lista() {
        // Prazan konstruktor
    }
    
    void print() {
        int counter = 0;
        
        if (this->isEmpty())
            return;
            
        Person* iterator = this->first;
        
        do {
            cout << counter << " | " << iterator->name << endl;
            iterator = iterator->next;
            counter++;
        } while (iterator != NULL);
    }
    
    int count() {
        int counter = 0;
        
        Person* iterator = this->first;
        
        if (iterator == NULL)
            return 0;
            
        do {
            iterator = iterator->next;
            counter++;
        } while (iterator != NULL);
        
        return counter;
    }
    
    bool isEmpty() {
        return this->count() == 0;
    }
    
    Person* last() {
        Person* iterator;
        
        if (this->isEmpty())
            return NULL;
        
        iterator = this->first;
        
        while(iterator->next != NULL) {
            iterator = iterator->next;
        };
        
        return iterator;
    }
    
    void addToStart(Person* nova) {
        if (this->first == NULL) {
            this->first = nova;
            return;
        }
        
        nova->next = this->first;
        this->first = nova;
    }
    
    void addToEnd(Person* nova) {
        Person* zadnja = this->last();
        
        if (zadnja == NULL) {
            this->addToStart(nova);
            return;
        }
        
        zadnja->next = nova;
        nova->next = NULL;
    }
    
  Person* get(int position) {
    if (position < 0 || position > this->count())
      return NULL;

    Person* iterator = this->first;

    int counter = 0;
    while (counter++ < position) {
      iterator = iterator->next;
    }

    return iterator;
  }

  void remove(int position) {
      Person* previous = this->get(position-1);
      Person* to_remove = this->get(position);

      if (previous == NULL) {
        this->first = to_remove->next;
      } else {
        previous->next = to_remove->next;
      }
      
      delete to_remove;
  }

  void insert(Person* new_person, int position) {
      Person* previous = this->get(position - 1);
      
      if (position == 0) {
          this->addToStart(new_person);
          return;
      }
      
      if (position == -1) {
          this->addToEnd(new_person);
          return;
      }
      
      // Novi pokazuje na ono sto je pokazivao prethodni
      new_person->next = previous->next;
      // Prethodni pokazuje na novi
      previous->next = new_person;
  }
};


int main()
{
    Person* p1 = new Person("Ivan", 20);
    Person* p2 = new Person("Ana", 21);
    Person* p3 = new Person("Marko", 20);
    
    p1->next = p2;
    p2->next = p3;
    
    /*
    cout << "Ime prve osobe " << p1->name << endl;
    cout << "Ime druge osobe " << p1->next->name << endl;
    
    if (p1->next->next == NULL) {
        cout << "Null pointer" << endl;
    }
    */
    
    // Definiranje prazne liste
    lista* persons = new lista();
    
    //persons->first = p1;
    
    // Ispis
    persons->print();
    
    // counter
    cout << "Broj elemenata: " << persons->count() << endl;
    
    // Provjera je li prazna
    if (persons->isEmpty()) {
        cout << "Lista je prazna." << endl;
    } else {
        cout << "Lista nije prazna." << endl;
    }
    
    Person* zadnji = persons->last();
    
    if (zadnji) {
       cout << "Zadnji je: " << zadnji->name << endl; 
    }
    
    Person* p4 = new Person("Ivana", 23);
    persons->addToStart(p4);
    persons->print();
    
    cout << "Broj elemenata: " << persons->count() << endl;
    
    Person* p5 = new Person("Pero", 19);
    persons->addToStart(p5);
    persons->addToStart(p1);
    persons->addToStart(p2);
    persons->addToStart(p3);
    persons->print();
    cout << "Broj elemenata: " << persons->count() << endl;
    
    persons->remove(4);
    
    cout << "Nakon brisanja" << endl;
    persons->print();
    cout << "---------" << endl;
    
    Person* p6 = new Person("Ivana", 19);
    persons->insert(p6, -1);
    
    persons->print();
    
    return 0;
}
