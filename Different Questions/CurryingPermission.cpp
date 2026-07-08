#include<iostream>>
using namespace std;

auto Get_Permission(int userId) {
    return [userId](int resourceId) {
        return [userId, resourceId](int actionId) {
            // Simulate permission checking logic
            if (userId == 1 && resourceId == 2 && actionId == 3) {
                return true; // User has permission
            }
            return false; // User does not have permission
        };
    };
}

int main() {
    int userId = 1;
    int resourceId = 2;
    int actionId = 3;

    auto checkPermission = Get_Permission(userId);
    auto checkResourcePermission = checkPermission(resourceId);
    bool hasPermission = checkResourcePermission(actionId);

    if (hasPermission) {
        cout << "User has permission to perform the action." << endl;
    } else {
        cout << "User does not have permission to perform the action." << endl;
    }

    return 0;
}