cpp_module_00
main.cpp - subject
Нужно сделать Warlock.hpp и Warlock.cpp ASpell.cpp ASpell.hpp ATarget.cpp ATarget.hpp Dummy.cpp Dummy.hpp Fwoosh.cpp Fwoosh.hpp 

Warlock.hpp
в приватное поле домавляем вектор указателей на ASpell *
в паблик:
добавляем три метода
void learnSpell(ASpell *aspell_tpr);
void forgetSpell(std::string name);
void launchSpell(std::string name, ATarget const &atarget_ref);

Warlock.cpp
- в деструктор добавляем цикл на делет по утераторам элементов вектора и в конце .clear()
- лерн спелл
чекаем на тру, внутри иф делаем цикл по итераторам и если .getName бедет равен гет нейму входящего aspell делаем ретурн если нет, то в конце делаем пусшбек и передаем в него .clone от входящего aspell
- форгет спелл
делаем цикл по итераторам и если гет нейм от итератора = входящем стрингу, то сначала делетим его, а потом на него вызывает .erase() и делаем ретурн
- лаунч спелл
делаем цикл по итераторам если гет нейм от итератора равен входящему нейму то вызываем для итератора ->launch и передаем в него входящий ATarget и ретурнимся

Aspell.hpp
подключаем ATarget и объявляем класс ATarget
делаем класс ASpell
в приватное поле два стринга name effects
в паблик 
канон + деструткор делаем виртуальным + конструктор с двумя стригами (&new_name &new_effects)
два гетера & const на нейм и еффектс
делаем фиртуальный метод virtual ASpell *clone() const = 0;
делаем методот void launch(ATarget const &atarget_ref) const;

Aspell.cpp
все стандартные конструкторы, гетеры (в cout ничего не выводим)
*clone описывать не нужно!
launch принимает ссылку на атаргет, в нем к этому атаргетe применяем метод atarget_ref.getHitBySpell((*this)) передаем в него *this!!!

ATarget.hpp
подключаем ASpell.hpp и объявляем класс ASpell
делаем класс ATarget
в приват один стринг attribute
в паблик все по канону + конструктор со стрингом (new_attribute)
гетер &getType const
virtual ATarget *clone() const = 0;
void getHitBySpell(ASpell const &aspell_ref) const;

ATarget.cpp
все стандартные конструкторы, гетеры (в cout ничего не выводим)
getHitBySpell - <TYPE> has been <EFFECTS>!    - aspell_ref.getEffects()

Dummy.hpp
подключаем ATarget
без приват
в паблик дефолтный конструктор деструктор
и virtual ATarget *clone() const;

Dummy.cpp
в дефолтном кострукторе : коструктор ATarget со стрингом "Target Practice Dummy"
деструктор {}
ATarget *Dummy::clone() const ретернит нью Dummy

Fwoosh.hpp
подключаем ASpell
без приват
в паблик дефолтный конструктор деструктор
и virtual ASpell *clone() const;

Fwoosh.cpp
в дефолтном кострукторе : коструктор ATarget со двумя стрингами "Fwoosh", "fwooshed"
деструктор {}
ASpell *Dummy::clone() const ретернит нью Fwoosh


