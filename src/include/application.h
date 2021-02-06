#ifndef APPLICATION_H
#define APPLICATION_H

enum ApplicationState {
    ApplicationStateMenu,
    ApplicationStateProgram
};

struct Application {
    unsigned int state;
};

#endif

extern struct Application App;
