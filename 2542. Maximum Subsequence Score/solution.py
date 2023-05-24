class Solution:
    def maxScore(self, nums1: List[int], nums2: List[int], k: int) -> int:
        pairs = sorted(list(zip(nums1,nums2)),key=lambda x:-x[1])
        minheap = []
        result = 0
        summ = 0
        for i , j in pairs:
            summ += i
            heapq.heappush(minheap,i)
            if len(minheap) > k:
                ipop = heapq.heappop(minheap)
                summ -= ipop
            if len(minheap) == k:
                result = max(result , summ*j)
        return result
