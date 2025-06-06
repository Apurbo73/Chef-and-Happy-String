# Chef and Happy String


---

### 🔢 Purpose of the Program:

Chef is **happy** if the input string contains **at least 3 consecutive vowels** (like `"aei"`, `"iou"`, etc.). The program checks each test case to determine this and prints **"HAPPY"** or **"SAD"** accordingly.

---

### 🧱 Code Explained:

```cpp
#include <iostream>
#include <string>
using namespace std;
```

* Includes input/output and string handling support.
* We’re using `std::string` to handle the input strings.

---

```cpp
int main() {
    int T;
    cin >> T;
```

* `T` is the number of test cases.
* We read it using `cin`.

---

```cpp
    while (T--) {
        string S;
        cin >> S;
```

* For each test case, we read the string `S`.

---

```cpp
        int count = 0;
        bool happy = false;
```

* `count` tracks the number of **consecutive vowels**.
* `happy` becomes `true` if we ever find more than 2 vowels in a row.

---

```cpp
        for (int i = 0; i < S.size(); i++) {
```

* Loop through each character in the string `S`.

---

```cpp
            if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u') {
                count++;
                if (count > 2) {
                    happy = true;
                    break;
                }
```

* If the character is a vowel, increase `count`.
* If `count > 2`, it means we found **3 or more vowels in a row**, so set `happy = true` and exit the loop early with `break`.

---

```cpp
            } else {
                count = 0;
            }
```

* If the character is **not a vowel**, reset `count` to 0 because we broke the consecutive streak.

---

```cpp
        if (happy) cout << "HAPPY\n";
        else cout << "SAD\n";
```

* Based on the `happy` flag, print the result for the current test case.

---

```cpp
    }
    return 0;
}
```

* Finish processing all test cases and end the program.

---

### 📌 Example:

**Input:**

```
2
abcdeeio
abcrstuv
```

* First string has `"eio"` — 3 vowels in a row → Output: `HAPPY`
* Second string has no 3 consecutive vowels → Output: `SAD`

---

