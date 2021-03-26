#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnClose_clicked()
{
    close();
}

void Widget::on_cipher_textChanged()
{
    QString cipherText = ui->cipher->toPlainText();

    for (int i = 0; i < alphabet.size(); i++) {
        analystic[i].character = alphabet.at(i);
        analystic[i].number = cipherText.count(alphabet.at(i),Qt::CaseInsensitive);
    }

    for (int i = 0; i < analystic.size(); i++)
    {
        for (int j = i+1; j < analystic.size(); j++) {
            if (analystic[i].number < analystic[j].number)
                analystic.swapItemsAt(i,j);
        }
    }

    ui->la->setText(analystic[0].character + " = " + QString::number(analystic[0].number) + " chars");
    ui->lb->setText(analystic[1].character + " = " + QString::number(analystic[1].number) + " chars");
    ui->lc->setText(analystic[2].character + " = " + QString::number(analystic[2].number) + " chars");
    ui->ld->setText(analystic[3].character + " = " + QString::number(analystic[3].number) + " chars");
    ui->le->setText(analystic[4].character + " = " + QString::number(analystic[4].number) + " chars");
    ui->lf->setText(analystic[5].character + " = " + QString::number(analystic[5].number) + " chars");
    ui->lg->setText(analystic[6].character + " = " + QString::number(analystic[6].number) + " chars");
    ui->lh->setText(analystic[7].character + " = " + QString::number(analystic[7].number) + " chars");
    ui->li->setText(analystic[8].character + " = " + QString::number(analystic[8].number) + " chars");
    ui->lj->setText(analystic[9].character + " = " + QString::number(analystic[9].number) + " chars");
    ui->lk->setText(analystic[10].character + " = " + QString::number(analystic[10].number) + " chars");
    ui->ll->setText(analystic[11].character + " = " + QString::number(analystic[11].number) + " chars");
    ui->lm->setText(analystic[12].character + " = " + QString::number(analystic[12].number) + " chars");
    ui->ln->setText(analystic[13].character + " = " + QString::number(analystic[13].number) + " chars");
    ui->lo->setText(analystic[14].character + " = " + QString::number(analystic[14].number) + " chars");
    ui->lp->setText(analystic[15].character + " = " + QString::number(analystic[15].number) + " chars");
    ui->lq->setText(analystic[16].character + " = " + QString::number(analystic[16].number) + " chars");
    ui->lr->setText(analystic[17].character + " = " + QString::number(analystic[17].number) + " chars");
    ui->ls->setText(analystic[18].character + " = " + QString::number(analystic[18].number) + " chars");
    ui->lt->setText(analystic[19].character + " = " + QString::number(analystic[19].number) + " chars");
    ui->lu->setText(analystic[20].character + " = " + QString::number(analystic[20].number) + " chars");
    ui->lv->setText(analystic[21].character + " = " + QString::number(analystic[21].number) + " chars");
    ui->lw->setText(analystic[22].character + " = " + QString::number(analystic[22].number) + " chars");
    ui->lx->setText(analystic[23].character + " = " + QString::number(analystic[23].number) + " chars");
    ui->ly->setText(analystic[24].character + " = " + QString::number(analystic[24].number) + " chars");
    ui->lz->setText(analystic[25].character + " = " + QString::number(analystic[25].number) + " chars");

    ui->plain->clear();
}

void Widget::on_btnReplace_clicked()
{
    QString cipherText = ui->cipher->toPlainText();

    if(ui->ta->text() != "") cipherText.replace("a", ui->ta->text(), Qt::CaseInsensitive);
    if(ui->tb->text() != "") cipherText.replace("b", ui->tb->text(), Qt::CaseInsensitive);
    if(ui->tc->text() != "") cipherText.replace("c", ui->tc->text(), Qt::CaseInsensitive);
    if(ui->td->text() != "") cipherText.replace("d", ui->td->text(), Qt::CaseInsensitive);
    if(ui->te->text() != "") cipherText.replace("e", ui->te->text(), Qt::CaseInsensitive);
    if(ui->tf->text() != "") cipherText.replace("f", ui->tf->text(), Qt::CaseInsensitive);
    if(ui->tg->text() != "") cipherText.replace("g", ui->tg->text(), Qt::CaseInsensitive);
    if(ui->th->text() != "") cipherText.replace("h", ui->th->text(), Qt::CaseInsensitive);
    if(ui->ti->text() != "") cipherText.replace("i", ui->ti->text(), Qt::CaseInsensitive);
    if(ui->tj->text() != "") cipherText.replace("j", ui->tj->text(), Qt::CaseInsensitive);
    if(ui->tk->text() != "") cipherText.replace("k", ui->tk->text(), Qt::CaseInsensitive);
    if(ui->tl->text() != "") cipherText.replace("l", ui->tl->text(), Qt::CaseInsensitive);
    if(ui->tm->text() != "") cipherText.replace("m", ui->tm->text(), Qt::CaseInsensitive);
    if(ui->tn->text() != "") cipherText.replace("n", ui->tn->text(), Qt::CaseInsensitive);
    if(ui->to->text() != "") cipherText.replace("o", ui->to->text(), Qt::CaseInsensitive);
    if(ui->tp->text() != "") cipherText.replace("p", ui->tp->text(), Qt::CaseInsensitive);
    if(ui->tq->text() != "") cipherText.replace("q", ui->tq->text(), Qt::CaseInsensitive);
    if(ui->tr->text() != "") cipherText.replace("r", ui->tr->text(), Qt::CaseInsensitive);
    if(ui->ts->text() != "") cipherText.replace("s", ui->ts->text(), Qt::CaseInsensitive);
    if(ui->tt->text() != "") cipherText.replace("t", ui->tt->text(), Qt::CaseInsensitive);
    if(ui->tu->text() != "") cipherText.replace("u", ui->tu->text(), Qt::CaseInsensitive);
    if(ui->tv->text() != "") cipherText.replace("v", ui->tv->text(), Qt::CaseInsensitive);
    if(ui->tw->text() != "") cipherText.replace("w", ui->tw->text(), Qt::CaseInsensitive);
    if(ui->tx->text() != "") cipherText.replace("x", ui->tx->text(), Qt::CaseInsensitive);
    if(ui->ty->text() != "") cipherText.replace("y", ui->ty->text(), Qt::CaseInsensitive);
    if(ui->tz->text() != "") cipherText.replace("z", ui->tz->text(), Qt::CaseInsensitive);

    ui->plain->setText(cipherText);

}

void Widget::on_btnMinimize_clicked()
{
    setWindowState(Qt::WindowMinimized);
}

void Widget::on_btnClear_clicked()
{
    ui->plain->clear();

    ui->ta->clear();
    ui->tb->clear();
    ui->tc->clear();
    ui->td->clear();
    ui->te->clear();
    ui->tf->clear();
    ui->tg->clear();
    ui->th->clear();
    ui->ti->clear();
    ui->tj->clear();
    ui->tk->clear();
    ui->tl->clear();
    ui->tm->clear();
    ui->tn->clear();
    ui->to->clear();
    ui->tp->clear();
    ui->tq->clear();
    ui->tr->clear();
    ui->ts->clear();
    ui->tt->clear();
    ui->tu->clear();
    ui->tv->clear();
    ui->tw->clear();
    ui->tx->clear();
    ui->ty->clear();
    ui->tz->clear();
}
