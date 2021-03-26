#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtAlgorithms>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

struct Characters
{
    QString character;
    int number;
};

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    Characters a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,x,y,z,w;
    QList<Characters> analystic = {a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z};
    QStringList alphabet = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};


private slots:
    void on_btnClose_clicked();

    void on_cipher_textChanged();

    void on_btnReplace_clicked();

    void on_btnMinimize_clicked();

    void on_btnClear_clicked();

private:
    Ui::Widget *ui;

};
#endif // WIDGET_H
