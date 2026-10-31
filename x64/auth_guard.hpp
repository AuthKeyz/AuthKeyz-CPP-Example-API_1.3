#pragma once
#include "auth.hpp"

inline bool checkAuthenticated(AuthKeyz::api& app) {
    app.check();
    return app.response.success && app.authenticated();
}
