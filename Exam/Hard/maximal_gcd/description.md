### Description

**Bun** là một người rất thích những trò chơi nhân phẩm. Một ngày nọ cậu được bạn giới thiệu một trò chơi nhân phẩm mới nổi có tên **sổ xố kì lạ**. Luật chơi của trò chơi này như sau: Có không giới hạn số từ vé số được đánh mã số từ **1** đến **vô hạn** được phát hành ra cho tất cả mọi người cùng mua. Nhiệm vụ của người chơi là phải mua cho mình đủ **k** tờ vé số theo **thứ tự tăng dần chặt chẽ** (nghĩa là mã số của tờ vé sau phải lớn hơn mã số của tờ vé trước) và có tổng các mã số bằng một số **n** đã được công bố bởi ban tổ chức. Người thắng cuộc sẽ là người có dãy vé số thỏa mãn điều kiện trên và có **ước chung lớn nhất** của các tờ vé số là **lớn nhất trong số tất cả các người chơi**. Tuy nhiên vì cờ bạc người không chơi là người thắng nên có tỉ lệ ban tổ chức ăn quỵt tiền bằng cách đưa ra con số **n** và **k** vô lý và không thể tạo được dãy vé số thỏa mãn.

Vì Bun rất đam mê thử thách nhân phẩm nhưng lại kém ở khoản tính toán nên Bun muốn nhờ bạn tính toán xem Bun nên mua những tờ vé được đánh mã số là gì để có thể trúng giải nhé!

Nếu **có nhiều cách chọn mua vé**, hãy in ra cách chọn mà **2 tờ vé cuối cùng có hiệu là lớn nhất**. <br>
Nếu không có cách chọn nào hãy in ra -1.
<br><br>

### Input

Dòng đầu tiên chứa số nguyên T là số bộ test (1 &leq; T &leq; 100).
<br>
Dòng tiếp theo chứa 2 số nguyên n, k (1 &leq; n, k &leq; $10^{10}$).
<br><br>

### Output

1 dòng duy nhất in ra các mã số vé mà Bun cần phải mua. Nếu **có nhiều cách chọn mua vé**, hãy in ra cách chọn mà **2 tờ vé cuối cùng có hiệu là lớn nhất**. <br>
Nếu không có cách chọn nào hãy in ra -1.

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
        10 3<br>
        6 4
    </td>
    <td>
        1 2 7<br>
        -1
    </td>
</tr>

</tbody>
</table>
