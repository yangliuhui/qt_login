#include "login_widget.h"
#include <QApplication>
int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  login_widget w;
  w.show();

  return a.exec();
}
