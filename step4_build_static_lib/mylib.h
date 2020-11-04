#ifndef MYLIB_H
#define MYLIB_H

class A {
public:
    A(int a);
    int GetA() const { return a_; }
private:
    int a_;
};

int ProcessA(const A& a);

#endif //MYLIB_H
