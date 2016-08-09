#include "treemodel.h"
#include "mytreeview.h"

#include <QApplication>
#include <QFile>


int main(int argc, char *argv[])
{
  Q_INIT_RESOURCE(simpletreemodel);

  QApplication app(argc, argv);

  QFile file(":/default.txt");
  file.open(QIODevice::ReadOnly);
  TreeModel model(file.readAll());
  file.close();

  MyTreeView *treeView = new MyTreeView();
  treeView->setModel(&model);
  treeView->setWindowTitle(QObject::tr("Molecules"));
  treeView->show();

//  QTreeView *view = new QTreeView();
//  view->setModel(&model);
//  view->setWindowTitle(QObject::tr("Simple Tree Model"));
//  view->show();
  return app.exec();
}