#ifndef LOGIN_WIDGET_H
#define LOGIN_WIDGET_H

#include <QMouseEvent>
#include <QWidget>
namespace Ui {
class login_widget;
}

class login_widget : public QWidget {
  Q_OBJECT

public:
  explicit login_widget(QWidget *parent = 0);
  ~login_widget();

protected:
  void mousePressEvent(QMouseEvent *e);
  void mouseMoveEvent(QMouseEvent *e);
  void mouseReleaseEvent(QMouseEvent *e);

private:
  Ui::login_widget *ui;
  QPoint last; // 鼠标位置坐标
};

#endif // LOGIN_WIDGET_H
