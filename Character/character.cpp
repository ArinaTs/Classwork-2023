#include <iostream>
#include <string.h>


class Pers {
protected:
	std::string name;
	int hp;
	int attack;
	std::string weapon;
public:
	Pers(std::string _name, int _hp, int _attack, std::string _weapon) {
		name = _name;
		hp = _hp;
		attack = _attack;
		weapon = _weapon;
	}
};


class Soldier : public Pers {
	int armor;
public:
	Soldier(const Soldier& obj) {
		name = obj.name;
		hp = obj.hp;
		attack = obj.attack;
		weapon = obj.weapon;
		armor = obj.armor;
	}
	Soldier(std::string _name, int _hp, int _attack, std::string _weapon, int _armor) {
		name = _name;
		hp = _hp;
		attack = _attack;
		weapon = _weapon;
		armor = _armor;
	}
	void Attack(Soldier& p1);
	void BeingAttacked(Soldier& p1);
	Soldier& operator = (const Soldier& p);
	Soldier operator + (const Soldier& p1, const Soldier& p2);
	friend ostream& operator << (ostream& out, const Soldier& p);
	friend bool operator < (const Soldier& p1, const Soldier& p2);
	friend bool operator == (const Soldier& p1, const Soldier& p2);
	friend bool operator > (const Soldier& p1, const Soldier& p2);
};
void Soldier::Attack (Soldier& p1) { //не хватало Soldier::
	int damage, protection;
	damage = this->attack;
	protection = p1.armor; //здесь была ошибка, вместо armor было weapon
	if (damage <= protection) {
		std::cout << "Вы не нанесли урон!" << std::endl;
	}
	else if (protection < damage) {
		p1.hp = damage / 2;
		std::cout << "Вы нанесли урон!" << std::endl;
	}
}
void Soldier::BeingAttacked (Soldier& p1) {
	int damage, protection;
	damage = p1.attack;
	protection = this->armor; //здесь была ошибка, вместо armor было weapon
	if (damage <= protection) {
		std::cout << "Броня защитила вас!" << std::endl;
	}
	else if (protection < damage) {
		this->hp = damage / 2;
		std::cout << "Вам нанесли урон!"\n << "Оставшееся здоровье:" << this->hp << std::endl;
	}
}
Soldier::Soldier& operator = (const Soldier& p) {
	if (this != p) {
		this->hp = p.hp;
		this->attack = p.attack;
		this->armor = p.armor;
	}
	return *this;
}
Soldier operator + (const Soldier& p1, const Soldier& p2) {
	Soldier imba(p1);
	imba.hp += p2.hp;
	imba.attack += p2.attack;
	imba.armor += p2.armor;
	return imba;
}
ostream& operator << (ostream& out, const Soldier& p) {
	out << "( " << p.name << ", " << p.hp << ", " << p.attack << ", " << p.weapon << ", " << p.armor << ")";
	return out;
}
bool operator < (const Soldier& p1, const Soldier& p2) {
	return (p1.hp < p2.hp && p1.attack < p2.attack && p1.armor < p2.armor);
}
bool operator == (const Soldier& p1, const Soldier& p2) {
	return (p1.hp == p2.hp && p1.attack == p2.attack && p1.armor == p2.armor);
}
bool operator > (const Soldier& p1, const Soldier& p2) {
	return (p1.hp > p2.hp && p1.attack > p2.attack && p1.armor > p2.armor);
}

class Dodger : public Pers {
	int chance;
public:
	Dodger(const Dodger& obj) {
		name = obj.name;
		hp = obj.hp;
		attack = obj.attack;
		weapon = obj.weapon;
		chance = obj.chance;
	}
	Dodger(std::string _name, int _hp, int _attack, std::string _weapon, int _chance) {
		name = _name;
		hp = _hp;
		attack = _attack;
		weapon = _weapon;
		chance = _chance;
	}
	void Attack(Dodger& p1);
	void BeingAttacked(Dodger& p1);
	Dodger& operator = (const Dodger& p);
	Dodger operator + (const Dodger& p1, const Dodger& p2);
	friend ostream& operator << (ostream& out, const Dodger& p);
	friend bool operator < (const Dodger& p1, const Dodger& p2);
	friend bool operator == (const Dodger& p1, const Dodger& p2);
	friend bool operator > (const Dodger& p1, const Dodger& p2);
};
void Dodger::Attack(Dodger& p1) { //не хватало Soldier::
	int damage, protection;
	damage = this->attack;
	protection = p1.chance; 
	if (damage <= protection) {
		std::cout << "Вы не нанесли урон!" << std::endl;
	}
	else if (protection < damage) {
		p1.hp = damage / 2;
		std::cout << "Вы нанесли урон!" << std::endl;
	}
}
void Dodger::BeingAttacked(Dodger& p1) {
	int damage, protection;
	damage = p1.attack;
	protection = this->chance; 
	if (damage <= protection) {
		std::cout << "Вы уклонились!" << std::endl;
	}
	else if (protection < damage) {
		this->hp = damage / 2;
		std::cout << "Вам нанесли урон!"\n << "Оставшееся здоровье:" << this->hp << std::endl;
	}
}
Dodger::Dodger& operator = (const Dodger& p) {
	if (this != p) {
		this->hp = p.hp;
		this->attack = p.attack;
		this->chance = p.chance;
	}
	return *this;
}
Dodger operator + (const Dodger& p1, const Dodger& p2) {
	Dodger imba(p1);
	imba.hp += p2.hp;
	imba.attack += p2.attack;
	imba.chance += p2.chance;
	return imba;
}
ostream& operator << (ostream& out, const Dodger& p) {
	out << "( " << p.name << ", " << p.hp << ", " << p.attack << ", " << p.weapon << ", " << p.chance << ")";
	return out;
}
bool operator < (const Dodger& p1, const Dodger& p2) {
	return (p1.hp < p2.hp && p1.attack < p2.attack && p1.chance < p2.chance);
}
bool operator == (const Dodger& p1, const Dodger& p2) {
	return (p1.hp == p2.hp && p1.attack == p2.attack && p1.chance == p2.chance);
}
bool operator > (const Dodger& p1, const Dodger& p2) {
	return (p1.hp > p2.hp && p1.attack > p2.attack && p1.chance > p2.chance);
}