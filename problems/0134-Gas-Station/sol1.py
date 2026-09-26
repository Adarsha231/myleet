# ==========================================================
# 134. Gas Station
# Difficulty : Medium
# Language   : Python
# Solution   : #1
# Runtime    : 19 ms (Beats 76%)
# Memory     : 26.1 MB (Beats 15%)
# Link       : https://leetcode.com/problems/gas-station/
# ==========================================================

class Solution:                                                          
    def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int:
        if sum(gas) < sum(cost):
            return -1           
        start = 0
        tank = 0 
        for i in range(len(gas)):         
            tank = tank + gas[i] - cost[i]
            if tank < 0:     
                tank = 0     
                start = i + 1
        return start          