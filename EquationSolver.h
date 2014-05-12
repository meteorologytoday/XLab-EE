#ifndef XLABEE_EQUATION_SOLVER
#define XLABEE_EQUATION_SOLVER

namespace XLABEE {
	template <typename T, x_size Nr, x_size Nz>
        class EESolver {
            public:
                Vector(); 
                Vector(T *data);
                Vector(T init_value);
                Vector(Vector<T,N>& original);

                inline T* getPtr() { return ((Matrix<T,1,N>*)this)->getPtr(); }
        };
}

#endif
