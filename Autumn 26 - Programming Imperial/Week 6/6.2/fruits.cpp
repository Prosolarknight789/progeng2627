

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

// Returns the index of s in vin, or -1 if s is not found.
int search_vector(std::string s, const std::vector<std::string>& vin) {
    for (int i = 0; i < (int)vin.size(); i++) {
        if (vin[i] == s) {
            return i;
        }
    }
    return -1;
}

// vout = every element that appears in vin1 or vin2 (no duplicates).
void union_vector(const std::vector<std::string>& vin1,
                  const std::vector<std::string>& vin2,
                  std::vector<std::string>& vout) {
    vout.clear();

    for (int i = 0; i < (int)vin1.size(); i++) {
        if (search_vector(vin1[i], vout) == -1) {
            vout.push_back(vin1[i]);
        }
    }
    for (int i = 0; i < (int)vin2.size(); i++) {
        if (search_vector(vin2[i], vout) == -1) {
            vout.push_back(vin2[i]);
        }
    }
}

// vout = every element that appears in both vin1 and vin2 (no duplicates).
void intersection_vector(const std::vector<std::string>& vin1,
                         const std::vector<std::string>& vin2,
                         std::vector<std::string>& vout) {
    vout.clear();

    for (int i = 0; i < (int)vin1.size(); i++) {
        if (search_vector(vin1[i], vin2) != -1 &&
            search_vector(vin1[i], vout) == -1) {
            vout.push_back(vin1[i]);
        }
    }
}

// Reads one word per line from a file into a vector.
bool read_file(const std::string& filename, std::vector<std::string>& vout) {
    std::ifstream fin(filename);
    if (!fin.is_open()) {
        return false;
    }
    std::string word;
    while (fin >> word) {
        vout.push_back(word);
    }
    return true;
}

// Writes one word per line to a file.
bool write_file(const std::string& filename, const std::vector<std::string>& vin) {
    std::ofstream fout(filename);
    if (!fout.is_open()) {
        return false;
    }
    for (int i = 0; i < (int)vin.size(); i++) {
        fout << vin[i] << "\n";
    }
    return true;
}

int main() {
    std::string name1, name2;

    std::cout << "Enter the name of the first file: ";
    std::cin >> name1;
    std::cout << "Enter the name of the second file: ";
    std::cin >> name2;

    std::vector<std::string> v1, v2, vunion, vinter;

    if (!read_file(name1, v1)) {
        std::cout << "Could not open " << name1 << std::endl;
        return 1;
    }
    if (!read_file(name2, v2)) {
        std::cout << "Could not open " << name2 << std::endl;
        return 1;
    }

    union_vector(v1, v2, vunion);
    intersection_vector(v1, v2, vinter);

    write_file("union.txt", vunion);
    write_file("intersection.txt", vinter);

    return 0;
}

