#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "proxymodel.h"
#include "tablemodel.h"
#include <QTableView>
#include <QLineEdit>
#include <QStandardItemModel>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_pushButton_clicked();

    void on_lineEdit_textEdited(const QString &arg1);

private:
    Ui::MainWindow *ui;
    tablemodel *tableModel;
    ProxyModel *proxy;
    QStandardItemModel *model;
    void searchBooksByAuthor(const QString &author);
    void loadCsvData(const QString &filePath);
};

#endif // MAINWINDOW_H
