#include "login_widget.h"
#include "ui_login_widget.h"
#include <QDesktopWidget>
#include <QPainter>
login_widget::login_widget(QWidget *parent)
    : QWidget(parent), ui(new Ui::login_widget) {
  ui->setupUi(this);
  // 隐藏标题栏
  this->setWindowFlags(Qt::FramelessWindowHint);
  this->setAttribute(Qt::WA_TranslucentBackground, true);

  connect(ui->btn_close, &QPushButton::clicked, this, &login_widget::close);

  // 居中显示
  QDesktopWidget *pDesk = QApplication::desktop();
  this->move((pDesk->width() - this->width()) / 2,
             (pDesk->height() - this->height()) / 2);
}

login_widget::~login_widget() { delete ui; }
void login_widget::mousePressEvent(QMouseEvent *e) { last = e->globalPos(); }

void login_widget::mouseMoveEvent(QMouseEvent *e) {
  int dx = e->globalX() - last.x();
  int dy = e->globalY() - last.y();
  last = e->globalPos();
  move(x() + dx, y() + dy);
}
void login_widget::mouseReleaseEvent(QMouseEvent *e) {
  int dx = e->globalX() - last.x();
  int dy = e->globalY() - last.y();
  move(x() + dx, y() + dy);
}
