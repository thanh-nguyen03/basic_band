### Description

**Bun** rất thích đi giao du trên các diễn đàn về game trí tuệ giải đố. Một ngày, cậu rủ một người bạn mới quen chơi một trò chơi do chính cậu nghĩ ra. <br>
Luật chơi vô cùng đơn giản: cho một số nguyên **n** và một <strong>dãy số khởi đầu gồm n phần tử </strong>. Nhiệm vụ của mỗi người chơi ở mỗi lượt chơi của mình là **chọn ra 2 số trong dãy số đó (giả sử là a và b)** và thêm vào dãy số đó **một số mới có giá trị là |a - b|**. Điều kiện để số được thêm vào dãy là số đó chưa từng tồn tại trong dãy số.

Vì có hào quang nhân vật chính nên **Bun luôn được đi trước**. Cả hai người đều chơi một cách tối ưu ở lượt chơi của mình. Bạn hãy tìm xem ai là người chiến thắng ở mỗi trận đấu nhé.
Nếu Bun thắng in ra 1, thua in ra 0.
<br><br>

### Input

Dòng đầu tiên chứa số nguyên T là số bộ test (1 &leq; T &leq; 100).
<br>
Mỗi bộ test chứa hai dòng<br>
Dòng đầu tiên chứa số nguyên n (1 &leq; n &leq; $10^{4}$).<br>
Dòng thứ hai chứa các số a[i] là dãy số khởi đầu của trò chơi (1 &leq; a[i] &leq; $10^{4}$)
<br><br>

### Output

Với mỗi bộ test in ra 1 dòng duy nhất là kết quả của trận đấu đó.

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
        2<br>
        2 3<br>
        3<br>
        5 6 7
    </td>
    <td>
        1<br>
        0
    </td>
</tr>

</tbody>
</table>

<table class=“table table-bordered table-condensed”>
<thead>
<tr class=“text-center”>
<th>Test</th>
<th>Input</th>
<th>Output</th>
</tr>
</thead>
<tbody>
<tr>
<td class=“text-center”>1</td>
<td>1 2 3 4 5</td>
<td>1 1<br>3 2</td>
</tr>
<tr>
<td class=“text-center”>2</td>
<td>5 4 3 2 1</td>
<td>5 5<br>3 4</td>
</tr>
</tbody>
</table>
