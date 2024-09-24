#include <iostream>
using namespace std;

int main() {
    int choice;

    

    switch (choice) {
        // Завдання 1.1
    case 1: {
        char symbol;
        int length, speed;
        bool vertical;

        cout << "Введіть символ для лінії: ";
        cin >> symbol;
        cout << "Введіть довжину лінії: ";
        cin >> length;
        cout << "Лінія вертикальна? (1 - так, 0 - ні): ";
        cin >> vertical;
        cout << "Оберіть швидкість (1 - повільно, 2 - нормально, 3 - швидко): ";
        cin >> speed;

        for (int i = 0; i < length; i++) {
            if (vertical) {
                cout << symbol << endl;
            }
            else {
                cout << symbol;
            }
            for (int j = 0; j < (speed * 1000000); j++);
        }
        cout << endl;
        break;
    }

          // Завдання 1.2
    case 2: {
        int userSum = 0, computerSum = 0;
        int predefinedRoll[] = { 3, 5, 2, 6, 4, 3, 6, 1, 5 };

        for (int i = 0; i < 3; i++) {
            cout << "Раунд " << i + 1 << ": " << endl;

            int userRoll1 = predefinedRoll[i * 2];
            int userRoll2 = predefinedRoll[i * 2 + 1];
            cout << "Ви кинули: " << userRoll1 << " і " << userRoll2 << endl;
            userSum += userRoll1 + userRoll2;

            int compRoll1 = predefinedRoll[i * 2 + 2];
            int compRoll2 = predefinedRoll[i * 2 + 3];
            cout << "Комп'ютер кинув: " << compRoll1 << " і " << compRoll2 << endl;
            computerSum += compRoll1 + compRoll2;

            cout << "-----------------------" << endl;
        }

        cout << "Сума ваших очок: " << userSum << endl;
        cout << "Сума очок комп'ютера: " << computerSum << endl;

        if (userSum > computerSum) {
            cout << "Ви виграли" << endl;
        }
        else if (userSum < computerSum) {
            cout << "Комп'ютер виграв" << endl;
        }
        else {
            cout << "Нічия" << endl;
        }
        break;
    }




          // Завдання 2.1
    case 3: {
        const int N = 10;
        int arr[N];

        cout << "Введіть 10 чисел:\n";
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        int minVal = arr[0], maxVal = arr[0];
        for (int i = 1; i < N; i++) {
            if (arr[i] < minVal) minVal = arr[i];
            if (arr[i] > maxVal) maxVal = arr[i];
        }

        cout << "Мінімальний елемент: " << minVal << endl;
        cout << "Максимальний елемент: " << maxVal << endl;
        break;
    }






          // Завдання 2.2
    case 4: {
        const int months = 12;
        double profit[months];

        cout << "Введіть прибуток фірми за 12 місяців:\n";
        for (int i = 0; i < months; i++) {
            cin >> profit[i];
        }

        int start, end;
        cout << "Введіть діапазон місяців (наприклад, 3 і 6): ";
        cin >> start >> end;

        start--;
        end--;

        double minProfit = profit[start], maxProfit = profit[start];
        int minMonth = start, maxMonth = start;

        for (int i = start; i <= end; i++) {
            if (profit[i] < minProfit) {
                minProfit = profit[i];
                minMonth = i;
            }
            if (profit[i] > maxProfit) {
                maxProfit = profit[i];
                maxMonth = i;
            }
        }

        cout << "Максимальний прибуток у місяці " << maxMonth + 1 << " і становить " << maxProfit << endl;
        cout << "Мінімальний прибуток у місяці " << minMonth + 1 << " і становить " << minProfit << endl;
        break;
    }

          // Завдання 2.3
    case 5: {
        const int N = 10;
        double arr[N];

        cout << "Введіть " << N << " елементів масиву:\n";
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        
        double sumNegative = 0;
        for (int i = 0; i < N; i++) {
            if (arr[i] < 0) {
                sumNegative += arr[i];
            }
        }
        cout << "Сума від'ємних елементів: " << sumNegative << endl;

        
        double minVal = arr[0], maxVal = arr[0];
        int minIdx = 0, maxIdx = 0;
        for (int i = 1; i < N; i++) {
            if (arr[i] < minVal) {
                minVal = arr[i];
                minIdx = i;
            }
            if (arr[i] > maxVal) {
                maxVal = arr[i];
                maxIdx = i;
            }
        }

        if (minIdx > maxIdx) swap(minIdx, maxIdx);

        double productBetweenMinMax = 1;
        for (int i = minIdx + 1; i < maxIdx; i++) {
            productBetweenMinMax *= arr[i];
        }
        cout << "Добуток елементів між min і max: " << productBetweenMinMax << endl;

        
        double productEvenIndex = 1;
        for (int i = 0; i < N; i += 2) {
            productEvenIndex *= arr[i];
        }
        cout << "Добуток елементів з парними номерами: " << productEvenIndex << endl;

        
        int firstNegative = -1, lastNegative = -1;
        for (int i = 0; i < N; i++) {
            if (arr[i] < 0) {
                if (firstNegative == -1) {
                    firstNegative = i;
                }
                lastNegative = i;
            }
        }

        double sumBetweenNegatives = 0;
        if (firstNegative != -1 && lastNegative != -1 && firstNegative != lastNegative) {
            for (int i = firstNegative + 1; i < lastNegative; i++) {
                sumBetweenNegatives += arr[i];
            }
        }

        cout << "Сума елементів між першим і останнім від'ємними: " << sumBetweenNegatives << endl;
        break;
    }

    default:
        cout << "Невірний вибір" << endl;
    }

    return 0;
}
