#include "newproj.h"
#include "./ui_newproj.h"
#include <QPixmap>

newproj::newproj(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::newproj)
{
    ui->setupUi(this);
}

newproj::~newproj()
{
    delete ui;
}
void newproj::setname(const QString &n){

}
void newproj::page(const QString &n){
    if(ui->label_2->text() == "13"){
        TEXT = "Matts General Store Independence, Missouri \n";
        if(n == "1"){
            ui->label->setText(TEXT + "There are 2 oxen in a yoke; I reccomend at least \n 3 yoke. I charge 40$ a yoke. \n \n How many yokes do you want? ");
            ui->label_2->setText("12");
            OX = "0";
            return;
        }
        if(n == "2"){
            ui->label->setText(TEXT + "I recommend you take at least 200 poundds of food for\n each persoon in your family. I see that \n you have 5 people in all. You'll need flour, sugar, \n bacon, and coffee. My price is 20 cents a pound.\n \n How many pound of food do you want? ");
            ui->label_2->setText("12");
            FOOD = "0";
            return;
        }
        if(n == "3"){
            ui->label->setText(TEXT + "You'll need warm clothing in mountains. I \n recommend taking at least 2 sets of \n cloths per person. Each set is $10.00 \n \n How many sets of clothes do you want? ");
            ui->label_2->setText("12");
            CLOTH = "0";
            return;
        }
        if(n == "4"){
            ui->label->setText(TEXT + "I sell ammunition in boxes of 20 bullets. Each \n box cost $2.00. How many boxes do you want? ");
            ui->label_2->setText("12");
            AMMO = "0";
            return;
        }
        if(n == "5"){
            ui->label->setText(TEXT + "Its a good idea to have a few spare parts \n for your wagon. Here are the prices: \n wagon wheel - $10 each \n wagon axle - $10 each \n wagon tongue - $10 each \n How many wagon wheels? ");
            ui->label_2->setText("12");
            PART = "0";
            return;
        }
        else{
            ui->label->setText("Well then, you're ready to start. Good luck! \n You have a long and difficult journey \n ahead of you.");
            ui->label_2->setText("14");
            return;
        }
    }
    if(ui->label_2->text() == "12"){
        if(OX == "0"){
            OX = QString::number(40*n.toInt());
            BILL = QString::number(OX.toInt()+BILL.toInt());
        }
        if(FOOD == "0"){
            FOOD = QString::number(0.20*n.toInt());
            BILL = QString::number(FOOD.toInt()+BILL.toInt());
        }
        if(CLOTH == "0"){
            CLOTH = QString::number(10.00*n.toInt());
            BILL = QString::number(CLOTH.toInt()+BILL.toInt());
        }
        if(AMMO == "0"){
            AMMO = QString::number(2*n.toInt());
            BILL = QString::number(AMMO.toInt()+BILL.toInt());
        }
        if(PART == "0"){
            PART = QString::number(10*n.toInt());
            BILL = QString::number(PART.toInt()+BILL.toInt());
        }
        TEXT = "Matts General Store Independence, Missouri \n " + MONTH + " 1, 1848 \n1. Oxen\t\t$" + OX + "\n2. Food\t\t$" + FOOD + "\n3. Clothing\t$" + CLOTH + "\n4. Ammunition\t$" + AMMO + "\n5. Spare parts\t$" + PART + "\n            total bill: " + BILL + "\n \n Amount you have: $" + MONEY + " Which item would you like to buy? ";
        ui->label->setText(TEXT);
        ui->label_2->setText("13");
        return;
    }
    if(ui->label_2->text() == "11"){
        ui->label->setText(TEXT +  "\n -plenty of food for your trip \n -ammuntition for your rifles \n -spare parts for your wagon ");
        ui->label_2->setText("12");
        return;
    }
    if(ui->label_2->text() == "10"){
        QPixmap pix("C:/Users/peter/Pictures/Screenshots/matt.png");
        int w = ui->label_3->width();
        int h = ui->label_3->height();
        ui->label_3->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
        TEXT = "Hello, I'm Matt. So you're going to \n Oregon.I can fix you up with what you need: ";
        ui->label->setText(TEXT + "\n -a team of oxen to pull your wagon \n - clothing for both summer and winter ");
        ui->label_2->setText("11");
        return;
    }
    if (ui->label_2->text() == "9"){
        TEXT = "Before leaving for independence you need to stock up on \n supplies, you  have " + MONEY + " in  cash, but you \n dont have to spend it now you can buy whatever you need \n at Matts General Store";
        if(n == "1"){
            MONTH = "March";
            ui->label->setText(TEXT);
            ui->label_2->setText("10");
            return;
        }
        if(n == "2"){
            MONTH = "April";
            ui->label->setText(TEXT);
            ui->label_2->setText("10");
            return;
        }
        if(n == "3"){
            MONTH = "May";
            ui->label->setText(TEXT);
            ui->label_2->setText("10");
            return;
        }
        if(n == "4"){
            MONTH = "June";
            ui->label->setText(TEXT);
            ui->label_2->setText("10");
            return;
        }
        if(n == "5"){
            MONTH = "July";
            ui->label->setText(TEXT);
            ui->label_2->setText("10");
            return;
        }
        if(n == "6"){
            ui->label->setText("You attend a public meeting held for folks with \n the California Oregon fever. Your told: \n \n If you leave too early, there won't be any grass\n for your oxen to eat. If you leave too \n late, you may not get to Oregon befor winter \n comes. If you leave at just the right time, \n there will be green grass and the weather will still be cool.");
            ui->label_2->setText("7");
            return;
        }
    }
    if (ui->label_2->text() == "8"){
        if(NAME1 == " "){
            NAME1 = n;
            ui->label->setText("What are the name of the \n other four party members\n1. " + NAME1 + "\n2. " + NAME2+ "\n3. " + NAME3 + "\n4. " + NAME3 + "\n5. " + NAME5 + "\n Are these names correct?");
            ui->label_2->setText("7");
            return;
        }if(NAME2 == " "){
            NAME2 = n;
            ui->label->setText("What are the name of the \n other four party members\n1. " + NAME1 + "\n2. " + NAME2 + "\n3. " + NAME3 + "\n4. " + NAME3 + "\n5. " + NAME5 + "\n Are these names correct?");
            ui->label_2->setText("7");
            return;
        }if(NAME3 == " "){
            NAME3 = n;
            ui->label->setText("What are the name of the \n other four party members\n1. " + NAME1 + "\n2. " + NAME2 + "\n3. " + NAME3 + "\n4. " + NAME3 + "\n5. " + NAME5 + "\n Are these names correct?");
            ui->label_2->setText("7");
            return;
        }if(NAME4 == " "){
            NAME4 = n;
            ui->label->setText("What are the name of the \n other four party members\n1. " + NAME1 + "\n2. " + NAME2 + "\n3. " + NAME3 + "\n4. " + NAME3 + "\n5. " + NAME5 + "\n Are these names correct?");
            ui->label_2->setText("7");
            return;
        }if(NAME5 == " "){
            NAME5 = n;
            ui->label->setText("What are the name of the \n other four party members\n1. " + NAME1 + "\n2. " + NAME2 + "\n3. " + NAME3 + "\n4. " + NAME3 + "\n5. " + NAME5 + "\n Are these names correct?");
            ui->label_2->setText("7");
            return;
        }
    }
    if (ui->label_2->text() == "7"){
        if(n == "yes" || n == "6"){
            ui->label->setText("It is 1848. Your jumping off place is oregan \n is independence, missouri. You must decide which month to leave \n 1. March \n 2. April \n 3. May \n 4. June \n 5. July \n 6. Ask for advice \n What is your choice? ");
            ui->label_2->setText("9");
            return;
        }
        if(n == "no"){
            ui->label->setText(TEXT + "\n change which names?");
            return;
        }
        if(n == "1"){
            NAME1 = " ";
            TEXT = "What are the name of the \n other four party members\n1. " + NAME1 + "\n2. " + NAME2+ "\n3. " + NAME3 + "\n4. " + NAME4 + "\n5. " + NAME5 + "\n Are these names correct?";
            ui->label->setText(TEXT);
            ui->label_2->setText("8");
            return;
        }if(n == "2"){
            NAME2 = " ";
            TEXT = "What are the name of the \n other four party members\n1. " + NAME1 + "\n2. " + NAME2+ "\n3. " + NAME3 + "\n4. " + NAME4 + "\n5. " + NAME5 + "\n Are these names correct?";
            ui->label->setText(TEXT);
            ui->label_2->setText("8");
            return;
        }if(n == "3"){
            NAME3 = " ";
            TEXT = "What are the name of the \n other four party members\n1. " + NAME1 + "\n2. " + NAME2+ "\n3. " + NAME3 + "\n4. " + NAME4 + "\n5. " + NAME5 + "\n Are these names correct?";
            ui->label->setText(TEXT);
            ui->label_2->setText("8");
            return;
        }if(n == "4"){
            NAME4 = " ";
            TEXT = "What are the name of the \n other four party members\n1. " + NAME1 + "\n2. " + NAME2+ "\n3. " + NAME3 + "\n4. " + NAME4 + "\n5. " + NAME5 + "\n Are these names correct?";
            ui->label->setText(TEXT);
            ui->label_2->setText("8");
            return;
        }if(n == "5"){
            NAME5 = " ";
            TEXT = "What are the name of the \n other four party members\n1. " + NAME1 + "\n2. " + NAME2+ "\n3. " + NAME3 + "\n4. " + NAME4 + "\n5. " + NAME5 + "\n Are these names correct?";
            ui->label->setText(TEXT);
            ui->label_2->setText("8");
            return;
        }
    }
    if (ui->label_2->text() == "6"){
        NAME5 = n;
        if(n == ""){
            NAME5 = "SMITH";
        }
        TEXT = TEXT + NAME5 + "\n are these names correct? ";
        ui->label->setText(TEXT);
        ui->label_2->setText("7");
        return;
    }
    if (ui->label_2->text() == "5"){
        NAME4 = n;
        if(n == ""){
            NAME4 = "SMITH";
        }
        TEXT = TEXT + NAME4 + "\n 5. ";
        ui->label->setText(TEXT);
        ui->label_2->setText("6");
        return;
    }
    if (ui->label_2->text() == "4"){
        NAME3 = n;
        if(n == ""){
            NAME3 = "SMITH";
        }
        TEXT = TEXT + NAME3 + "\n 4. ";
        ui->label->setText(TEXT);
        ui->label_2->setText("5");
        return;
    }
    if (ui->label_2->text() == "3"){
        NAME2 = n;
        if(n == ""){
            NAME2 = "SMITH2";
        }
        TEXT = TEXT + NAME2 + "\n 3. ";
        ui->label->setText(TEXT);
        ui->label_2->setText("4");
        return;
    }
    if (ui->label_2->text() == "2"){
        NAME1 = n;
        if(n == ""){
            NAME1 = "SMITH";
        }
        TEXT = "What are the name of the \n other four party members \n1. " + NAME1 + "\n2. ";
        ui->label->setText(TEXT);
        ui->label_2->setText("3");
        return;
    }
    if (n == "1") {
        TEXT = "Many kind of people made the trip to oregon trail\nyou may:\n1. Be a banker from Boston\n2. Be a carpenter from Ohio\n3. Be a farmer from illinois\n4. Find out the difference between the choices\n what is your choice? ";
        ui->label->setText(TEXT);
        if(ui->label_2->text() == "1") {
            TEXT = "What is the name of the wagon leader? ";
            ui->label->setText(TEXT);
            JOB = "BANKER";
            MONEY = "1600";
            ui->label_2->setText("2");
            return;
        }
        ui->label_2->setText("1");
    }
    if (n == "2") {
        ui->label->setText("Try taking a journey by covered wagon across 2000 \n mile of plains, rivers, and mountains. Try! \n On the plains, will you slosh your oxen through \n mud and water-filled ruts or will you plod \n throught dust six inches deep? How will \n you cross the rivers? If you have money, you might \n take a ferry (if there is a fery). Or, you can ford \n the river and hope you and your waon aren't swallowed \n alive! ");
        if(ui->label_2->text() == "1") {
            ui->label->setText("What is the name of the wagon leader? ");
            JOB = "CARPENTER";
            MONEY = "800";
            ui->label_2->setText("2");
            return;
        }
        ui->label_2->setText("1");
    }
    if (n == "3"){
        JOB = "FARMER";
        MONEY = "300";
        ui->label_2->setText("2");
        return;
    }
}
void newproj::player(const QString &n){

}
void newproj::on_pushButton_clicked()
{
    page(ui->lineEdit->text());
}


void newproj::on_resetbutton_clicked()
{
    ui->label->setText("OREGON TRAIL\nyou may:\n1. start the trail\n2. learn about the trail\nWhat is your choice? ");
    ui->label_2->setText(" ");
    ui->label_3->setText(" ");
}



