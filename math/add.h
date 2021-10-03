//
// Created by wrightchen on 2021/9/24.
//

#ifndef CLIONCREATE_ADD_H
#define CLIONCREATE_ADD_H

int Add(int t1, int t2);

class OrgClass {
 public:
  OrgClass() {}
  virtual int add(int t1, int t2) { return t1 + t2; }
};

class App {
 public:
  int addx2(int t1, int t2) { return o_->add(t1, t2) * 2; }

  OrgClass *o_;
};

#endif  // CLIONCREATE_ADD_H
