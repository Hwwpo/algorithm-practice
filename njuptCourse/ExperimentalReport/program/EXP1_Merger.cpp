#include<math.h>
#include<iostream>
using namespace std;

class SortableList {
	public:
		SortableList(int mSize) {
			maxSize=mSize;
			l=new int[maxSize];
			n=0; //����������Ԫ�ظ���
		}
		~SortableList() {
			delete []l;
		}
		void Input();
		void Output();
		void MergeSort();
		void QuickSort();
		int Select(int k, int left, int right, int r);
		int Select(int k, int r);
		void InsertSort(int left, int right);
	private:
		int *l;
		int maxSize;
		int n;
		void MergeSort(int left, int right);
		void Merge(int left, int mid, int right);
		void Swap(int i,int j); //�����±�Ϊi��j������Ԫ��
		void QuickSort(int left,int right);
		int Partition(int left,int right);
};

void SortableList::Input() {
	cout << "����������Ԫ�ظ���:";
	cin >> this->n;
	for(int i = 0; i < n; i++)
		cin >> this->l[i];
}

void SortableList::Output() {
	cout << "���������Ϊ��";
	for(int i = 0; i < n; i++) {
		cout << this->l[i] << ' ';
	}
	cout << endl;
}

void SortableList::MergeSort() {
	MergeSort(0,n-1);
}
void SortableList::MergeSort(int left,int right) {
	if (left<right) {
		int mid=(left+right)/2;
		MergeSort(left,mid);
		MergeSort(mid+1,right);
		Merge(left,mid,right);
	}
}

void SortableList::Merge(int left,int mid,int right) {
	int *temp=new int[right-left+1];
	int i=left,j=mid+1,k=0;
	while((i<=mid)&&(j<=right))
		if (l[i]<=l[j]) temp[k++]=l[i++];
		else temp[k++]=l[j++];
	while (i<=mid) temp[k++]=l[i++];
	while (j<=right) temp[k++]=l[j++];
	for (i=0,k=left; k<=right;) l[k++]=temp[i++];
}

void SortableList::Swap(int i,int j) {
	int c=l[i];
	l[i]=l[j];
	l[j]=c;
}

int SortableList::Partition(int left,int right) {
	int i=left,j=right+1;
	do {
		do i++;
		while (l[i]<l[left]);
		do j--;
		while (l[j]>l[left]);
		if (i<j) Swap(i,j);
	} while (i<j);
	Swap(left,j);
	return j;
}

void SortableList::QuickSort() {
	QuickSort(0,n-1);
}
void SortableList::QuickSort(int left,int right) {
	if (left<right) {
		int j=Partition(left,right);
		QuickSort(left,j-1);
		QuickSort(j+1,right);
	}
}

int SortableList::Select(int k, int r)
{
	return l[this->Select(k, 0, n-1, r)];
}
int SortableList::Select(int k, int left, int right, int r)
{ // ÿ������r��Ԫ�أ�Ѱ�ҵ�kСԪ��
    int n = right - left + 1;
    if (n <= r) // �������㹻С��ʹ��ֱ�Ӳ�������
    {
        InsertSort(left, right);
        return left + k - 1; // ȡ���еĵ�kСԪ�أ����±�Ϊleft+k-1
    }
    for (int i = 1; i <= n / r; i++)
    {
        InsertSort(left + (i - 1) * r, left + i * r - 1);
        // ����ȡ�й�����ÿ����м�ֵ
        Swap(left + i - 1, left + (i - 1) * r + (int)ceil((double)r / 2) - 1);
        // ��ÿ����м�ֵ�������ӱ�ǰ�����д��
    }
    int j = Select((int)ceil((double)n / r / 2), left, left + (n / r) - 1, r);
    // ������м�ֵ�����±�Ϊj
    Swap(left, j);              // �����м�ֵΪ��ŦԪ��������left��
    j = Partition(left, right); // �Ա��ӱ����зֻ�����
    if (k == j - left + 1)
        return j; // ���ص�kСԪ���±�
    else if (k < j - left + 1)
        return Select(k, left, j - 1, r); // �����ӱ����kСԪ��
    else
        return Select(k - (j - left + 1), j + 1, right, r);
    // �����ӱ����k-(j-left+1)СԪ��
}

void SortableList::InsertSort(int left, int right)
{
    // ֱ�Ӳ�������
    for (int i = left + 1; i <= right; i++)
    {
        for (int j = i; j > left; j--)
        {
            if (l[j] < l[j - 1])
            {
                Swap(j, j - 1);
            }
        }
    }
}

int main() {
	SortableList list(10);
	list.Input();
	list.Output();
	cout << "������k:";
	cout << "��kС����Ϊ��" << list.Select(4, 5) << endl;
	//list.QuickSort();
	//cout << "����֮��";
	//list.Output();
	return 0;
}

