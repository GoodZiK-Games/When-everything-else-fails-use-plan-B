#include "game.h"
#include "window.h"

Game::Game(Window *parent)
    : QGraphicsView(parent)
    , scene(new QGraphicsScene())
    , lastEvent()
    , lastImage()
{
    setFixedSize(QSize(802, 602));
    setScene(scene);
    Game::click(Event::SITUATION_1);
}

void Game::click(const Event event)
{
    scene->clear();

    switch(event) {
        case Event::SITUATION_1: {
            lastImage = new Image("default.jpg");
            scene->addItem(new Image("default.jpg"));
            Image *logo = new Image("logo.png");
            logo->setPos(650, 0);
            scene->addItem(logo);

            Text *text = new Text("On this wonderful sunny Saturday you are going for a walk.");
            text->setNumber(3);
            scene->addItem(text);
            Button *button1 = new Button("Take a step.", this, Event::SITUATION_1_1);
            button1->setNumber(2);
            scene->addItem(button1);
            Button *button2 = new Button("I change my mind. Go back to the house.", this, Event::SITUATION_1_2);
            button2->setNumber(1);
            scene->addItem(button2);
        }
        break;
        case Event::SITUATION_1_1: {
            click(Event::SITUATION_2);
        }
        break;
        case Event::SITUATION_1_2: {
            click(Event::SITUATION_6);
        }
        break;

        case Event::SITUATION_2: {
            lastImage = new Image("rain.jpg");
            scene->addItem(new Image("rain.jpg"));
            Image *logo = new Image("logo.png");
            logo->setPos(650, 0);
            scene->addItem(logo);

            Text *text = new Text("Suddenly, out of nowhere there are heavy clouds, it starts raining.");
            text->setNumber(4);
            scene->addItem(text);
            Button *button1 = new Button("Draw an umbrella.", this, Event::SITUATION_2_1);
            button1->setNumber(3);
            scene->addItem(button1);
            Button *button2 = new Button("Go back to the house.", this, Event::SITUATION_2_2);
            button2->setNumber(2);
            scene->addItem(button2);
            Button *button3 = new Button("Small rain will not scare me.", this, Event::SITUATION_2_3);
            button3->setNumber(1);
            scene->addItem(button3);
           }
        break;
        case Event::SITUATION_2_1: {
            click(Event::SITUATION_3);
        }
        break;
        case Event::SITUATION_2_2:{
            click(Event::SITUATION_6);
        }
        break;
        case Event::SITUATION_2_3: {
            click(Event::SITUATION_3);
        }
        break;

        case Event::SITUATION_3: {
            lastImage = new Image("frogs.jpg");
            scene->addItem(new Image("frogs.jpg"));
            Image *logo = new Image("logo.png");
            logo->setPos(650, 0);
            scene->addItem(logo);

            Text *text1 = new Text("Heavy water drops wetting your shoes. Sunny Saturday is not so sunny anymore.");
            text1->setNumber(5);
            scene->addItem(text1);
            Text *text2 = new Text("Shortly the water drops along with frogs!");
            text2->setNumber(4);
            scene->addItem(text2);
            Text *text3 = new Text("Its raining frogs!");
            text3->setNumber(3);
            scene->addItem(text3);
            Button *button1 = new Button("Umbrella will protect me. Open the umbrella.", this, Event::SITUATION_3_1);
            button1->setNumber(2);
            scene->addItem(button1);
            Button *button2 = new Button("Go back to the house.", this, Event::SITUATION_3_2);
            button2->setNumber(1);
            scene->addItem(button2);
        }
        break;
        case Event::SITUATION_3_1: {
            click(Event::SITUATION_4);
        }
        break;
        case Event::SITUATION_3_2: {
            click(Event::SITUATION_6);
        }
        break;

        case Event::SITUATION_4: {
            lastImage = new Image("bood_and_frogs.jpg");
            scene->addItem(new Image("bood_and_frogs.jpg"));
            Image *logo = new Image("logo.png");
            logo->setPos(650, 0);
            scene->addItem(logo);

            Text *text1 = new Text("You are rising the open umbrella to protect yourself and making few steps forwad.");
            text1->setNumber(5);
            scene->addItem(text1);
            Text *text2 = new Text("Red drops of blood falling from the sky. ITS RAINING BLOOD AND RAINING FROGS!");
            text2->setNumber(4);
            scene->addItem(text2);
            Text *text3 = new Text("How badly do you whant go for a walk?");
            text3->setNumber(3);
            scene->addItem(text3);
            Button *button1 = new Button("Keep walking. Imagine metal music.", this, Event::SITUATION_4_1);
            button1->setNumber(2);
            scene->addItem(button1);
            Button *button2 = new Button("Hah, I am done. Go back to home.", this, Event::SITUATION_4_2);
            button2->setNumber(1);
            scene->addItem(button2);
        }
        break;
        case Event::SITUATION_4_1: {
            click(Event::SITUATION_5);
        }
        break;
        case Event::SITUATION_4_2: {
            click(Event::SITUATION_6);
        }
        break;

        case Event::SITUATION_5: {
            lastImage = new Image("meteros.jpg");
            scene->addItem(new Image("meteros.jpg"));
            Image *logo = new Image("logo.png");
            logo->setPos(650, 0);
            scene->addItem(logo);

            Text *text = new Text("You are tough. How about a meteor shower?");
            text->setNumber(2);
            scene->addItem(text);
            Button *button = new Button("Its time for plan B!", this, Event::SITUATION_5_1);
            button->setNumber(1);
            scene->addItem(button);
        }
        break;
        case Event::SITUATION_5_1:{
            click(Event::SITUATION_7);
        }
        break;

        case Event::SITUATION_6: {
            scene->addItem(new Image(lastImage->getFileName()));
            Image *logo = new Image("logo.png");
            logo->setPos(650, 0);
            scene->addItem(logo);

            Text *text = new Text("Door locked.");
            text->setNumber(2);
            scene->addItem(text);
            Button *button = new Button("Well, walk then...", this, Event::SITUATION_6_1);
            button->setNumber(1);
            scene->addItem(button);
        }
        break;
        case Event::SITUATION_6_1:
            switch (lastEvent) {
                case Event::SITUATION_1_1:
                case Event::SITUATION_1_2: {
                    click(Event::SITUATION_1);
                }
                break;
                case Event::SITUATION_2_1:
                case Event::SITUATION_2_2:
                case Event::SITUATION_2_3: {
                    click(Event::SITUATION_2);
                }
                break;
                case Event::SITUATION_3_1:
                case Event::SITUATION_3_2: {
                    click(Event::SITUATION_3);
                }
                break;
                case Event::SITUATION_4_1:
                case Event::SITUATION_4_2: {
                    click(Event::SITUATION_4);
                }
                break;
                case Event::SITUATION_5_1:{
                    click(Event::SITUATION_5);
                }
                break;
            }
            break;

        case Event::SITUATION_7: {
            scene->addItem(new Image(lastImage->getFileName()));
            Image *logo = new Image("logo.png");
            logo->setPos(650, 0);
            scene->addItem(logo);

            Button *button1 = new Button("Run!", this, Event::SITUATION_7_1);
            button1->setNumber(2);
            scene->addItem(button1);
            Button *button2 = new Button("Use umbrella as a  bat to deflect incoming meteors. Arrrr.", this, Event::SITUATION_7_2);
            button2->setNumber(1);
            scene->addItem(button2);
        }
        break;
        case Event::SITUATION_7_1: {
            scene->addItem(new Image(lastImage->getFileName()));
            Image *logo = new Image("logo.png");
            logo->setPos(650, 0);
            scene->addItem(logo);

            Text *text = new Text("Chikken!");
            text->setNumber(1);
            scene->addItem(text);
        }
        break;
        case Event::SITUATION_7_2: {
            scene->addItem(new Image(lastImage->getFileName()));
            Image *logo = new Image("logo.png");
            logo->setPos(650, 0);
            scene->addItem(logo);

            Text *text = new Text("Victory!");
            text->setNumber(1);
            scene->addItem(text);
        }
        break;
    }

    lastEvent = event;
}
