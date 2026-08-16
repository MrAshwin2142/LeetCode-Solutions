from collections import defaultdict

class Solution:
    minMan= dict()

    def nearestDrone(self, drones: list[list[int]], target: list[int]) -> int:
        ans = 12000
        ind = -1
        for i in range(len(drones)):
            dis = abs(drones[i][0]-target[0]) + abs(drones[i][1]-target[1])
            if dis<=drones[i][2] and ans > dis:
                ans = dis
                ind = i 
        if ans==1200:
            return -1
        return ind