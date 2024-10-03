#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>
#include <QMainWindow>
#include <QMessageBox>
#include <iostream>

int main(int argc, char* argv[]) {
    QApplication a(argc, argv);

    // Tạo một cửa sổ chính
    QMainWindow* mainWindow = new QMainWindow();
    QWidget* centralWidget = new QWidget(mainWindow);
    mainWindow->setCentralWidget(centralWidget);
    QVBoxLayout* layout = new QVBoxLayout(centralWidget);

    // Thêm một nút vào cửa sổ chính
    QPushButton* button = new QPushButton("Click Me!", centralWidget);
    layout->addWidget(button);

    // Khi nút được nhấn, hiển thị một thông báo
    QObject::connect(button, &QPushButton::clicked, [&]() {
        std::cout << "Vl" << std::endl;
         QMessageBox::information(mainWindow, "Message", "Button clicked!");
        });

    mainWindow->show();
    return a.exec();
}