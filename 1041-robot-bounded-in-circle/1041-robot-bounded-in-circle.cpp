class Solution {
public:
    bool isRobotBounded(string instructions) {
        // 0->N
        // 1->S
        // 2->E
        // 3->W
        int x = 0, y = 0, d = 0;
        for (int i = 0; i < instructions.length(); i++) {
            if (instructions[i] == 'G') {
                if (d == 0) {
                    y += 1;
                } else if (d == 1) {
                    x += 1;
                } else if (d == 2) {
                    y -= 1;
                } else if (d == 3) {
                    x -= 1;
                }
            }
            if (instructions[i] == 'L') {
                d = (d + 3) % 4;
            }
            if (instructions[i] == 'R') {
                d = (d + 1) % 4;
            }
        }
        if (x == 0 && y == 0) {
            return true;
        }
        if (d != 0) {
            return true;
        }
        return false;
    }
};