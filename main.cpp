#include "View/MainWindow.h"
#include "View/ViewConstants.h"
#include <QApplication>
#include <qobject.h>

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);

  View::MainWindow mainWindow(View::ViewConstants::windowWidth,
                              View::ViewConstants::windowHeight);

  mainWindow.show();
  return app.exec();
}
