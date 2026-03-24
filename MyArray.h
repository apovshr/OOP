class MyArray 
{
    public:
        MyArray(){}; // стандартний конструктор
        MyArray(int n); // додатковий конструктор (конструктор ініціалізації).
        void fillArray(int min, int max); // метод автоматичної ініціалізації масиву в заданому користувачем діапазоні.
        void setArray(); // метод заповнення елементів масиву користувачем
        int comparison(int x); // метод порівняння х з елементами масиву
        ~MyArray() {delete[] array;} // метод деконструкції
        int& operator[](int index) { return array[index]; } // робимо так, щоб об'єкти сприймалися як масиви
        void print(); // метод виводу масивів на екран

    // приватні змінні для роботи у класі
    private:
        int* array;
        int size;
};
