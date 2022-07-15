#include<iostream>
#include<thread>
using namespace std;
void thread_function() {
	cout << "thread function" << endl;
}


/*
* 线程会阻塞
	int main() {
	thread t(&thread_function);
	cout << "main thread" << endl;
	t.join();
	return 0;
}*/

//线程不会阻塞

int main() {
	thread t(&thread_function);
	cout << "main thread" << endl;
	//t.join()
	if (t.joinable())
		t.join();
	return 0;
}


