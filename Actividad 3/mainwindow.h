#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_textEdit_4_copyAvailable(bool b);

    void on_textEdit_3_copyAvailable(bool b);

    void on_textEdit_2_copyAvailable(bool b);

    void on_textBrowser_2_anchorClicked(const QUrl &arg1);

    void on_textBrowser_3_anchorClicked(const QUrl &arg1);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
