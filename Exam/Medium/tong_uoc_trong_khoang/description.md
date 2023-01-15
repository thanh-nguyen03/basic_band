### Description

Cảm ơn mọi người tuần trước đã giúp **Bun** lựa chọn mua những tờ vé số phù hợp và trúng giải độc đắc. Tuy nhiên ban tổ chức lại tạo ra một bài toán dành cho Bun, nếu Bun giải được thành công thì sẽ được gấp đôi số tiền trúng thưởng, còn không thì Bun sẽ mất hết số tiền đó.

Bài toán như sau: Cho 2 số **l**, **r**. Gọi f(x) là **tổng các ước số của số x**. <br> **Hãy tính f(l) + f(l + 1) + ... + f(r - 1) + f(r).**

Mọi người hãy giúp Bun giải quyết bài toán để nhận gấp đôi giải thưởng nhé.
<br><br>

### Input

Dòng đầu tiên chứa số nguyên T là số bộ test (1 &leq; T &leq; 100).
<br>
Dòng tiếp theo chứa 2 số nguyên l, r (1 &leq; l, r &leq; $10^{6}$).
<br><br>

### Output

Với mỗi bộ test in ra 1 dòng duy nhất là kết quả bài toán ban tổ chức đưa ra.

<br>

### Example

<br>
<table>
<tr>
    <td>#</td>
    <td>Input</td>
    <td>Output</td>
</tr>
<tbody>
<tr>
    <td>1</td>
    <td>
        2<br>
        2 3<br>
        1 2
    </td>
    <td>
        7<br>
        4
    </td>
</tr>

</tbody>
</table>
<br>

**Giải thích test**: Ở test 1, f(2) = 1 + 2 = 3, f(3) = 1 + 3 = 4 => Kết quả bài toán là f(2) + f(3) = 7
