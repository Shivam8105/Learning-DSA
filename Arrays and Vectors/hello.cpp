//! sum of all elements of the array

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cout << "Enter the array element no. " << i << " : ";
//         cin >> arr[i];
//     }
//     int sum = 0;
//     for(int i = 0; i < n; i++){
//         sum += arr[i];
//     }
//     cout << "Sum of all the elements of the array is : " << sum;

// }

//! linear search

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cout << "Enter the array element no. " << i << " : ";
//         cin >> arr[i];
//     }
//     int x;
//     cout << "Enter the number you need to find: ";
//     cin >> x;
//     for(int i = 0; i < n; i++){
//         if(arr[i] == x){
//             cout << "Element found at index : " << i;
//         }
//      }
// }

//! max element

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     int max = INT_MIN;
//     for(int i = 0; i < n; i++){
//         if(max < arr[i]) max = arr[i];
//     }
//     cout << max;
// }

//! second largest element in array

// #include <iostream>
// #include <climits>
// using namespace std;
// int main() {
// 	int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;
//     if (n < 2){
//         cout << "Second maximum element cannot be found";
//         return 0;
//     }
//     int arr[n];
//     cout << "Enter the elements of the array: ";
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     int max = INT_MIN;
//     int Smax = INT_MIN;
//     for(int i = 0; i < n; i++){
//         if(max < arr[i]){
//             Smax = max;
//             max = arr[i];
//         }else if(arr[i] > Smax && arr[i] != max){
//             Smax = arr[i];
//         }
//     }
//     if(Smax == INT_MIN){
//         cout << "Second largest element cannot be found";
//     }else{
//         cout << max << " " << Smax;
//     }
// 	return 0;
// }

//! minimum value out of all elements in the array

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     int min = INT_MAX;
//     bool flag = false;
//     for(int i = 0; i < n; i++){
//         if(min > arr[i]){
//             flag = true;
//             min = arr[i];
//         }
//     }
//     if(flag == true){
//         cout << min;
//     }else{
//         cout << "error";
//     }
// }

//! product of all the elements in the given array

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     int sum = 1;
//     for(int i = 0; i < n; i++){
//         sum *= arr[i];
//     }
//     cout << sum;
// }

//! predict if the array contains duplicates or not

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     int count = 0;
//     int j = 0;
//     for(int i = 0; i < n; i++){
//         for(int j = i + 1; j < n; j++){
//             if(arr[i] == arr[j]){
//                 count++;
//             }
//         }
//     }
//     if(count > 0){
//         cout << "Array contains duplicates";
//     }else{
//         cout << "No Duplicates";
//     }
// }

//! Predict the output

// #include <iostream>
// using namespace std;
// int main()
// {
//     int sub[50], i;
//     for (i = 0; i <= 48; i++)
//     {
//         sub[i] = i;
//         cout << sub[i] << endl;
//     }
//     return 0;
// }

//! arrays and pointers

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[] = {3,5,1};
//     int* ptr = arr;   // giving address of the arrays to the pointer
//     cout << ptr[1] << endl;  // dereferncing operator for accessing first value of the array 
//     // for(int i = 0; i < 3; i++){
//     //     cout << ptr[i] << " ";
//     // }
//     // cout << endl;

//     ptr[1] = 6; // changing value of the array as the pointer contains the address
//     // for(int i = 0; i < 3; i++){
//     //     cout << ptr[i] << " ";
//     // }

//     cout << ptr[1];

//     // int x = 7;
//     // int* ptr = &x;

    
//     // cout << *ptr;

// }

#include <iostream>
#include <vector>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main() {
	vector<int> v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int start = 0;
    int end = v.size() - 1;

    while(start <= end){
        swap(v[start], v[end]);
        start++;
        end--;
    }
    for(int i = 0; i < v.size(); i++){
        cout << v.at(i) << " ";
    }
    cout << endl;
	return 0;
}
