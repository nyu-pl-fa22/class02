struct Manager;              // Declaration
struct Employee {
  Manager* boss;
  Employee* next_employee;
};

struct Manager {             // Definition
  Employee* first_employee;
};


Manager* create() {
  Employee* e = new Employee();
  Manager* m = new Manager();

  e->boss = m;
  m->first_employee = e;

  return m;
}

int main() {
  Manager* m = create();

  delete(m->first_employee);
  delete(m);
  
  return 0;
}
