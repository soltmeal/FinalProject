//Project - Sol Atencio
//HEADER File

#ifndef AtencioProject_h
#define AtencioProject_h

#include <stdio.h>

#endif /* AtencioProject_h */

template<class T>
struct vertex;

template<class T>
struct adjVertex{
    vertex<T> *v;
    int weight;
};

template<class T>
struct vertex{
    T name;
    std::vector<adjVertex<T> > adj;
};

template<class T>

class Graph
{
public:
    Graph();
    ~Graph();
    void addEdge(T v1, T v2, int weight);
    void addVertex(T name);
    void displayEdges();
    void TransmitShortest();
    void BuildNetwork();
    void addCity(T name);
    void printNetwork();
    void transmitMessage(T name);
    void deleteNetwork();
    
    
protected:
private:
    std::vector<vertex<T> > vertices;
};
#endif // GRAPH_H
