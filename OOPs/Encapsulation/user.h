class User {
    int id;
    string name;
    int age;

public:
    User(int id, string name, int age) {
        this->id = id;
        this->name = name;
        this->age = age;
    }

    int getID() {
        return id;
    }

    void setID(int id) {
        this->id = id;
    }

    string getName() {
        return name;
    }

    void setName(string name) {
        this->name = name;
    }

    int getAge() {
        return age;
    }

    void setAge(int age) {
        this->age = age;
    }
};