#include <iostream>
#include <vector>
using namespace std;

//Problem 17


//Problem 16
/*int main() {
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = v.size()-1; i>=0; i--)
        cout << v[i] << " ";

    return 0;
}*/

//Problem 15
/*int main() {
    int n, x; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cin >> x;
    for (int i = 0; i < v.size(); ) {
            if (v[i] == x)
                v.erase(v.begin() + i);
            else i++;
    }
    for (int i : v)  cout << i << " ";

    return 0;
}*/

//Problem 14
/*int main() {
    int n, x, count=0; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    cin >> x;
    for(int i = 0; i < n; i++)
        if(v[i] == x) count++;
    cout << count << endl;

    return 0;
}*/

//Problem 13
/*int main() {
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int max = v[0];
    for(int i=1;i<n;i++)
        if(v[i]>max) max=v[i];
    cout<<max<<endl;

    return 0;
}*/

//Problme 12
/*int main() {
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    int sum=0;
    for(int i=0;i<n;i++) {
        sum+=v[i];
    }
    cout<<sum<<endl;

    return 0;
}*/

//Problem 11
/*int main() {
    int n; cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    for(int i:v) {
        cout<<i<<" ";
    }
    return 0;
}*/

//Problem 10

//Problem 9
/*void multiplymatrices (int a[][100], int b[][100], int n1, int m1, int n2, int m2) {
    int newmatrix[100][100];
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            newmatrix[i][j] = 0;
            for (int k = 0; k < n1; k++) {
                newmatrix[i][j] += a[i][k] * b[k][j];
            }cout << newmatrix[i][j] << " ";
        }cout << endl;
    }
}
int main() {
    int n1, m1; cin >> n1 >> m1;
    int matrix1[n1][100]; cout << "Matrix 1" << endl;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m1; j++) {
            cin >> matrix1[i][j];
        }
    }int n2,m2; cin >> n2 >> m2;
    int matrix2[n2][100]; cout << "Matrix 2" << endl;
    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < m2; j++) {
            cin >> matrix2[i][j];
        }
    }multiplymatrices(matrix1, matrix2, n1, m1, n2, m2);

    return 0;
}*/

//Problem 8
/*void sumofmatrices(int a[][100], int b[][100], int n, int m) {
    int summatrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            summatrix[i][j] = a[i][j] + b[i][j];
        }
    }for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cout << summatrix[i][j] << " ";
        }cout << endl;
    }
}

int main() {
    int n,m; cin>>n>>m;
    int matrix1[n][100], matrix2[n][100];
    cout << "Matrix 1" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>matrix1[i][j];
        }
    }cout << "Matrix 2" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>matrix2[i][j];
        }
    }sumofmatrices(matrix1, matrix2, n, m);

    return 0;
}*/

//Problem 7
/*void transposematrix (int a[][100], int n, int m) {
    int transposematrix[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transposematrix[i][j] = a[j][i];
            cout << transposematrix[i][j] << " ";
        }cout << endl;
    }
}
int main () {
    int n, m; cin >> n >> m;
    int matrix[n][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }transposematrix(matrix, n, m);

    return 0;
}*/

//Problem 6
/*void diagonalmatrixsum( int a[][100], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i][i];
    }cout << "Diagonal sum is " << sum << endl;
}
int main() {
    int n; cin >> n;
    int matrix[n][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }diagonalmatrixsum(matrix, n);

    return 0;
}*/

//Problem 5
/*void coloumnsum (int a[][100], int n, int m) {
    for (int j=0; j<m; j++) {
        int sum=0;
        for (int i=0; i<n; i++) {
            sum+=a[i][j];
        }cout << sum << " "<< endl;
    }
}
int main() {
    int n, m; cin >> n >> m;
    int matrix[n][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    coloumnsum(matrix, n, m);

    return 0;
}*/

//Problem 4
/*int main() {
    int n, m; cin >> n >> m;
    int matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        int rowMax = matrix[i][0];
        for (int j = 1; j < m; j++) {
            if (matrix[i][j] > rowMax) {
                rowMax = matrix[i][j];
            }
        }
        cout << rowMax << " ";
    }

    return 0;
}*/

//Problem 3
/*int main() {
    int n,m; cin>>n>>m;
    int matrix[100][100], sum=0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin >> matrix[i][j];
            sum += matrix[i][j];
        }
    }cout << "Sum is " << sum << endl;

    return 0;
}*/

//Problem 2
/*void displayMatrix(int matrix[][100], int N, int M) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << matrix[i][j] << " ";
        }
    }
}
int main() {


    return 0;
}*/

//Problem 1
/*void inputMatrix (int matrix[][100], int N, int M) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> matrix[i][j];
        }
    }
}
int main() {
    int N, M; cin >> N >> M;
    int matrix[100][100];
    inputMatrix(matrix, N, M);
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << matrix[i][j] << " ";
        }
    }

    return 0;
}*/