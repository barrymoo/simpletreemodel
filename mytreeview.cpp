//
// Created by Barry E. Moore II on 8/8/16.
//

#include "mytreeview.h"
#include <QDebug>

MyTreeView::MyTreeView(QTreeView *parent)
  : QTreeView(parent)
{
  connect(this, SIGNAL(clicked(QModelIndex)), SLOT(onClick()));
}

void MyTreeView::onClick()
{
  qDebug() << "Here\n";
}