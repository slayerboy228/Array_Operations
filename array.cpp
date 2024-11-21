#include <iostream>
using namespace std;

// Array Operations
class Array
{
    int size;
    int length;
    int *a;

public:
    void display();                // 1 Display()
    void append(int x);            // 2 add(x)/append(x)
    void insert(int index, int x); // 3 Insert(index, x)
    int Delete(int index);         // 4 Delete(index, x)
    int Search(int x);             // 5 Search(x)
    int BinSearch(int x);          // (i) Binary Search(x)
    int RBinSearch(int x);         // (ii) Recursive Binary Search(x)
    int get(int index);            // 6 Get(index)
    void set(int index, int x);    // 7 Set(index, x)
    int Max();                     // 8 Max()
    int Min();                     // Min()
    void reverse();                // 9 Reverse()
    // 10 Shift()/Rotate()
    int Summation();                    // 11 Summation()
    float avg();                        // 12 Average()
    bool checkSort();                   // 13 Checking Sorted()
    void insertsort(int x);             // 14 insersort(x)
    void rearrange();                   // 15 Rearrange()
    void sort();                        // 16 sorting()
    Array merging(Array &obj);          // 17 merging(obj)
    Array mergesort(Array &obj);        // 18 mergesort(obj)
    Array unionarr(Array &obj);         // 19 union(obj)
    Array unionarrsort(Array &obj);     // 20 unionsort(obj)
    Array intersection(Array &obj);     // 21 intersection(obj)
    Array intersectionsort(Array &obj); // 22 intersectionsort(obj)
    Array AnotB(Array &obj);            // 23 AnotB()
    Array AnotBsort(Array &obj);        // 24 AnotBsort()
    void insertarr();
    Array()
    {
        size = 10;
        length = 0;
        a = new int[size];
    }
    Array(int s)
    {
        size = s;
        length = 0;
        a = new int[size];
    }
    ~Array()
    {
        delete[] a;
    }
};

void swap(int &, int &);

int main()
{
    Array *arr;
    int s;
    cout << "Enter size of array:" << endl;
    cin >> s;
    arr = new Array;
    int ch;
    while (1)
    {
        cout << "*********************************" << endl;
        cout << "Enter your choice:" << endl
             << endl;
        cout << "1 for Append/add." << endl;
        cout << "2 for Display." << endl;
        cout << "3 for Insert at position." << endl;
        cout << "4 for Delete at position." << endl;
        cout << "5 for Search." << endl;
        cout << "6 for Get." << endl;
        cout << "7 for Set." << endl;
        cout << "8 for max." << endl;
        cout << "9 for min." << endl;
        cout << "10 for Reverse." << endl;
        cout << "11 for Summation." << endl;
        cout << "12 for Average." << endl;
        cout << "13 for Checksort." << endl;
        cout << "14 for Insert Sort." << endl;
        cout << "15 for Rearrange." << endl;
        cout << "16 for Sort." << endl;
        // cout << "17 for Merging." << endl;
        // cout << "18 for Merging sort." << endl;
        // cout << "19 for Union of array." << endl;
        // cout << "20 for union of sorted array." << endl;
        // cout << "21 for Intersection of array." << endl;
        // cout << "22 for Intersection of sorted array." << endl;
        // cout << "23 for (A-B) of array." << endl;
        // cout << "24 for (A-B) of sorted array." << endl;
        cout << "Press any other key to exit." << endl;
        cout << "*********************************" << endl
             << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            int x;
            cout << "Enter an element." << endl;
            cin >> x;
            arr->append(x);
        }
        break;
        case 2:
        {
            arr->display();
        }
        break;
        case 3:
        {
            int p, x;
            cout << "Enter index to insert:" << endl;
            cin >> p;
            cout << "Enter element to insert:" << endl;
            cin >> x;
            arr->insert(p, x);
        }
        break;
        case 4:
        {
            int p;
            cout << "Enter index to delete:" << endl;
            cin >> p;
            arr->Delete(p);
        }
        break;
        case 5:
        {
            int x;
            cout << "Enter target element to Search:" << endl;
            cin >> x;
            cout << "Element is at index : " << arr->BinSearch(x) << endl;
        }
        break;
        case 6:
        {
            int p, x;
            cout << "Enter index to Get:" << endl;
            cin >> p;
            cout << "Element at " << p << " is: " << arr->get(p) << endl;
        }
        break;
        case 7:
        {
            int p, x;
            cout << "Enter index to set:" << endl;
            cin >> p;
            cout << "Enter element to set:" << endl;
            cin >> x;
            arr->set(p, x);
        }
        break;
        case 8:
        {
            cout << "Largest element is : " << arr->Max() << endl;
        }
        break;
        case 9:
        {
            cout << "Smallest element is : " << arr->Min() << endl;
        }
        break;
        case 10:
        {
            arr->reverse();
        }
        break;
        case 11:
        {
            cout << "Summation of array is : " << arr->Summation() << endl;
        }
        break;
        case 12:
        {
            cout << "Average of array is : " << arr->avg() << endl;
        }
        break;
        case 13:
        {
            cout << "Checking array sorted or not : " << arr->checkSort() << endl;
        }
        break;
        case 14:
        {
            int x;
            cout << "Enter element to insert at sorted array:" << endl;
            cin >> x;
            arr->insertsort(x);
        }
        break;
        case 15:
        {
            arr->rearrange();
        }
        break;
        case 16:
        {
            arr->sort();
        }
        break;
        default:
            exit(0);
            break;
        }
    }
    return 0;
}

