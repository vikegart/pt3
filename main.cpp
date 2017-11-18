#include <QtGui>
#include <QtWidgets>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication app(argc,argv);

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
    // QString url = R"(/home/dev/frog.png)";
   //  QPixmap img(url);
     //QLabel *label = new QLabel(this);
     //label->setPixmap(img);
    widget->setLayout(buttonLayout);
    widget->setWindowFlags(Qt::Window);
    widget->show();
    return app.exec();
}
