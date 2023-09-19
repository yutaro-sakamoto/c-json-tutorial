#include <json-c/json_object.h>
#include <stdio.h>

int main() {
    struct json_object* root_object = json_object_new_object();
    struct json_object* int_object = json_object_new_int(3);
    json_object_object_add(root_object, "number", int_object);
    printf("json_object: %s\n", json_object_to_json_string(root_object));
    return 0;
}
