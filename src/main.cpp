#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>

int main(int argc, char *argv[]) 
{
    // Create the application
    QApplication app(argc, argv);

    // Create main window
    QWidget window;
    window.setWindowTitle("Qt Demo Application");
    window.resize(300, 200);

    // Create a vertical layout
    QVBoxLayout *layout = new QVBoxLayout();

    // Add a label
    QLabel *label = new QLabel("Hello, Qt!");
    layout->addWidget(label);

    // Add a button
    QPushButton *button = new QPushButton("Click Me!");
    layout->addWidget(button);

    // So everything stack to up
    //layout->addStretch();
    layout->setAlignment(Qt::AlignTop);

    // Connect button click to close the application
    QObject::connect(button, &QPushButton::clicked, &app, &QApplication::quit);

    // Set the layout
    window.setLayout(layout);

    // Show the window
    window.show();

    // Run the application event loop
    return app.exec();
}
