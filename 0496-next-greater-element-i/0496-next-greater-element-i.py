class Solution(object):
    def nextGreaterElement(self, nums1, nums2):
        n = len(nums1)
        m = len(nums2)
        st = []
        mpp = {}
        for i in range(m-1,-1,-1):
            while st and nums2[i] >= st[-1]:
                st.pop()
            if not st:
                mpp[nums2[i]] = -1
            else:
                mpp[nums2[i]] = st[-1]

            st.append(nums2[i])

        ans = []
        for i in range(n):
            ans.append(mpp[nums1[i]])

        return ans

        

        