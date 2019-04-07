#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED

class Vector
{
public:
	int x;
	int y;
	void input();
	void output();
	void mod();
	void sum(Vector v1, Vector v2);
	void dif(Vector v1, Vector v2);
};

#endif // VECTOR_H_INCLUDED
