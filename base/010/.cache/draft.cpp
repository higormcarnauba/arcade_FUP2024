#include <fn.hpp> // https://raw.githubusercontent.com/senapk/cppaux/master/fn.hpp


struct Cliente{
    std::string id;
    std::string fone;

    Cliente(std::string id = "", std::string fone = "") { return {}; }
    std::string str() { return {}; }
};

class Sala{
    std::vector<std::shared_ptr<Cliente>> cadeiras;
    int procurar(std::string nome) { return {}; }

public:
    Sala(int qtd = 0){}


    void reservar(std::string id, std::string fone, int ind) { return {}; }

    void cancelar(std::string id) { return {}; }

    std::string str() { return {}; }
};


std::ostream& operator<<(std::ostream& os, Cliente c) { return os << c.str(); }
std::ostream& operator<<(std::ostream& os, Sala    c) { return os << c.str(); }

int main() {
    Sala sala;
    while (true) {
        auto line = fn::input();
        auto args = fn::split(line, ' ');
        fn::write("$" + line);

        if (args[0] == "end") {
            break;
        } else if (args[0] == "show") {
            fn::write(sala);
        } else if (args[0] == "init") {
            sala = Sala(+args[1]);
        } else if (args[0] == "reservar") {
            sala.reservar(args[1], args[2], (int) +args[3]);
        } else if (args[0] == "cancelar") {
            sala.cancelar(args[1]);
        } else {
            fn::write("fail: comando invalido");
        }
    }
}

