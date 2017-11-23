#include <QtGui>
#include <QtWidgets>
using namespace std;

int main(int argc, char *argv[])
{
QApplication a(argc, argv);

    QWidget *widget = new QWidget;
        QPushButton *quitButton = new QPushButton("Quit");
        QPushButton *OpenButton = new QPushButton("Open Image");
        //QPushButton *aboutButton = new QPushButton("About QT");

        QVBoxLayout *buttonLayout = new QVBoxLayout;
        buttonLayout->addWidget(quitButton);
        buttonLayout->addWidget(OpenButton);
        //buttonLayout->addWidget(aboutButton);

        QObject::connect(quitButton,SIGNAL(clicked()),qApp,SLOT(quit()));
         //QObject::connect(OpenButton,SIGNAL(clicked()),qApp,SLOT(open();));
        //QObject::connect(aboutButton,SIGNAL(clicked()),qApp,SLOT(aboutQt()));


        QGraphicsScene scene;
        QGraphicsView view(&scene);
        QGraphicsPixmapItem item(QPixmap("/home/dev/Work/pt3/cubs.png"));
        scene.addItem(&item);


        view.setLayout(buttonLayout);
        widget->setWindowFlags(Qt::Window);
    //widget->show();

    view.show();
    return a.exec();
}
