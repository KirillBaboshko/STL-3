#include <iostream>
#include <vector>
#include <string>
using namespace std;
//template<class T,class Allocator=Allocator<T>>
//class vactor
//{
//public:
//	exlicit vector(const Allocator& a = Allocator());//������ ������
//	exlicit vector(size_type num, const T& val = T(), const Allocator& a = Allocator());//������ � ����������� ��������� num �� ��������� val
//	vector(const vector <T, Allocator>& ob);//�������� �� �� �������� , ��� � ������ ob
//	template<class InIter>vector(InIter start, InIter end, const Allocator& a = Allocator())//�������� �������� � ��������� �� start �� end
//	//�������� ���������:
//		==
//		<
//		<=
//		!=
//		>
//		>=
//		template<class InIter> void assign(InIter start, InIter end)
//		void assign(size_type num, const& val)
//		reference at(size_type i);
//	const_reference at(size_type i)const;//��� [] ������ � ��������� �� �������
//	reference back();
//	const_reference back()const;//���������� ������ �� ��������� ������� � �������
//	iterator begin();
//	const_iterator begin() const;//���������� �������� ��� ������� �������� � �������
//	size_type capacity()const;//������� ������� ������� �� ��������� ��� ������
//	void clear();
//	void empty()const;//�������� �� �������
//	const_iterator end() const;
//	iterator end();//���������� �������� ��� ����� �������
//	iterator erace(iterator i);//��������
//
//	reference front();
//	const_reference front()const;//���������� ������ �� ������ ������� � �������
//
//	allocator_type get_allocator()const;//���������� �������������� �������
//	iterator insert(iterator i, const T& val = T());//��������� �������� val ����� ���������,�������� ���������� i,���������� �������� ��� ����� ��������
//	void insert(iterator i, size_type num, const T& val);//��������� num ����� �������� val ��������������� ����� ���������,�������� ����������
//
//	template<class InIter>
//	void insert(iterator i, InIter start, InIter end);//�������� � ������ ������������������,������������ start � end, ��������������� ����� ���������,  �������� ���������� i
//
//	size_type max_size() const;//���������� ���� ���������
//
//	reference operator[](size_type i)const;
//	const_reference operator[](size_type i)const;//���������� ������ �� ������� �������� ,�������� i
//
//	void pop_back();//������� ��������� 
//
//	void push_back();//��������� � ����� ������� �������
//
//	reverse_iterator rend();
//	const_revers_iterator rend() const;//���������� ����������� �������� ��� ������
//
//	reverse_iterator rbegin();
//	const_revers_iterator rbegin() const;//���������� ����������� �������� ��� �����
//
//	void reverse(size_type num);//������������� ������� ������� ������ �� ����� �������� �������� num
//
//	void resize(size_type num, const T& val = T());//������������� ������� ������� ������ �� ����� �������� �������� num,���� ������ ��� ����� ����� ��������, �� � ��� ����� ����������� �������� �� ��������� , �������� ���������� val
//
//	size_type size() const;//���������� ������� ����������� ��������� 
//
//	void swap(deque<T, Allocator>& ob);//��������� ����� ����������� ������� ������� � ������� ob
//
//	void flip();//����������� �������� ���� ����� � �������
//
//	static void swap(reference i, reference j);//������������ ������� ����,�������� ����������� i � j
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
		cout << "������� ����� ������" << endl;
		cin >> num;
		cout << "������� ����� �����������" << endl;
		cout << "����: ";
		cin >> hours;
		cout << "\n������: ";
		cin >> min;
		cout << "\n������� ������� ����������" << endl;
		cin >> stan;
	}
	void print()
	{
		cout << "����� ����� " << num << " ���������� � " << hours << ":" << min << " � ������� �� ������� " << stan<<endl;
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
	cout << "������� ���������� ������� ";
	cin >> n;
	ras.resize(n,temp);

	for (int i = 0; i < ras.size(); i++)
	{
		cout << "���������� ���������� ��� " << i+1 << " �����"<<endl;
		ras[i].set();
		cout << endl;
	}
	for (int i = 0; i < ras.size(); i++)
	{
		ras[i].print();
		cout << endl;
	}
	int m;
	cout << "������� ����� ������ , ������� ������� �����" << endl;
	cin >> m;
	for (int i = 0; i < ras.size(); i++)
	{
		if (m == ras[i].num)
		{
			ras[i].print();
		}
	}

}
