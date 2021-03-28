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
    QString CipherText = ui->cipher->toPlainText();

    QString PlainText, alpha[26];

    for (int i = 0; i < 26; i++ ) {
        alpha[i] = alphabet[i];
    }

    if (ui->ta->text() != "") alpha[0] = ui->ta->text();
    if (ui->tb->text() != "") alpha[1] = ui->tb->text();
    if (ui->tc->text() != "") alpha[2] = ui->tc->text();
    if (ui->td->text() != "") alpha[3] = ui->td->text();
    if (ui->te->text() != "") alpha[4] = ui->te->text();
    if (ui->tf->text() != "") alpha[5] = ui->tf->text();
    if (ui->tg->text() != "") alpha[6] = ui->tg->text();
    if (ui->th->text() != "") alpha[7] = ui->th->text();
    if (ui->ti->text() != "") alpha[8] = ui->ti->text();
    if (ui->tj->text() != "") alpha[9] = ui->tj->text();
    if (ui->tk->text() != "") alpha[10] = ui->tk->text();
    if (ui->tl->text() != "") alpha[11] = ui->tl->text();
    if (ui->tm->text() != "") alpha[12] = ui->tm->text();
    if (ui->tn->text() != "") alpha[13] = ui->tn->text();
    if (ui->to->text() != "") alpha[14] = ui->to->text();
    if (ui->tp->text() != "") alpha[15] = ui->tp->text();
    if (ui->tq->text() != "") alpha[16] = ui->tq->text();
    if (ui->tr->text() != "") alpha[17] = ui->tr->text();
    if (ui->ts->text() != "") alpha[18] = ui->ts->text();
    if (ui->tt->text() != "") alpha[19] = ui->tt->text();
    if (ui->tu->text() != "") alpha[20] = ui->tu->text();
    if (ui->tv->text() != "") alpha[21] = ui->tv->text();
    if (ui->tw->text() != "") alpha[22] = ui->tw->text();
    if (ui->tx->text() != "") alpha[23] = ui->tx->text();
    if (ui->ty->text() != "") alpha[24] = ui->ty->text();
    if (ui->tz->text() != "") alpha[25] = ui->tz->text();

    for (int i = 0; i < CipherText.size() ; i++ ) {
        if ('a' <= CipherText[i] && CipherText[i] <= 'z')
        {
            if(CipherText[i] == 'a') PlainText.append(alpha[0]);
            else if(CipherText[i] == 'b') PlainText.append(alpha[1]);
            else if(CipherText[i] == 'c') PlainText.append(alpha[2]);
            else if(CipherText[i] == 'd') PlainText.append(alpha[3]);
            else if(CipherText[i] == 'e') PlainText.append(alpha[4]);
            else if(CipherText[i] == 'f') PlainText.append(alpha[5]);
            else if(CipherText[i] == 'g') PlainText.append(alpha[6]);
            else if(CipherText[i] == 'h') PlainText.append(alpha[7]);
            else if(CipherText[i] == 'i') PlainText.append(alpha[8]);
            else if(CipherText[i] == 'j') PlainText.append(alpha[9]);
            else if(CipherText[i] == 'k') PlainText.append(alpha[10]);
            else if(CipherText[i] == 'l') PlainText.append(alpha[11]);
            else if(CipherText[i] == 'm') PlainText.append(alpha[12]);
            else if(CipherText[i] == 'n') PlainText.append(alpha[13]);
            else if(CipherText[i] == 'o') PlainText.append(alpha[14]);
            else if(CipherText[i] == 'p') PlainText.append(alpha[15]);
            else if(CipherText[i] == 'q') PlainText.append(alpha[16]);
            else if(CipherText[i] == 'r') PlainText.append(alpha[17]);
            else if(CipherText[i] == 's') PlainText.append(alpha[18]);
            else if(CipherText[i] == 't') PlainText.append(alpha[19]);
            else if(CipherText[i] == 'u') PlainText.append(alpha[20]);
            else if(CipherText[i] == 'v') PlainText.append(alpha[21]);
            else if(CipherText[i] == 'w') PlainText.append(alpha[22]);
            else if(CipherText[i] == 'x') PlainText.append(alpha[23]);
            else if(CipherText[i] == 'y') PlainText.append(alpha[24]);
            else if(CipherText[i] == 'z') PlainText.append(alpha[25]);
        }
        else PlainText.append(CipherText[i]);
    }

    ui->plain->setText(PlainText);
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

void Widget::on_btnInfo_clicked()
{
    QMessageBox::information(this, tr("  Phoenix Legion"), tr("Copyright - Phoenix Legion. \t\n\n[NT219.L21.ANTT] Letter Frequency Attack.\t\n"), QMessageBox::Ok);
}

