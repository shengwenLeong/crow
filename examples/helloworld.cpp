#include "crow.h"
#include <time.h>
int main()
{
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")
    ([]() {
        usleep(2863)
        return "Hello world!";
    });

    app.port(10080).multithreaded.run();
}
