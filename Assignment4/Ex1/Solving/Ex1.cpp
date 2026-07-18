#include<iostream>
#include<math.h>

const double PI = 3.14159265358979323846;

void showMenu() {
    std::cout << "MENU:\n";
    std::cout << "1. Hình chữ nhật\n";
    std::cout << "2. Hình tròn\n";
    std::cout << "3. Hình tam giác\n";
    std::cout << "4. Hình vuông\n";
    std::cout << "0. Exit\n";
    std::cout << "Chọn hình muốn tính diện tích: ";
}



double rectangleArea(double length, double width) {
    if( length <= 0 || width <= 0) {
        std::cout << "Chiều dài và chiều rộng phải lớn hơn 0.\n";
        return 0;
    }
    else if( length < width) {
        std::cout << "Chiều dài phải lớn hơn hoặc bằng chiều rộng.\n";
        return 0;
    }
    else {
        return length * width;
    }
}

double rectanglePerimeter(double length, double width) {
    if( length <= 0 || width <= 0) {
        std::cout << "Chiều dài và chiều rộng phải lớn hơn 0.\n";
        return 0;
    }
    else if( length < width) {
        std::cout << "Chiều dài phải lớn hơn hoặc bằng chiều rộng.\n";
        return 0;
    }
     else {
        return 2 * (length + width);
    }
}

double squareArea(double side) {
    return rectangleArea(side, side);
}

double squarePerimeter(double side) {
    return rectanglePerimeter(side, side);
}

double circleArea(double radius) {
    if( radius <= 0) {
        std::cout << "Bán kính phải lớn hơn 0.\n";
        return 0;
    }
    return PI * radius * radius;
}

double circlePerimeter(double radius) {
    if( radius <= 0) {
        std::cout << "Bán kính phải lớn hơn 0.\n";
        return 0;
    }
    return 2 * PI * radius;
}

double triangleArea(double base, double height) {
    if( base <= 0 || height <= 0) {
        std::cout << "Đáy và chiều cao phải lớn hơn 0.\n";
        return 0;
    }
    return 0.5 * base * height;
}

void printResult(double area, double perimeter) {
    if(area > 0) {
        std::cout << "Diện tích: " << area << std::endl;
    }
     else {
        std::cout << "Diện tích: N/A" << std::endl;
    }
   
    if(perimeter > 0) {
        std::cout << "Chu vi: " << perimeter << std::endl;
    } else {
        std::cout << "Perimeter: N/A" << std::endl;
    }
}

int main() {
    int choice;
    do {
        showMenu();
        std::cin >> choice;

        switch (choice) {
            case 1: {
                double length, width;
                std::cout << "Nhập chiều dài: ";
                std::cin >> length;
                std::cout << "Nhập chiều rộng: ";
                std::cin >> width;
                double area = rectangleArea(length, width);
                double perimeter = rectanglePerimeter(length, width);
                printResult(area, perimeter);
                break;
            }
            case 2: {
                double radius;
                std::cout << "Nhập bán kính: ";
                std::cin >> radius;
                double area = circleArea(radius);
                double perimeter = circlePerimeter(radius);
                printResult(area, perimeter);
                break;
            }
            case 3: {
                double base, height;
                std::cout << "Nhập đáy: ";
                std::cin >> base;
                std::cout << "Nhập chiều cao: ";
                std::cin >> height;
                double area = triangleArea(base, height);
                printResult(area, 0); 
                break;
            }
            case 4: {
                double side;
                std::cout << "Nhập cạnh: ";
                std::cin >> side;
                double area = squareArea(side);
                double perimeter = squarePerimeter(side);
                printResult(area, perimeter);
                break;
            }
            case 0:
                std::cout << "Thoát chương trình.\n";
                break;
            default:
                std::cout << "Lựa chọn không hợp lệ. Vui lòng thử lại.\n";
        }
    } while (choice != 0);

    return 0;
}
