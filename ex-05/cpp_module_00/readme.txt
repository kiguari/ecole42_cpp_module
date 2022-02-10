cpp_module_00
main.cpp - subject
Нужно сделать Warlock.hpp и Warlock.cpp

Warlock.hpp
- сделать класс варлок
- приватные поля стринг name и стринг title, дефолтный конструктор, конструктор копирование и оператор присвоения (их описывать в cpp файле не нужно)
- публиные поля:
конструтор принимающий две стринговые ссылки name и title
деструтор
гетер &get name и &get title оба const
сетер для title принимает конст ссылку стринг
метод void introduce() const

Warlock.cpp
- конструктор с двумя стрингами, присвоение стрингов, так же вывод сообщение <NAME>
- деструкток выводит <NAME>: My job here is done!
- introduce выводит сообщение <NAME>: I am <NAME>, <TITLE>!