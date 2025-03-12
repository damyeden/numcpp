#ifndef __NP__
#define __NP__
#include <vector>
#include <utility>
using namespace std;
    template<typename T>
    class Numpy{
        public:
            vector<T> array(vector<T> x);                           //creation d'un array multidimensionnel
            vector<vector<T>> zeros(vector<int> dimension);                 //retourne un tableau rempli de zero
    };
    template<typename T>
    vector<T> Numpy<T>::array(vector<T> x) {
        return x;
    }
    template<typename T>
    vector<vector<T>> Numpy<T>::zeros(vector<int> dimension){
        size_t dim=dimension.size();
        std::vector<T> sub(dimension[dim - 1], 0);
        vector<vector<T>> temp;
        for(int j=1;j<dim;j++){
            temp.clear();
            for(int i=0;i<dimension[dim-j-1];i++){
                temp.push_back(sub);
            }
            sub = temp;
        }
        return temp;
    }
#endif