void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

void Array ::display()
{
    cout << "Elements are" << endl;
    for (int i = 0; i < length; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void Array ::insertarr()
{
    for (int i = 0; i < length; i++)
    {
        cin >> a[i];
    }
}

void Array::append(int x)
{
    if (length < size)
    {
        a[length] = x;
        length++;
    }
}

void Array ::insert(int index, int x)
{
    if (index >= 0 and index < length)
    {
        for (int i = length; i >= index; i--)
        {
            a[i] = a[i - 1];
        }
        a[index] = x;
        length++;
    }
}

int Array ::Delete(int index)
{
    if (index >= 0 and index < length)
    {
        int x = a[index];
        for (int i = index; i < length - 1; i++)
        {
            a[i] = a[i + 1];
        }
        length--;
        return x;
    }
    return -1;
}

int Array ::Search(int x)
{
    for (int i = 0; i < length; i++)
    {
        if (x == a[i])
            return i;
    }
    return -1;
}

int Array ::BinSearch(int x)
{
    int l, h, mid;
    l = 0;
    h = length - 1;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (x == a[mid])
            return mid;
        else if (x < a[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

int Array::RBinSearch(int x)
{
    static int l = 0;
    static int h = length - 1;
    static int mid = 0;
    if (l <= h)
    {
        mid = (h + l) / 2;
        if (x == a[mid])
            return mid;
        else if (x < a[mid])
        {
            h = mid - 1;
            return RBinSearch(x);
        }
        else
        {
            l = mid + 1;
            return RBinSearch(x);
        }
    }
    return -1;
}

int Array ::get(int index)
{
    if (index >= 0 and index < length)
        return a[index];
}

void Array::set(int index, int x)
{
    if (index >= 0 and index < length)
        a[index] = x;
}

int Array ::Max()
{
    int max = a[0];
    for (int i = 0; i < length; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    return max;
}

int Array ::Min()
{
    int min = a[0];
    for (int i = 0; i < length; i++)
    {
        if (min > a[i])
            min = a[i];
    }
    return min;
}

int Array::Summation()
{
    int sum = 0;
    for (int i = 0; i < length; i++)
        sum += a[i];
    return sum;
}

float Array::avg()
{
    int sum = 0;
    for (int i = 0; i < length; i++)
        sum += a[i];
    return (float)sum / length;
}

void Array::reverse()
{
    for (int i = 0; i < length / 2; i++)
        swap(a[i], a[length - 1 - i]);
}

bool Array::checkSort()
{
    for (int i = 0; i < length - 1; i++)
    {
        if (a[i] > a[i + 1])
            return false;
    }
    return true;
}

void Array::insertsort(int x)
{
    int i = length - 1;
    while (a[i] > x and i >= 0)
    {
        a[i + 1] = a[i];
        i--;
    }
    a[i + 1] = x;
    length++;
}

void Array::rearrange()
{
    int i, j;
    i = 0;
    j = length - 1;
    while (i < j)
    {
        while (a[i] < 0)
            i++;
        while (a[j] >= 0)
            j--;
        if (i < j)
            swap(a[i], a[j]);
    }
}

Array Array ::merging(Array &obj)
{
    Array merge;
    merge.a = new int[length + obj.length];
    for (int i = 0; i < length; i++)
    {
        merge.a[i] = a[i];
    }
    for (int i = length; i < length + obj.length; i++)
    {
        merge.a[i] = obj.a[i - length];
    }
    merge.length = length + obj.length;
    merge.size = merge.length;
    return merge;
}

void Array::sort()
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 1 + i; j < length; j++)
        {
            if (a[i] > a[j])
                swap(a[i], a[j]);
        }
    }
}

Array Array::mergesort(Array &obj)
{
    Array merge;
    merge.size = length + obj.length;
    merge.a = new int[merge.size];
    int i, j, k;
    i = j = k = 0;
    while (i < length and j < obj.length)
    {
        if (a[i] < obj.a[j])
            merge.a[k++] = a[i++];
        else
            merge.a[k++] = obj.a[j++];
    }
    for (; i < length; i++)
        merge.a[k++] = a[i];
    for (; j < obj.length; j++)
        merge.a[k++] = obj.a[j];
    merge.length = merge.size;
    return merge;
}

Array Array::unionarr(Array &obj)
{
    Array u;
    u.size = length + obj.length;
    u.length = 0;
    u.a = new int[u.size];
    for (int i = 0; i < length; i++)
        u.a[u.length++] = a[i];

    for (int i = 0; i < obj.length; i++)
    {
        bool found = false;
        for (int j = 0; j < u.length; j++)
        {
            if (obj.a[i] == u.a[j])
            {
                found = true;
                break;
            }
        }
        if (!found)
            u.a[u.length++] = obj.a[i];
    }
    return u;
}

Array Array::unionarrsort(Array &obj)
{
    Array u;
    u.size = length + obj.length;
    u.length = 0;
    u.a = new int[u.size];
    int i, j, k;
    i = j = k = 0;
    while (i < length and j < obj.length)
    {
        if (a[i] < obj.a[j])
            u.a[k++] = a[i++];
        else if (a[i] > obj.a[j])
            u.a[k++] = obj.a[j++];
        else
        {
            u.a[k++] = a[i++];
            j++;
        }
    }
    for (; i < length; i++)
        u.a[k++] = a[i];
    for (; j < obj.length; j++)
        u.a[k++] = obj.a[j];
    u.length = k;
    return u;
}

Array Array::intersection(Array &obj)
{
    Array inter;
    inter.size = length + obj.length;
    inter.length = 0;
    inter.a = new int[inter.size];
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < obj.length; j++)
        {
            if (a[i] == obj.a[j])
                inter.a[inter.length++] = a[i];
        }
    }
    return inter;
}

Array Array::intersectionsort(Array &obj)
{
    Array inter;
    inter.size = length + obj.length;
    inter.length = 0;
    inter.a = new int[inter.size];
    int i, j, k;
    i = j = k = 0;
    while (i < length and j < obj.length)
    {
        if (a[i] < obj.a[j])
            i++;
        else if (a[i] > obj.a[j])
            j++;
        else
        {
            inter.a[k++] = a[i++];
            j++;
        }
    }
    inter.length = k;
    return inter;
}

Array Array::AnotB(Array &obj)
{
    Array anotb;
    anotb.size = length + obj.length;
    anotb.length = 0;
    anotb.a = new int[anotb.size];
    for (int i = 0; i < length; i++)
    {
        bool found = false;
        for (int j = 0; j < obj.length; j++)
        {
            if (a[i] == obj.a[j])
                found = true;
        }
        if (!found)
            anotb.a[anotb.length++] = a[i];
    }
    return anotb;
}

Array Array::AnotBsort(Array &obj)
{
    Array c;
    c.size = length + obj.length;
    c.length = 0;
    c.a = new int[c.size];
    int i, j;
    i = j = 0;
    while (i < length and j < obj.length)
    {
        if (a[i] < obj.a[j])
            c.a[c.length++] = a[i++];
        else if (a[i] > obj.a[j])
            c.a[c.length++] = a[i++];
        else
            i++, j++;
    }
    return c;
}
