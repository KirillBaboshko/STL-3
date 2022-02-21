#include <iostream>
#include <vector>
#include <string>
using namespace std;
//template<class T,class Allocator=Allocator<T>>
//class vactor
//{
//public:
//	exlicit vector(const Allocator& a = Allocator());//пустой вектор
//	exlicit vector(size_type num, const T& val = T(), const Allocator& a = Allocator());//вектор с количеством элементов num со значением val
//	vector(const vector <T, Allocator>& ob);//содержит те же элементы , что и вектор ob
//	template<class InIter>vector(InIter start, InIter end, const Allocator& a = Allocator())//содержит элементы в диапозоне от start до end
//	//Имеються операторы:
//		==
//		<
//		<=
//		!=
//		>
//		>=
//		template<class InIter> void assign(InIter start, InIter end)
//		void assign(size_type num, const& val)
//		reference at(size_type i);
//	const_reference at(size_type i)const;//это [] только с проверкой за границы
//	reference back();
//	const_reference back()const;//Возвращает ссылку на последний элемент в векторе
//	iterator begin();
//	const_iterator begin() const;//Возвращает итератор для первого элемента в векторе
//	size_type capacity()const;//текущая эмкости вектора до выделения доп памяти
//	void clear();
//	void empty()const;//проверка на пустоту
//	const_iterator end() const;
//	iterator end();//возвращает итератор для конца Вектора
//	iterator erace(iterator i);//Удаление
//
//	reference front();
//	const_reference front()const;//Возвращает ссылку на первый элемент в векторе
//
//	allocator_type get_allocator()const;//Возвращает распределитель вектора
//	iterator insert(iterator i, const T& val = T());//Вставляет значение val перед элементом,заданным параметром i,возвращает итератор для этого элемента
//	void insert(iterator i, size_type num, const T& val);//Вставляет num копий значения val непосредственно перед элементом,заданным параметром
//
//	template<class InIter>
//	void insert(iterator i, InIter start, InIter end);//Втавляет в вектор последовательность,определяемую start и end, непосредственно перед элементом,  заданным параметром i
//
//	size_type max_size() const;//Возвращает макс элементов
//
//	reference operator[](size_type i)const;
//	const_reference operator[](size_type i)const;//Возвращает ссылку на элемент заданный ,заданный i
//
//	void pop_back();//Удаляет последний 
//
//	void push_back();//Добавляет в конец вектора элемент
//
//	reverse_iterator rend();
//	const_revers_iterator rend() const;//возвращает реверсивный итератор для начала
//
//	reverse_iterator rbegin();
//	const_revers_iterator rbegin() const;//возвращает реверсивный итератор для конца
//
//	void reverse(size_type num);//Устанавливает емкость вектора равной не менее заданого значения num
//
//	void resize(size_type num, const T& val = T());//Устанавливает емкость вектора равной не менее заданого значения num,если вектор для этого нужно удлинить, то в его конец добавляются элементы со значением , заданным параметром val
//
//	size_type size() const;//Возвращает текущее количеством элементов 
//
//	void swap(deque<T, Allocator>& ob);//Выполняет обмен элемментами данного вектора и вектора ob
//
//	void flip();//Инвертирует значения всех битов в векторе
//
//	static void swap(reference i, reference j);//Переставляет местами биты,заданные параметрами i и j
//
//};
class Train
{
	int hours;
	int min;
	string stan;
public:
	int num;
	Train()
	{
		num=0;
		hours=0;
		min=0;
		stan="Nikuda";
	}
	Train(int n,int h,int m,const char* s)
	{
		num = n;
		hours = h;
		min = m;
		stan = s;
	}
	void set()
	{
		cout << "Введите номер поезда" << endl;
		cin >> num;
		cout << "Введите время отправления" << endl;
		cout << "Часы: ";
		cin >> hours;
		cout << "\nМинуты: ";
		cin >> min;
		cout << "\nВведите станцию назначения" << endl;
		cin >> stan;
	}
	void print()
	{
		cout << "Поезд номер " << num << " отправляет в " << hours << ":" << min << " и следует до станции " << stan<<endl;
	}

};
void main()
{
	setlocale(0, "rus");
	/*vector<int> vect;
	cout << "\n Number of elements that could be stoped in the vector without "
		<< "allocating more storasge --> "
		<< vect.capacity();
	cout << "\n -------------------------";

	cout << "\nThe number of elements in the vector --> " << vect.size();
	cout << "\n -------------------------";

	vect.resize(4, 0);
	cout << "\nResizing ...\n";
	cout << "The number of elements in the vector -->" << vect.size() << endl;
	cout << "\nvector -->\t";
	for (int i = 0; i < vect.size(); i++)
		cout << vect[i] << '\t';
	cout << "\n -------------------------";

	cout << "\nThe max possible length of the vector -->"
		<< vect.max_size() / vect.size();
	cout << "\n --------------------";

	vect.push_back(1);
	cout << "\npush_back\nvector -->\t";
	for (int i = 0; i < vect.size(); i++)
		cout << vect[i] << '\t';
	cout << "\n --------------------";

	vector<int>::reverse_iterator i_riterator=vect.rbegin();
	cout << "\nreverse_iterator\nvector-->\t";
	for (int i = 0; i < vect.size(); i++)
		cout << *(i_riterator + i) << "\t";
	cout << "\n --------------------";

	vector<int>::iterator i_iterator = vect.end();
	vect.insert(i_iterator - 1, -1);
	cout << "\ninsert\nvector -->\t";
	for (i_iterator = vect.begin(); i_iterator != vect.end(); i_iterator++)
		cout << *(i_iterator) << '\t';
	cout << "\n --------------------";

	i_iterator = vect.end();
	vect.insert(i_iterator-1,2,4);
	cout << "\ninsert\nvector -->\t";
	for (int i = 0; i < vect.size(); i++)
		cout << vect[i] << '\t';
	cout << "\n --------------------";

	vector<int>::reverse_iterator i_riterator1 = vect.rbegin();
	cout << "\nreverse_iterator\nvector-->\t";
	for (int i = 0; i < vect.size(); i++)
		cout << *(i_riterator1 + i) << "\t";*/

	vector<Train> ras;
	Train temp;
	int n;
	cout << "Введите количество поездов ";
	cin >> n;
	ras.resize(n,temp);

	for (int i = 0; i < ras.size(); i++)
	{
		cout << "Заполнение информации про " << i+1 << " поезд"<<endl;
		ras[i].set();
		cout << endl;
	}
	for (int i = 0; i < ras.size(); i++)
	{
		ras[i].print();
		cout << endl;
	}
	int m;
	cout << "Введите номер поезда , который желаете найти" << endl;
	cin >> m;
	for (int i = 0; i < ras.size(); i++)
	{
		if (m == ras[i].num)
		{
			ras[i].print();
		}
	}

}
