### Description

Có tổng cộng n thành phố được đánh dấu từ 1 đến n, mỗi thành phố **cách nhau 1km** và nằm trên một đường thẳng. Ở mỗi thành phố, tại tòa thị chính có một số thể hiện số km bạn có thể đi khi xuất phát tại thành phố đó. Ví dụ nếu bạn đang ở thành phố thứ 1 và ở đó có số 2, ban có thể đi thẳng đến thành phố số 3 và **đó được coi là một lần di chuyển**. Nếu số ở đó là 0 thì bạn không thể di chuyển từ thành phố đó sang thành phố tiếp theo. Nhiệm vụ của bạn là hãy di chuyển từ thành phố đầu đến thành phố cuối với **số lần di chuyển là ít nhất**.

<br><br>

### Input

Dòng đầu tiên chứa số nguyên T là số bộ test (1 &leq; T &leq; 100).
<br>
Với mỗi bộ test, dòng đầu tiên chứa 1 số nguyên n (1 &leq; n &leq; $10^{3}$).<br>
Dòng tiếp theo chứa các số a[i] là số được ghi ở tòa thị chính của thành phố thứ i (1 &leq; i &leq; n, 1 &leq; a[i] &leq; 100)
<br><br>

### Output

In ra số bước di chuyển ít nhất mà bạn cần phải sử dụng

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
        11<br>
        1 3 5 8 9 2 6 7 6 8 9<br>
        6<br>
        1 4 3 2 6 7
    </td>
    <td>
        3<br>
        2
    </td>
</tr>

</tbody>
</table>

**Giải thích**: ở test đầu ta có thể di chuyển từ thành phố a[1] -> a[2] -> a[4] -> a[11]
