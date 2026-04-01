## Question 1

**Problem:** Find the size in bits of the "mega" data type, which is the largest data type supported by a CPU with a 2-byte maximum addressable width.

**Solution:**
* The maximum width of the CPU is 2 bytes.
* 1 byte = 8 bits.
* 2 bytes * 8 bits = 16 bits.

**Answer:** The mega data type contains **16 bits**.

## Question 3

**A. Output:** `4294967295` *(Assuming a standard 32-bit system)*

**B. Explanation:** This happens because of **integer underflow** (or wrap-around). 
* The variable `x` is an `unsigned int`, meaning it can only hold zero and positive numbers. It cannot be negative.
* When you subtract `1` from `0`, the value wraps around backward to the absolute maximum value that an unsigned 32-bit integer can hold, which is `4294967295`.


