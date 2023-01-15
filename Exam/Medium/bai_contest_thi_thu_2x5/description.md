### Description

**Bun** là một thần đồng boardgame, cậu đã chơi qua mọi thể loại boardgame trên đời và tự tin là mình là người chơi boardgame hay nhất PTIT. Tuy nhiên cậu có một đối thủ truyền kiếp có tên là **sirQ** và hai người luôn đáu tranh cho dành hiệu người chơi boardgame top 1 PTIT. Một ngày nọ, Bun nghĩ ra một trò chơi để tỉ thí với sirQ. <br>
Luật của trò chơi như sau: Có tổng **n** thẻ bài được phát ra, mỗi thẻ có giá trị là một số tự nhiên. Mỗi một lượt, một người chơi có thể chọn 1 thẻ bài và bỏ đi khỏi bộ bài. Khi một thẻ bài được bỏ, tất cả các thẻ bài **có giá trị nhỏ hơn nó cũng được tự động bỏ ra khỏi bộ bài**. Người chơi không thể chọn một lá bài trong lượt của mình sẽ thua cuộc. <br>
Bun **luôn là người được đi trước**. Hãy in ra kết quả của ván đấu đó. Nếu Bun thắng in ra "Game la de", nếu Bun thua in ra "Chap thoi".
<br><br>

### Input

Dòng đầu tiên chứa số nguyên T là số bộ test (1 &leq; T &leq; $10^4$).
<br>
Dòng tiếp theo chứa số nguyên n (1 &leq; n &leq; $10^7$)
Dòng tiếp theo chứa các sô nguyên a[i] với a[i] là giá trị trên thẻ bài thứ i(1 &leq; a[i] &leq; $10^3$)
<br><br>

### Output

Với mỗi bộ test, in ra1 dòng duy nhất là kết quả của trận đấu.

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
        1 1<br>
        3<br>
        4 5 7
    </td>
    <td>
        Chap thoi<br>
        Game la de
    </td>
</tr>

</tbody>
</table>
