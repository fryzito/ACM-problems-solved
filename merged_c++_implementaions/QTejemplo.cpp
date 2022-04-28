#include <iostream>
#include <QApplication>
#include <QMainWindow>
#include <QLabel>
int main(int argc, char **argv) {
	int ret;
	QApplication app(argc,argv);
	QMainWindow *mainWindow = new QMainWindow();
	QLabel *lbl = new QLabel(QString("!Hola Mundo!",mainWindow);
	mainWindow->show();
	ret = app.exec();

	delete(mainWindow);
	delete(lbl);
	return ret;
}
